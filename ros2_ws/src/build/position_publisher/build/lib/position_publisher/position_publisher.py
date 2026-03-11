"""
Real-Time Optitrack to MAVLink Bridge
Optimized for 915MHz @ 57600 baud telemetry radios

Key optimizations:
- 20Hz publish rate to fit in 57600 baud bandwidth
- Real-time SCHED_FIFO scheduling for deterministic timing
- Thread priorities: Publish > Mocap > Receiver > Stats
- Minimal logging to reduce overhead
- Velocity calculated at mocap rate (100Hz+) for quality
"""

from pymavlink import mavutil
import time
import rclpy
import numpy as np
import threading
import os
import sys
from rclpy.node import Node
from scipy.spatial.transform import Rotation as R
from geometry_msgs.msg import PoseStamped
from collections import deque

# Try to import real-time scheduling (requires running as root or with CAP_SYS_NICE)
try:
    import ctypes
    import ctypes.util
    libc = ctypes.CDLL(ctypes.util.find_library('c'))
    HAS_RT_SCHED = True
except:
    HAS_RT_SCHED = False
    print("Warning: Real-time scheduling not available")

class vicon2mavlink_bridge(Node):

    def __init__(self, mavlink_connection_string, use_rt_scheduling=True):
        super().__init__('vicon_subscriber')
        
        self.use_rt_scheduling = use_rt_scheduling and HAS_RT_SCHED
        
        # Subscribe to mocap topic
        self.get_logger().info('Subscribing to mocap rigid_bodies...')
        self.subscription = self.create_subscription(
            PoseStamped,
            'crashDrone/pose',
            self.subscriber_callback,
            10)
        self.subscription
        self.get_logger().info('Subscribed to mocap rigid_bodies!')
        
        # Time synchronization variables
        self.fc_time_offset_us = None
        self.fc_boot_time_us = None
        self.last_sync_time = 0
        self.sync_interval = 10.0
        self.time_sync_timeout = 30.0
        
        # Position and velocity tracking (at MOCAP rate)
        self.prev_position = None
        self.prev_timestamp = None
        
        # Velocity estimation with light filtering
        self.velocity_alpha = 0.3  
        self.filtered_vel = None
        
        # Velocity spike detection
        self.vel_spike_threshold = 5.0
        
        # Store latest position AND velocity data (updated at mocap rate)
        self.latest_data = None
        self.data_lock = threading.Lock()
        
        # Statistics
        self.messages_sent = 0
        self.messages_dropped = 0
        self.velocity_spikes_rejected = 0
        self.mocap_updates = 0
        self.mavlink_msg_count = 0
        self.last_stats_time = time.time()
        self.last_msg_count_time = time.time()
        
        # EKF monitoring
        self.last_local_pos_time = 0
        self.ekf_status_ok = False
        self.vision_pos_received = False
        self.vision_vel_received = False
        
        # Connect to MAVLink
        self.mavlink_master = mavutil.mavlink_connection(mavlink_connection_string)
        self.get_logger().info('Connecting to mavlink...')
        self.mavlink_master.wait_heartbeat()
        self.get_logger().info('Connected to mavlink!')
        
        # Disable all telemetry streams to minimize incoming bandwidth
        # We'll request specific messages once per second in the status check
        self.get_logger().info('Configuring minimal telemetry streams...')
        self.configure_minimal_telemetry()
        
        # Start background thread to receive MAVLink messages (NORMAL priority)
        self.mavlink_thread = threading.Thread(
            target=self.mavlink_receiver, 
            daemon=True,
            name="MAVLink_RX"
        )
        self.mavlink_thread.start()
        
        # Create timer for 20Hz publishing to FC (will be HIGH priority)
        # 20Hz = 50ms period, fits in 57600 baud bandwidth with minimal telemetry
        self.publish_timer = self.create_timer(0.05, self.publish_position)
        
        # Create timer for time sync AND status check requests (LOW priority)
        # Requests messages once per second instead of streaming continuously
        self.sync_timer = self.create_timer(1.0, self.request_time_sync_and_status)
        
        # Create timer for statistics (LOWEST priority)
        self.stats_timer = self.create_timer(10.0, self.print_statistics)
        
        # Apply real-time scheduling if available
        if self.use_rt_scheduling:
            self.setup_rt_scheduling()
        else:
            self.get_logger().warn(
                "Real-time scheduling not available. For best performance, run with:\n"
                "  sudo setcap cap_sys_nice=eip $(which python3)\n"
                "  Or: sudo nice -n -20 python3 your_script.py"
            )
        
        self.get_logger().info('Bridge initialized! Publishing at 20Hz')
    
    def configure_minimal_telemetry(self):
        """
        Configure FC to send minimal telemetry
        We don't need continuous streams - just check status once per second
        """
        try:
            # Request very low rate for all streams (basically disable them)
            # Stream IDs: 0=RAW_SENSORS, 1=EXTENDED_STATUS, 2=RC_CHANNELS, 
            #             3=RAW_CONTROLLER, 6=POSITION, 10=EXTRA1, 11=EXTRA2, 12=EXTRA3
            for stream_id in [0, 1, 2, 3, 6, 10, 11, 12]:
                self.mavlink_master.mav.request_data_stream_send(
                    self.mavlink_master.target_system,
                    self.mavlink_master.target_component,
                    stream_id,
                    0,  # Rate = 0 (disable)
                    1   # Start/stop = 1 (start, but at 0Hz = effectively disabled)
                )
            
            # Only keep heartbeat (automatic, can't disable)
            self.get_logger().info('✓ Telemetry streams minimized')
            
        except Exception as e:
            self.get_logger().warn(f"Failed to configure telemetry: {e}")
    
    def request_status_messages(self):
        """
        Request specific messages for status check (called once per second)
        Instead of streaming these continuously, we request them on-demand
        """
        try:
            # Request LOCAL_POSITION_NED (once)
            self.mavlink_master.mav.command_long_send(
                self.mavlink_master.target_system,
                self.mavlink_master.target_component,
                mavutil.mavlink.MAV_CMD_REQUEST_MESSAGE,
                0,
                mavutil.mavlink.MAVLINK_MSG_ID_LOCAL_POSITION_NED,
                0, 0, 0, 0, 0, 0
            )
            
            # Request VISION_POSITION_ESTIMATE (once) 
            self.mavlink_master.mav.command_long_send(
                self.mavlink_master.target_system,
                self.mavlink_master.target_component,
                mavutil.mavlink.MAV_CMD_REQUEST_MESSAGE,
                0,
                mavutil.mavlink.MAVLINK_MSG_ID_VISION_POSITION_ESTIMATE,
                0, 0, 0, 0, 0, 0
            )
            
            # Request VISION_SPEED_ESTIMATE (once)
            self.mavlink_master.mav.command_long_send(
                self.mavlink_master.target_system,
                self.mavlink_master.target_component,
                mavutil.mavlink.MAV_CMD_REQUEST_MESSAGE,
                0,
                mavutil.mavlink.MAVLINK_MSG_ID_VISION_SPEED_ESTIMATE,
                0, 0, 0, 0, 0, 0
            )
            
        except Exception as e:
            self.get_logger().error(f"Failed to request status messages: {e}")


    def setup_rt_scheduling(self):
        """
        Set up real-time SCHED_FIFO scheduling for time-critical threads
        
        Priority levels (1-99, higher = more priority):
        - 80: Publish thread (most critical - sends to FC)
        - 60: Mocap callback (calculates velocity)
        - 40: MAVLink receiver (monitors status)
        - 20: Statistics (logging)
        """
        if not self.use_rt_scheduling:
            return
        
        try:
            # Get thread IDs
            main_tid = threading.current_thread().ident
            
            # SCHED_FIFO = 1
            SCHED_FIFO = 1
            
            class sched_param(ctypes.Structure):
                _fields_ = [('sched_priority', ctypes.c_int)]
            
            # Set main thread (ROS2 executor, handles timers) to HIGH priority
            param = sched_param(80)  # High priority for publish timer
            result = libc.sched_setscheduler(main_tid, SCHED_FIFO, ctypes.byref(param))
            
            if result == 0:
                self.get_logger().info(
                    "✓ Real-time scheduling enabled (SCHED_FIFO priority 80)"
                )
            else:
                self.get_logger().warn(
                    f"Failed to set RT scheduling (error {result}). "
                    "Run as root or grant CAP_SYS_NICE capability."
                )
                self.use_rt_scheduling = False
                
        except Exception as e:
            self.get_logger().error(f"RT scheduling setup failed: {e}")
            self.use_rt_scheduling = False

    def request_time_sync_and_status(self):
        """
        Request SYSTEM_TIME from flight controller periodically
        Also request status messages once per second
        """
        current_time = time.time()
        
        # Request time sync
        if self.fc_time_offset_us is None or \
           (current_time - self.last_sync_time) > self.sync_interval:
            
            try:
                self.mavlink_master.mav.command_long_send(
                    self.mavlink_master.target_system,
                    self.mavlink_master.target_component,
                    mavutil.mavlink.MAV_CMD_REQUEST_MESSAGE,
                    0,
                    mavutil.mavlink.MAVLINK_MSG_ID_SYSTEM_TIME,
                    0, 0, 0, 0, 0, 0
                )
            except Exception as e:
                self.get_logger().error(f"Failed to request SYSTEM_TIME: {e}")
        
        if self.fc_time_offset_us is not None and \
           (current_time - self.last_sync_time) > self.time_sync_timeout:
            self.get_logger().warn(
                f"Time sync stale! Last sync {current_time - self.last_sync_time:.1f}s ago"
            )
        
        # Request status messages once per second (instead of continuous stream)
        self.request_status_messages()
    
    def mavlink_receiver(self):
        """
        Background thread to receive MAVLink messages
        Runs at NORMAL priority (below publish thread)
        """
        self.get_logger().info('MAVLink receiver thread started')
        
        # Lower this thread's priority (if RT scheduling active)
        if self.use_rt_scheduling:
            try:
                class sched_param(ctypes.Structure):
                    _fields_ = [('sched_priority', ctypes.c_int)]
                
                tid = threading.current_thread().ident
                param = sched_param(40)  # Lower than publish (80)
                libc.sched_setscheduler(tid, 1, ctypes.byref(param))  # SCHED_FIFO
            except:
                pass
        
        # Only monitor these message types (filter at receive level for efficiency)
        MONITORED_MESSAGES = {
            'SYSTEM_TIME', 
            'LOCAL_POSITION_NED',
            'VISION_POSITION_ESTIMATE', 
            'VISION_SPEED_ESTIMATE',
            'STATUSTEXT'
        }
        
        while rclpy.ok():
            try:
                # Short timeout to avoid blocking
                msg = self.mavlink_master.recv_match(
                    blocking=True, 
                    timeout=0.01,  # 10ms
                    type=list(MONITORED_MESSAGES)
                )
                if msg is None:
                    continue
                
                self.mavlink_msg_count += 1
                msg_type = msg.get_type()
                
                if msg_type == 'SYSTEM_TIME':
                    self.handle_system_time(msg)
                
                elif msg_type == 'VISION_POSITION_ESTIMATE':
                    if not self.vision_pos_received:
                        self.vision_pos_received = True
                        self.get_logger().info(
                            f"✓ FC receiving VISION_POSITION_ESTIMATE: "
                            f"x={msg.x:.2f}, y={msg.y:.2f}, z={msg.z:.2f}"
                        )
                
                elif msg_type == 'VISION_SPEED_ESTIMATE':
                    if not self.vision_vel_received:
                        self.vision_vel_received = True
                        self.get_logger().info(
                            f"✓ FC receiving VISION_SPEED_ESTIMATE: "
                            f"vx={msg.x:.2f}, vy={msg.y:.2f}, vz={msg.z:.2f}"
                        )
                
                elif msg_type == 'LOCAL_POSITION_NED':
                    self.last_local_pos_time = time.time()
                    
                    if not self.ekf_status_ok:
                        if self.vision_pos_received and self.vision_vel_received:
                            self.ekf_status_ok = True
                            self.get_logger().info(
                                f"✓✓✓ EKF FUSION WORKING! ✓✓✓\n"
                                f"  Vision Pos: ✓ Received\n"
                                f"  Vision Vel: ✓ Received\n"
                                f"  LOCAL_POS_NED: pos=({msg.x:.2f},{msg.y:.2f},{msg.z:.2f}) "
                                f"vel=({msg.vx:.2f},{msg.vy:.2f},{msg.vz:.2f})"
                            )
                        else:
                            missing = []
                            if not self.vision_pos_received:
                                missing.append("VISION_POSITION_ESTIMATE")
                            if not self.vision_vel_received:
                                missing.append("VISION_SPEED_ESTIMATE")
                            
                            self.get_logger().warn(
                                f"LOCAL_POSITION_NED active but missing: {', '.join(missing)}"
                            )
                
                elif msg_type == 'STATUSTEXT':
                    if msg.severity <= 4:
                        self.get_logger().warn(f"FC: {msg.text}")
                    
            except Exception as e:
                self.get_logger().error(f"MAVLink receiver error: {e}")
                time.sleep(0.01)
        
        self.get_logger().info('MAVLink receiver thread stopped')
    
    def handle_system_time(self, msg):
        """Process SYSTEM_TIME message to calculate time offset"""
        current_pi_time_us = int(time.time() * 1e6)
        fc_boot_time_us = msg.time_boot_ms * 1000
        
        is_initial_sync = (self.fc_time_offset_us is None)
        
        # Detect FC reboot
        if self.fc_boot_time_us is not None:
            if fc_boot_time_us < (self.fc_boot_time_us - 1000000):
                self.get_logger().warn("FC reboot detected! Resetting filters...")
                self.filtered_vel = None
                self.prev_position = None
                self.prev_timestamp = None
                self.vision_pos_received = False
                self.vision_vel_received = False
                self.ekf_status_ok = False
                is_initial_sync = True
        
        self.fc_time_offset_us = fc_boot_time_us - current_pi_time_us
        self.fc_boot_time_us = fc_boot_time_us
        self.last_sync_time = time.time()
        
        if is_initial_sync:
            self.get_logger().info(
                f"Time sync: FC boot={fc_boot_time_us/1e6:.2f}s, "
                f"offset={self.fc_time_offset_us/1e6:.3f}s"
            )
    
    def get_fc_time_usec(self):
        """Get current time in FC's timebase"""
        if self.fc_time_offset_us is None:
            return None
        
        current_pi_time_us = int(time.time() * 1e6)
        fc_time_us = current_pi_time_us + self.fc_time_offset_us
        
        return fc_time_us
    
    def subscriber_callback(self, msg):
        """
        Callback for mocap pose data - runs at MOCAP rate (~100-120Hz)
        Calculate velocity HERE at high rate for better quality
        This runs at NORMAL priority (ROS2 callback)
        """
        
        # Extract position
        x = msg.pose.position.x
        y = msg.pose.position.y
        z = msg.pose.position.z

        # Extract quaternion
        qx = msg.pose.orientation.x
        qy = msg.pose.orientation.y
        qz = msg.pose.orientation.z
        qw = msg.pose.orientation.w

        # Validate quaternion
        quaternion = np.array([qx, qy, qz, qw])
        quat_norm = np.linalg.norm(quaternion)
        
        if x == y == z == qx == qy == qz == qw == 0.0:
            self.messages_dropped += 1
            return
        
        if quat_norm < 1e-6:
            self.messages_dropped += 1
            return
        
        quaternion = quaternion / quat_norm
        
        # Convert to Euler angles
        rotation = R.from_quat(quaternion)
        euler_angles = rotation.as_euler('ZYX', degrees=False)
        roll = euler_angles[2]
        pitch = euler_angles[1]
        yaw = euler_angles[0]

        # Frame conversion (adjust based on your Optitrack config)
        x_ned = x
        y_ned = y
        z_ned = z
        
        current_timestamp = time.time()
        
        # Calculate velocity at MOCAP rate
        vx, vy, vz = 0.0, 0.0, 0.0
        velocity_valid = False
        
        if self.prev_position is not None and self.prev_timestamp is not None:
            dt = current_timestamp - self.prev_timestamp
            
            # Expect dt ~0.008-0.012s for 100-120Hz mocap
            if 0.005 < dt < 0.05:
                # Raw velocity (clean with small dt)
                vx_raw = (x_ned - self.prev_position[0]) / dt
                vy_raw = (y_ned - self.prev_position[1]) / dt
                vz_raw = (z_ned - self.prev_position[2]) / dt
                
                # Spike detection
                vel_magnitude = np.sqrt(vx_raw**2 + vy_raw**2 + vz_raw**2)
                
                if vel_magnitude < self.vel_spike_threshold:
                    # Light exponential smoothing
                    if self.filtered_vel is None:
                        self.filtered_vel = [vx_raw, vy_raw, vz_raw]
                    else:
                        self.filtered_vel[0] = (self.velocity_alpha * vx_raw + 
                                               (1 - self.velocity_alpha) * self.filtered_vel[0])
                        self.filtered_vel[1] = (self.velocity_alpha * vy_raw + 
                                               (1 - self.velocity_alpha) * self.filtered_vel[1])
                        self.filtered_vel[2] = (self.velocity_alpha * vz_raw + 
                                               (1 - self.velocity_alpha) * self.filtered_vel[2])
                    
                    vx, vy, vz = self.filtered_vel
                    velocity_valid = True
                else:
                    # Spike detected
                    self.velocity_spikes_rejected += 1
                    if self.filtered_vel is not None:
                        vx, vy, vz = self.filtered_vel
                        velocity_valid = True
        
        # Store position and velocity (thread-safe)
        with self.data_lock:
            self.latest_data = {
                'x_ned': x_ned,
                'y_ned': y_ned,
                'z_ned': z_ned,
                'roll': roll,
                'pitch': pitch,
                'yaw': yaw,
                'vx': vx,
                'vy': vy,
                'vz': vz,
                'velocity_valid': velocity_valid,
                'timestamp': current_timestamp
            }
            self.mocap_updates += 1
        
        # Update previous for next velocity calculation
        self.prev_position = (x_ned, y_ned, z_ned)
        self.prev_timestamp = current_timestamp

    def publish_position(self):
        """
        Timer callback at 20Hz - sends latest data to FC
        This is the HIGHEST priority operation (RT scheduled at priority 80)
        
        20Hz rate chosen for 57600 baud with minimal telemetry:
        - 2 messages × 100 bytes × 20Hz = 4000 bytes/s
        - Minimal incoming telemetry: ~120 bytes/s  
        - Total: ~4120 bytes/s = 71% of 57600 baud capacity
        """
        with self.data_lock:
            if self.latest_data is None:
                return
            
            # Check if data is recent
            data_age = time.time() - self.latest_data['timestamp']
            if data_age > 0.1:  # 100ms max age (2x our 50ms period)
                return
            
            # Get FC timestamp
            time_usec = self.get_fc_time_usec()
            if time_usec is None:
                if not hasattr(self, '_warned_no_sync'):
                    self.get_logger().warn("Waiting for time sync...")
                    self._warned_no_sync = True
                return
            else:
                if hasattr(self, '_warned_no_sync'):
                    delattr(self, '_warned_no_sync')
            
            # Send VISION_POSITION_ESTIMATE
            success = self.send_vision_position_estimate(
                time_usec,
                self.latest_data['x_ned'],
                self.latest_data['y_ned'],
                self.latest_data['z_ned'],
                self.latest_data['roll'],
                self.latest_data['pitch'],
                self.latest_data['yaw']
            )
            
            # Send VISION_SPEED_ESTIMATE if we have valid velocity
            if success and self.latest_data['velocity_valid']:
                self.send_vision_speed_estimate(
                    time_usec, 
                    self.latest_data['vx'],
                    self.latest_data['vy'],
                    self.latest_data['vz']
                )
            
            if success:
                self.messages_sent += 1
            else:
                self.messages_dropped += 1

    def send_vision_position_estimate(self, time_usec, x, y, z, roll, pitch, yaw):
        """Send VISION_POSITION_ESTIMATE message"""
        try:
            covariance = [
                0.00001, 0.0, 0.0, 0.0, 0.0, 0.0,  # x
                0.0, 0.00001, 0.0, 0.0, 0.0, 0.0,  # y
                0.0, 0.0, 0.00001, 0.0, 0.0, 0.0,  # z
                0.0, 0.0, 0.0, 999.0, 0.0, 0.0,     # roll (ignored)
                0.0, 0.0, 0.0, 0.0, 999.0, 0.0,     # pitch (ignored)
                0.0, 0.0, 0.0, 0.0, 0.0, 0.05,      # yaw
            ]
            
            self.mavlink_master.mav.vision_position_estimate_send(
                usec=time_usec,
                x=x,
                y=y,
                z=z,
                roll=roll,
                pitch=pitch,
                yaw=yaw,
                covariance=covariance,
                reset_counter=0
            )
            
            return True
            
        except Exception as e:
            self.get_logger().error(f"Failed to send VISION_POSITION_ESTIMATE: {e}")
            return False
    
    def send_vision_speed_estimate(self, time_usec, vx, vy, vz):
        """Send VISION_SPEED_ESTIMATE message"""
        try:
            covariance = [
                0.01, 0.0, 0.0,   # vx
                0.0, 0.01, 0.0,   # vy
                0.0, 0.0, 0.01    # vz
            ]
            
            self.mavlink_master.mav.vision_speed_estimate_send(
                usec=time_usec,
                x=vx,
                y=vy,
                z=vz,
                covariance=covariance,
                reset_counter=0
            )
            
            return True
            
        except Exception as e:
            self.get_logger().error(f"Failed to send VISION_SPEED_ESTIMATE: {e}")
            return False
    
    def print_statistics(self):
        """
        Print bridge statistics every 10 seconds
        Runs at LOWEST priority to avoid interfering with critical operations
        """
        current_time = time.time()
        elapsed = current_time - self.last_stats_time
        
        if elapsed > 0:
            send_rate = self.messages_sent / elapsed
            mocap_rate = self.mocap_updates / elapsed
            spike_rate = self.velocity_spikes_rejected / elapsed
            
            # Calculate MAVLink receive rate
            mavlink_elapsed = current_time - self.last_msg_count_time
            if mavlink_elapsed > 0:
                mavlink_rate = self.mavlink_msg_count / mavlink_elapsed
            else:
                mavlink_rate = 0
            
            local_pos_age = current_time - self.last_local_pos_time
            ekf_status = "✓ OK" if local_pos_age < 1.0 else "✗ NOT FUSING"
            
            # Check message reception
            pos_status = "✓" if self.vision_pos_received else "✗"
            vel_status = "✓" if self.vision_vel_received else "✗"
            
            # Calculate bandwidth usage (approximate)
            bandwidth_out = send_rate * 100 * 2  # 2 messages × 100 bytes each
            bandwidth_in = mavlink_rate * 50  # Approximate
            bandwidth_total = bandwidth_out + bandwidth_in
            bandwidth_pct = (bandwidth_total / 5760) * 100  # 57600 baud = 5760 bytes/s
            
            self.get_logger().info(
                f"Mocap: {mocap_rate:.0f}Hz → FC: {send_rate:.1f}Hz | "
                f"MAVLink RX: {mavlink_rate:.0f}Hz | "
                f"BW: {bandwidth_pct:.0f}% ({bandwidth_total:.0f}B/s) | "
                f"Msgs: Pos{pos_status} Vel{vel_status} | "
                f"Spikes: {spike_rate:.1f}/s | "
                f"EKF: {ekf_status}"
            )
            
            # Warn if bandwidth too high
            if bandwidth_pct > 80:
                self.get_logger().warn(
                    f"⚠ Bandwidth usage high ({bandwidth_pct:.0f}%)! "
                    f"May saturate 57600 baud link."
                )
            
            # Warn if MAVLink receive rate too high
            if mavlink_rate > 150:
                self.get_logger().warn(
                    f"High MAVLink RX rate ({mavlink_rate:.0f}Hz) - check telemetry settings"
                )
            
            # Detailed warning if not working
            if not self.ekf_status_ok and self.messages_sent > 30:
                issues = []
                if not self.vision_pos_received:
                    issues.append("FC not receiving VISION_POSITION_ESTIMATE")
                if not self.vision_vel_received:
                    issues.append("FC not receiving VISION_SPEED_ESTIMATE")
                if not issues:
                    issues.append("Check: VISO_TYPE=1, EK3_SRC1_*=6")
                
                self.get_logger().warn(f"⚠ EKF NOT FUSING! {' | '.join(issues)}")
        
        # Reset counters
        self.messages_sent = 0
        self.messages_dropped = 0
        self.velocity_spikes_rejected = 0
        self.mocap_updates = 0
        self.mavlink_msg_count = 0
        self.last_stats_time = current_time
        self.last_msg_count_time = current_time

