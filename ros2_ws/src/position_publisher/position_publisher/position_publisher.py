#!/usr/bin/env python3
"""
Real-Time Optitrack to MAVLink Bridge
For RFD900x @ 115200 baud

Features:
- 30Hz position and velocity updates to flight controller
- Real-time SCHED_FIFO scheduling for deterministic timing
- Velocity calculated at mocap rate (~100Hz), EMA filtered
- Minimal telemetry (all streams disabled except heartbeat)
- Time synchronization with flight controller
- ROS2 service server for commands (run drone_commander.py in a separate terminal)

Services exposed:
  /save_zero_position  (std_srvs/Trigger)  -- saves current NED pos + yaw
  /goto_zero_position  (std_srvs/Trigger)  -- switches to Guided, flies to saved zero with yaw hold
"""

from pymavlink import mavutil
import time
import rclpy
import numpy as np
import threading
from rclpy.node import Node
from scipy.spatial.transform import Rotation as R
from geometry_msgs.msg import PoseStamped
from std_srvs.srv import Trigger

# Real-time scheduling support
try:
    import ctypes
    import ctypes.util
    libc = ctypes.CDLL(ctypes.util.find_library('c'))
    HAS_RT_SCHED = True
except Exception:
    HAS_RT_SCHED = False


class Vicon2MavlinkBridge(Node):
    """Bridge between Optitrack mocap and ArduPilot via MAVLink"""

    def __init__(self, mavlink_connection_string, use_rt_scheduling=True):
        super().__init__('vicon_mavlink_bridge')

        self.use_rt_scheduling = use_rt_scheduling and HAS_RT_SCHED

        # ------------------------------------------------------------------
        # Mocap subscription
        # ------------------------------------------------------------------
        self.subscription = self.create_subscription(
            PoseStamped,
            'crashDrone/pose',
            self.mocap_callback,
            10)
        self.get_logger().info('Subscribed to crashDrone/pose')

        # ------------------------------------------------------------------
        # Time synchronization state
        # ------------------------------------------------------------------
        self.fc_time_offset_us = None
        self.fc_boot_time_us   = None
        self.last_sync_time    = 0
        self.sync_interval     = 10.0   # seconds between re-syncs

        # ------------------------------------------------------------------
        # Velocity estimation state
        # ------------------------------------------------------------------
        self.prev_position       = None
        self.prev_timestamp      = None
        self.velocity_alpha      = 0.3   # EMA coefficient
        self.filtered_vel        = None
        self.vel_spike_threshold = 5.0  # m/s — reject above this

        # ------------------------------------------------------------------
        # Latest mocap data (shared between mocap callback and publish timer)
        # ------------------------------------------------------------------
        self.latest_data = None
        self.data_lock   = threading.Lock()

        # ------------------------------------------------------------------
        # Zero position reference: (x_ned, y_ned, z_ned, yaw_rad)
        # Yaw is included so goto_zero restores heading, not just XYZ.
        # ------------------------------------------------------------------
        self.zero_position = None

        # ------------------------------------------------------------------
        # Statistics counters
        # ------------------------------------------------------------------
        self.messages_sent            = 0
        self.velocity_spikes_rejected = 0
        self.mocap_updates            = 0
        self.last_stats_time          = time.time()

        # ------------------------------------------------------------------
        # MAVLink connection
        # ------------------------------------------------------------------
        self.get_logger().info(f'Connecting to MAVLink: {mavlink_connection_string}')
        self.mavlink_master = mavutil.mavlink_connection(mavlink_connection_string)
        self.mavlink_master.wait_heartbeat()
        self.get_logger().info(
            f'FC heartbeat received '
            f'(sys={self.mavlink_master.target_system} '
            f'comp={self.mavlink_master.target_component})'
        )

        self.configure_minimal_telemetry()

        # ------------------------------------------------------------------
        # MAVLink receiver — daemon thread, dies with the process
        # ------------------------------------------------------------------
        self.mavlink_thread = threading.Thread(
            target=self.mavlink_receiver,
            daemon=True,
            name='MAVLink_RX'
        )
        self.mavlink_thread.start()

        # ------------------------------------------------------------------
        # ROS2 service servers
        # These live in this process only. Killing drone_commander has
        # zero effect on them.
        # ------------------------------------------------------------------
        self.create_service(Trigger, 'save_zero_position', self.handle_save_zero)
        self.create_service(Trigger, 'goto_zero_position', self.handle_goto_zero)
        self.get_logger().info('Services ready: /save_zero_position  /goto_zero_position')

        # ------------------------------------------------------------------
        # ROS2 timers
        # ------------------------------------------------------------------
        self.create_timer(0.033, self.publish_to_fc)       # ~30 Hz
        self.create_timer(1.0,   self.request_time_sync)
        self.create_timer(10.0,  self.print_statistics)

        # ------------------------------------------------------------------
        # RT scheduling — must come last; affects the calling thread
        # ------------------------------------------------------------------
        if self.use_rt_scheduling:
            self.setup_rt_scheduling()

        self.get_logger().info('Bridge initialised and running')

    # ======================================================================
    # Setup / configuration
    # ======================================================================

    def configure_minimal_telemetry(self):
        """Disable all MAVLink telemetry streams to conserve bandwidth."""
        try:
            for stream_id in [0, 1, 2, 3, 6, 10, 11, 12]:
                self.mavlink_master.mav.request_data_stream_send(
                    self.mavlink_master.target_system,
                    self.mavlink_master.target_component,
                    stream_id, 0, 1
                )
            self.get_logger().info('Telemetry streams disabled')
        except Exception as e:
            self.get_logger().warn(f'Failed to configure telemetry: {e}')

    def setup_rt_scheduling(self):
        """Enable SCHED_FIFO priority 80 on the calling thread."""
        try:
            SCHED_FIFO = 1

            class sched_param(ctypes.Structure):
                _fields_ = [('sched_priority', ctypes.c_int)]

            param  = sched_param(80)
            result = libc.sched_setscheduler(
                threading.current_thread().ident, SCHED_FIFO, ctypes.byref(param)
            )
            if result == 0:
                self.get_logger().info('RT scheduling enabled (SCHED_FIFO priority 80)')
            else:
                self.get_logger().warn(
                    'RT scheduling failed — grant CAP_SYS_NICE or run as root'
                )
                self.use_rt_scheduling = False
        except Exception as e:
            self.get_logger().error(f'RT scheduling error: {e}')
            self.use_rt_scheduling = False

    # ======================================================================
    # Time synchronization
    # ======================================================================

    def request_time_sync(self):
        """Periodically request SYSTEM_TIME from the flight controller."""
        now = time.time()
        if self.fc_time_offset_us is None or (now - self.last_sync_time) > self.sync_interval:
            try:
                self.mavlink_master.mav.command_long_send(
                    self.mavlink_master.target_system,
                    self.mavlink_master.target_component,
                    mavutil.mavlink.MAV_CMD_REQUEST_MESSAGE, 0,
                    mavutil.mavlink.MAVLINK_MSG_ID_SYSTEM_TIME,
                    0, 0, 0, 0, 0, 0
                )
            except Exception as e:
                self.get_logger().error(f'Failed to request SYSTEM_TIME: {e}')

    def handle_system_time(self, msg):
        """Update FC time offset from a received SYSTEM_TIME message."""
        now_us       = int(time.time() * 1e6)
        fc_boot_us   = msg.time_boot_ms * 1000
        initial_sync = (self.fc_time_offset_us is None)

        # Detect FC reboot (boot counter jumped backwards by >1 s)
        if self.fc_boot_time_us is not None:
            if fc_boot_us < (self.fc_boot_time_us - 1_000_000):
                self.get_logger().warn('FC reboot detected — resetting velocity filter')
                self.filtered_vel   = None
                self.prev_position  = None
                self.prev_timestamp = None
                initial_sync        = True

        self.fc_time_offset_us = fc_boot_us - now_us
        self.fc_boot_time_us   = fc_boot_us
        self.last_sync_time    = time.time()

        if initial_sync:
            self.get_logger().info(f'Time sync established: FC boot={fc_boot_us/1e6:.2f}s')

    def get_fc_time_usec(self):
        """Return current time in the FC timebase (µs since boot), or None."""
        if self.fc_time_offset_us is None:
            return None
        return int(time.time() * 1e6) + self.fc_time_offset_us

    # ======================================================================
    # MAVLink receiver thread
    # ======================================================================

    def mavlink_receiver(self):
        """Background thread: receive and dispatch incoming MAVLink messages."""
        self.get_logger().info('MAVLink RX thread started')

        if self.use_rt_scheduling:
            try:
                class sched_param(ctypes.Structure):
                    _fields_ = [('sched_priority', ctypes.c_int)]
                param = sched_param(40)
                libc.sched_setscheduler(
                    threading.current_thread().ident, 1, ctypes.byref(param)
                )
            except Exception:
                pass

        while rclpy.ok():
            try:
                msg = self.mavlink_master.recv_match(
                    blocking=True, timeout=0.1,
                    type=['SYSTEM_TIME', 'STATUSTEXT', 'COMMAND_ACK']
                )
                if msg is None:
                    continue

                t = msg.get_type()
                if t == 'SYSTEM_TIME':
                    self.handle_system_time(msg)
                elif t == 'STATUSTEXT' and msg.severity <= 4:
                    self.get_logger().warn(f'FC: {msg.text}')
                elif t == 'COMMAND_ACK':
                    self.get_logger().info(
                        f'CMD_ACK cmd={msg.command} result={msg.result}'
                    )
            except Exception as e:
                self.get_logger().error(f'MAVLink RX error: {e}')
                time.sleep(0.1)

    # ======================================================================
    # Mocap callback and position publishing
    # ======================================================================

    def mocap_callback(self, msg):
        """Ingest mocap pose, compute EMA-filtered velocity, store latest data."""
        x  = msg.pose.position.x
        y  = msg.pose.position.y
        z  = msg.pose.position.z
        qx = msg.pose.orientation.x
        qy = msg.pose.orientation.y
        qz = msg.pose.orientation.z
        qw = msg.pose.orientation.w

        # Reject null / uninitialised frames
        quaternion = np.array([qx, qy, qz, qw])
        quat_norm  = np.linalg.norm(quaternion)
        if x == y == z == 0.0 and quat_norm < 1e-6:
            return

        quaternion /= quat_norm
        euler       = R.from_quat(quaternion).as_euler('ZYX', degrees=False)
        roll        = euler[2]
        pitch       = euler[1]
        yaw         = euler[0]

        # Mocap frame assumed pre-aligned to NED via Motive configuration
        x_ned = x
        y_ned = y
        z_ned = z
        now   = time.time()

        # Finite-difference velocity with EMA filter
        vx = vy = vz = 0.0
        velocity_valid = False

        if self.prev_position is not None and self.prev_timestamp is not None:
            dt = now - self.prev_timestamp
            if 0.005 < dt < 0.05:      # valid only in 20–200 Hz window
                vx_raw = (x_ned - self.prev_position[0]) / dt
                vy_raw = (y_ned - self.prev_position[1]) / dt
                vz_raw = (z_ned - self.prev_position[2]) / dt

                if np.linalg.norm([vx_raw, vy_raw, vz_raw]) < self.vel_spike_threshold:
                    if self.filtered_vel is None:
                        self.filtered_vel = [vx_raw, vy_raw, vz_raw]
                    else:
                        a = self.velocity_alpha
                        self.filtered_vel[0] = a * vx_raw + (1-a) * self.filtered_vel[0]
                        self.filtered_vel[1] = a * vy_raw + (1-a) * self.filtered_vel[1]
                        self.filtered_vel[2] = a * vz_raw + (1-a) * self.filtered_vel[2]
                    vx, vy, vz = self.filtered_vel
                    velocity_valid = True
                else:
                    self.velocity_spikes_rejected += 1
                    # Use last good estimate rather than zeros
                    if self.filtered_vel is not None:
                        vx, vy, vz = self.filtered_vel
                        velocity_valid = True

        with self.data_lock:
            self.latest_data = {
                'x_ned': x_ned, 'y_ned': y_ned, 'z_ned': z_ned,
                'roll':  roll,  'pitch': pitch,  'yaw':   yaw,
                'vx': vx, 'vy': vy, 'vz': vz,
                'velocity_valid': velocity_valid,
                'timestamp': now,
            }
            self.mocap_updates += 1

        self.prev_position  = (x_ned, y_ned, z_ned)
        self.prev_timestamp = now

    def publish_to_fc(self):
        """30 Hz timer: forward latest mocap pose + velocity to the FC."""
        with self.data_lock:
            if self.latest_data is None:
                return
            if time.time() - self.latest_data['timestamp'] > 0.1:
                return  # stale frame — skip

            time_usec = self.get_fc_time_usec()
            if time_usec is None:
                if not hasattr(self, '_warn_sync_once'):
                    self.get_logger().warn('No FC time sync yet — holding position data')
                    self._warn_sync_once = True
                return
            if hasattr(self, '_warn_sync_once'):
                del self._warn_sync_once

            ok = self.send_vision_position_estimate(
                time_usec,
                self.latest_data['x_ned'],
                self.latest_data['y_ned'],
                self.latest_data['z_ned'],
                self.latest_data['roll'],
                self.latest_data['pitch'],
                self.latest_data['yaw'],
            )
            if ok and self.latest_data['velocity_valid']:
                self.send_vision_speed_estimate(
                    time_usec,
                    self.latest_data['vx'],
                    self.latest_data['vy'],
                    self.latest_data['vz'],
                )
            if ok:
                self.messages_sent += 1

    def send_vision_position_estimate(self, time_usec, x, y, z, roll, pitch, yaw):
        """Send VISION_POSITION_ESTIMATE to the FC."""
        try:
            covariance = [
                0.00001, 0.0, 0.0, 0.0, 0.0, 0.0,
                0.0, 0.00001, 0.0, 0.0, 0.0, 0.0,
                0.0, 0.0, 0.00001, 0.0, 0.0, 0.0,
                0.0, 0.0, 0.0, 999.0, 0.0, 0.0,
                0.0, 0.0, 0.0, 0.0, 999.0, 0.0,
                0.0, 0.0, 0.0, 0.0, 0.0, 0.05,
            ]
            self.mavlink_master.mav.vision_position_estimate_send(
                usec=time_usec, x=x, y=y, z=z,
                roll=roll, pitch=pitch, yaw=yaw,
                covariance=covariance, reset_counter=0
            )
            return True
        except Exception as e:
            self.get_logger().error(f'Failed to send position estimate: {e}')
            return False

    def send_vision_speed_estimate(self, time_usec, vx, vy, vz):
        """Send VISION_SPEED_ESTIMATE to the FC."""
        try:
            covariance = [0.002, 0.0, 0.0, 0.0, 0.002, 0.0, 0.0, 0.0, 0.002]
            self.mavlink_master.mav.vision_speed_estimate_send(
                usec=time_usec, x=vx, y=vy, z=vz,
                covariance=covariance, reset_counter=0
            )
            return True
        except Exception as e:
            self.get_logger().error(f'Failed to send speed estimate: {e}')
            return False

    # ======================================================================
    # ROS2 service handlers
    # ======================================================================

    def handle_save_zero(self, request, response):
        """
        Save the current NED position AND yaw as the zero reference point.

        Yaw is captured here so that goto_zero can restore the full pose
        (position + heading), not just XYZ.
        """
        with self.data_lock:
            if self.latest_data is None:
                response.success = False
                response.message = 'No mocap data — is Motive streaming?'
                self.get_logger().warn(response.message)
                return response

            self.zero_position = (
                self.latest_data['x_ned'],
                self.latest_data['y_ned'],
                self.latest_data['z_ned'],
                self.latest_data['yaw'],    # radians, NED convention
            )

        x0, y0, z0, yaw0 = self.zero_position
        response.success = True
        response.message = (
            f'Zero saved  x={x0:.3f}  y={y0:.3f}  z={z0:.3f}  '
            f'yaw={np.degrees(yaw0):.1f} deg'
        )
        self.get_logger().info(response.message)
        return response

    def handle_goto_zero(self, request, response):
        """
        Switch to GUIDED and send a full pose target (position + yaw) at the
        saved zero.

        type_mask bit reference (1 = ignore field, 0 = use field):
          bits 0-2   x  y  z      → 0 0 0  (USED — position target)
          bits 3-5   vx vy vz     → 1 1 1  (ignored)
          bits 6-8   ax ay az     → 1 1 1  (ignored)
          bit  9     force        → 0      (unused/deprecated)
          bit  10    yaw          → 0      (USED — heading hold)
          bit  11    yaw_rate     → 1      (ignored)
          = 0b0000100111111000 = 0x9F8 = 2552
        """
        if self.zero_position is None:
            response.success = False
            response.message = 'No zero saved — call /save_zero_position first'
            self.get_logger().warn(response.message)
            return response

        x0, y0, z0, yaw0 = self.zero_position

        try:
            self.mavlink_master.set_mode('GUIDED')
            time.sleep(0.1)     # let FC register mode switch before the waypoint arrives

            self.mavlink_master.mav.set_position_target_local_ned_send(
                0,                                       # time_boot_ms (unused by FC)
                self.mavlink_master.target_system,
                self.mavlink_master.target_component,
                mavutil.mavlink.MAV_FRAME_LOCAL_NED,     # origin = EKF origin
                0b0000100111111000,                      # use x, y, z, yaw; ignore vel, accel, yaw_rate
                x0, y0, z0,                              # position  (m)
                0.0, 0.0, 0.0,                           # velocity  (ignored)
                0.0, 0.0, 0.0,                           # accel     (ignored)
                yaw0, 0.0,                               # yaw (rad), yaw_rate (ignored)
            )
        except Exception as e:
            response.success = False
            response.message = f'MAVLink send failed: {e}'
            self.get_logger().error(response.message)
            return response

        response.success = True
        response.message = (
            f'Goto zero  x={x0:.3f}  y={y0:.3f}  z={z0:.3f}  '
            f'yaw={np.degrees(yaw0):.1f} deg'
        )
        self.get_logger().info(response.message)
        return response

    # ======================================================================
    # Statistics
    # ======================================================================

    def print_statistics(self):
        now     = time.time()
        elapsed = now - self.last_stats_time
        if elapsed > 0:
            self.get_logger().info(
                f'Stats — mocap: {self.mocap_updates/elapsed:.0f} Hz  '
                f'FC out: {self.messages_sent/elapsed:.1f} Hz  '
                f'spikes: {self.velocity_spikes_rejected/elapsed:.2f}/s'
            )
        self.messages_sent            = 0
        self.velocity_spikes_rejected = 0
        self.mocap_updates            = 0
        self.last_stats_time          = now


# ==============================================================================
# Entry point
# ==============================================================================

def main(args=None):
    print('=' * 65)
    print('  Optitrack → MAVLink Bridge  (position_publisher)')
    print('=' * 65)

    rclpy.init(args=args)

    # ── Change to your RFD900x port, e.g. '/dev/ttyUSB0:115200'
    MAVLINK_CONNECTION = 'udp:127.0.0.1:14550'

    bridge = None
    try:
        bridge = Vicon2MavlinkBridge(MAVLINK_CONNECTION, use_rt_scheduling=True)
        rclpy.spin(bridge)
    except KeyboardInterrupt:
        print('\nCtrl+C — shutting down bridge')
    except Exception as e:
        import traceback
        print(f'\nFATAL: {e}')
        traceback.print_exc()
    finally:
        if bridge is not None:
            bridge.destroy_node()
        try:
            rclpy.shutdown()
        except Exception:
            pass
        print('Bridge stopped.')


if __name__ == '__main__':
    main()