def main(args=None):
    print("="*70)
    print("Real-Time Optitrack to MAVLink Bridge")
    print("Optimized for 915MHz @ 57600 baud telemetry")
    print("="*70)
    print("Configuration:")
    print("  - VISION_POSITION_ESTIMATE for position")
    print("  - VISION_SPEED_ESTIMATE for velocity")
    print("  - 20Hz update rate (71% of 57600 baud)")
    print("  - Real-time SCHED_FIFO scheduling")
    print("  - Velocity calculated at mocap rate (~100Hz)")
    print("  - Minimal telemetry (status checked 1Hz)")
    print("="*70)
    
    # Check if running with RT capabilities
    if HAS_RT_SCHED:
        try:
            # Test if we can set RT scheduling
            test_param = type('sched_param', (), {'sched_priority': 1})()
            # This will succeed only if we have CAP_SYS_NICE
            print("\n✓ Real-time scheduling available")
        except:
            print("\n⚠ Warning: Real-time scheduling requires privileges")
            print("  For best performance, run with:")
            print("    sudo python3 vicon2mavlink_bridge_rt.py")
            print("  Or grant capability:")
            print("    sudo setcap cap_sys_nice=eip $(which python3)")
    
    rclpy.init(args=args)
    
    mavlink_connection_string = 'udp:127.0.0.1:14550'
    
    print(f"\nMAVLink: {mavlink_connection_string}")
    print("\nRequired FC Parameters:")
    print("  VISO_TYPE = 1")
    print("  EK3_SRC1_POSXY = 6")
    print("  EK3_SRC1_VELXY = 6")
    print("  EK3_SRC1_POSZ = 6")
    print("  EK3_SRC1_VELZ = 6")
    print("  EK3_SRC1_YAW = 6")
    print("\nTelemetry Settings (Minimal - status checked 1Hz):")
    print("  SERIAL2_BAUD = 57 (57600 baud)")
    print("  SERIAL2_PROTOCOL = 2 (MAVLink 2)")
    print("  SR2_POSITION = 0 (disabled, requested on-demand)")
    print("  SR2_EXTRA1 = 0 (disabled)")
    print("  SR2_EXTRA2 = 0 (disabled)")
    print("  SR2_EXTRA3 = 0 (disabled)")
    print("  SR2_RAW_SENS = 0 (disabled)")
    print("  SR2_RC_CHAN = 0 (disabled)")
    print("  Note: Only heartbeat remains active (1Hz automatic)")
    
    try:
        bridge = vicon2mavlink_bridge(
            mavlink_connection_string,
            use_rt_scheduling=True  # Enable RT scheduling
        )
        
        print("\n" + "="*70)
        print("Bridge running at 20Hz. Press Ctrl+C to stop.")
        print("Status checked once per second (minimal telemetry)")
        print("="*70 + "\n")
        
        rclpy.spin(bridge)
        
    except KeyboardInterrupt:
        print("\n\nShutting down...")
    except Exception as e:
        print(f"\n\nERROR: {e}")
        import traceback
        traceback.print_exc()
    finally:
        try:
            bridge.destroy_node()
        except:
            pass
        rclpy.shutdown()
        print("Bridge stopped.")

if __name__ == '__main__':
    main()