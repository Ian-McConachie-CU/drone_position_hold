import rclpy
import numpy as np
import rclpy.callback_groups
import rclpy.executors
from rclpy.node import Node
from mocap4r2_msgs.msg import RigidBodies
import matplotlib.pyplot as plt
import matplotlib.animation as animation
from collections import deque
import threading
from pymavlink import mavutil
import time

# ArduPilot flight modes
COPTER_MODES = {
    0: 'STABILIZE', 1: 'ACRO', 2: 'ALT_HOLD', 3: 'AUTO', 4: 'GUIDED', 5: 'LOITER',
    6: 'RTL', 7: 'CIRCLE', 9: 'LAND', 11: 'DRIFT', 13: 'SPORT', 14: 'FLIP',
    15: 'AUTOTUNE', 16: 'POSHOLD', 17: 'BRAKE', 18: 'THROW', 19: 'AVOID_ADSB',
    20: 'GUIDED_NOGPS', 21: 'SMART_RTL', 22: 'FLOWHOLD', 23: 'FOLLOW', 24: 'ZIGZAG',
    25: 'SYSTEMID', 26: 'AUTOROTATE', 27: 'AUTO_RTL'
}

class visualizer(Node):

    def __init__(self):
        super().__init__('vicon_subscriber')

        # get the current time in seconds
        self.zero_time = self.get_clock().now().nanoseconds * 1e-9 

        # Thread safety
        self.data_lock = threading.Lock()

        # PERFORMANCE OPTIMIZATION: Reduce data sizes and rates
        self.window_length_s = 10  # Reduced from 15 to 10 seconds
        self.mocap_sample_rate = 100  
        self.window_length_n = self.mocap_sample_rate * self.window_length_s
        self.update_rate = 15  # Reduced from 10 to 15 Hz for faster updates

        self.callback_count = 0
        self.skip_mocap_messages = 10  # Increased from 5 to 10 (more aggressive filtering)

        # PERFORMANCE: Smaller buffers
        buffer_size = self.window_length_n // self.skip_mocap_messages
        
        # Data buffers - using smaller maxlen
        self.data_buffer = {}
        self.data_buffer['z_data'] = deque(maxlen=buffer_size)
        self.data_buffer['time'] = deque(maxlen=buffer_size)
        
        # MAVLink strain data buffers
        self.data_buffer['strain_A'] = deque(maxlen=buffer_size)
        self.data_buffer['strain_B'] = deque(maxlen=buffer_size)
        self.data_buffer['strain_C'] = deque(maxlen=buffer_size)
        self.data_buffer['strain_D'] = deque(maxlen=buffer_size)
        self.data_buffer['strain_time'] = deque(maxlen=buffer_size)

        # Flight mode tracking
        self.current_flight_mode = "UNKNOWN"
        self.previous_flight_mode = "UNKNOWN"
        self.is_armed = False
        self.last_mode = None

        # Overlay plot data storage
        self.overlay_snippets = []
        self.recording_snippet = False
        self.snippet_start_time = None
        self.snippet_duration = 15.0
        self.recording_delay = 2.0
        
        # Mode switch tracking
        self.pending_recording = False
        self.mode_switch_time = None
        self.pending_snippet_info = None

        # PERFORMANCE: Frame counting for selective updates
        self.frame_count = 0
        self.overlay_update_interval = 5  # Update overlay every 5 frames

        # setup subscriber and MAVLink
        self.setup_subscriber()
        self.setup_mavlink()

        self.get_logger().info('Finished initializing.')

    def setup_mavlink(self):
        """Setup MAVLink connection"""
        try:
            self.mavlink_master = mavutil.mavlink_connection('/dev/ttyACM0', baud=115200)
            self.get_logger().info('MAVLink connection established')
            
            self.mavlink_thread = threading.Thread(target=self._process_mavlink, daemon=True)
            self.mavlink_thread.start()
            
        except Exception as e:
            self.get_logger().error(f'Failed to setup MAVLink: {e}')
    
    def _process_mavlink(self):
        """Optimized MAVLink processing"""
        self.get_logger().info('MAVLink processing thread started')
        
        message_counts = {}
        last_debug_time = time.time()
        
        while True:
            try:
                # PERFORMANCE: Longer timeout, process multiple messages per loop
                for _ in range(5):  # Process up to 5 messages per iteration
                    msg = self.mavlink_master.recv_match(blocking=False, timeout=0.001)
                    
                    if msg:
                        msg_type = msg.get_type()
                        message_counts[msg_type] = message_counts.get(msg_type, 0) + 1
                        
                        if msg_type == 'HEARTBEAT':
                            self._handle_heartbeat(msg)
                        elif msg_type == 'AHRS2':
                            self._handle_ahrs2(msg)
                    else:
                        break
                
                # PERFORMANCE: Less frequent debug output
                current_time = time.time()
                if current_time - last_debug_time > 10.0:  # Every 10 seconds instead of 5
                    if message_counts:
                        # Only show top 3 message types
                        top_messages = dict(list(message_counts.items())[:3])
                        self.get_logger().info(f'MAVLink: {top_messages}, Mode: {self.current_flight_mode}')
                    last_debug_time = current_time
                        
            except Exception as e:
                self.get_logger().error(f'MAVLink error: {e}')
                time.sleep(0.05)

    def _handle_heartbeat(self, msg):
        """Optimized heartbeat handler"""
        try:
            vehicle_type = msg.type
            
            if vehicle_type != mavutil.mavlink.MAV_TYPE_QUADROTOR:
                return
            
            custom_mode = msg.custom_mode
            base_mode = msg.base_mode
            
            mode_name = COPTER_MODES.get(custom_mode, f'UNKNOWN_{custom_mode}')
            is_armed = base_mode & mavutil.mavlink.MAV_MODE_FLAG_SAFETY_ARMED
            
            # PERFORMANCE: Minimize lock time
            mode_changed = False
            with self.data_lock:
                if self.current_flight_mode != mode_name:
                    self.previous_flight_mode = self.current_flight_mode
                    self.current_flight_mode = mode_name
                    mode_changed = True
                    self._check_mode_transition()
                
                self.is_armed = bool(is_armed)
            
            # Log outside of lock
            if mode_changed:
                self.get_logger().info(f'Vehicle mode: {mode_name} ({"ARMED" if is_armed else "DISARMED"})')
                
        except Exception as e:
            self.get_logger().error(f'Error handling HEARTBEAT: {e}')

    def _check_mode_transition(self):
        """Optimized mode transition check"""
        trigger_transitions = {
            ('POSHOLD', 'ACRO'): {'color': 'green', 'label': 'POSHOLD→ACRO'},
            ('POSHOLD', 'SPORT'): {'color': 'red', 'label': 'POSHOLD→SPORT'}
        }
        
        transition = (self.previous_flight_mode, self.current_flight_mode)
        
        if transition in trigger_transitions:
            self.get_logger().info(f'🎯 Transition: {transition[0]} → {transition[1]}')
            self._start_snippet_recording(trigger_transitions[transition])

    def _start_snippet_recording(self, snippet_info):
        """Start delayed recording"""
        if self.recording_snippet or self.pending_recording:
            return
        
        self.pending_recording = True
        self.mode_switch_time = time.time()
        self.pending_snippet_info = snippet_info
        
        self.get_logger().info(f'Recording starts in {self.recording_delay}s: {snippet_info["label"]}')

    def _check_delayed_recording_start(self):
        """Check delayed recording start"""
        if not self.pending_recording:
            return
            
        if time.time() - self.mode_switch_time >= self.recording_delay:
            self.pending_recording = False
            self.recording_snippet = True
            self.snippet_start_time = time.time()
            
            new_snippet = {
                'times': [],
                'z_data': [],
                'color': self.pending_snippet_info['color'],
                'label': self.pending_snippet_info['label'],
                'start_time': self.snippet_start_time
            }
            
            self.overlay_snippets.append(new_snippet)
            self.get_logger().info(f'🎬 Recording: {self.pending_snippet_info["label"]}')
            
            self.pending_snippet_info = None
            self.mode_switch_time = None

    def _update_snippet_recording(self, time_sec, z_value):
        """Update snippet recording with debugging"""
        if not self.recording_snippet or not self.overlay_snippets:
            return
        
        current_snippet = self.overlay_snippets[-1]
        elapsed_time = time.time() - self.snippet_start_time
        
        current_snippet['times'].append(time_sec)
        current_snippet['z_data'].append(z_value)
        
        # DEBUG: Log recording progress every 2 seconds
        if len(current_snippet['times']) % 20 == 0:  # Every 20 points (roughly every 2s with skip=10)
            self.get_logger().info(f'Recording progress: {elapsed_time:.1f}s / {self.snippet_duration}s, {len(current_snippet["times"])} points')
        
        if elapsed_time >= self.snippet_duration:
            self.recording_snippet = False
            self.snippet_start_time = None
            
            # DEBUG: Final recording stats
            total_time = current_snippet['times'][-1] - current_snippet['times'][0]
            self.get_logger().info(f'✅ Completed: {current_snippet["label"]} - {len(current_snippet["times"])} points over {total_time:.1f}s (target: {self.snippet_duration}s)')
            
            # Force overlay update
            self._update_overlay_plot()
    
    def _handle_ahrs2(self, msg):
        """Optimized AHRS2 handler"""
        try:
            current_time = time.time()
            
            # PERFORMANCE: Minimal processing, direct assignment
            with self.data_lock:
                self.data_buffer['strain_A'].append(msg.roll)
                self.data_buffer['strain_B'].append(msg.pitch)
                self.data_buffer['strain_C'].append(msg.yaw)
                self.data_buffer['strain_D'].append(msg.altitude)
                self.data_buffer['strain_time'].append(current_time)
                
        except Exception as e:
            self.get_logger().error(f'Error handling AHRS2: {e}')
    
    def run_plot(self):
        """Run matplotlib in separate thread"""
        self.setup_plot()
        self.start_animation()

    def setup_subscriber(self):
        self.get_logger().info('Subscribing to mocap...')
        # PERFORMANCE: Use ReentrantCallbackGroup
        self.cbg = rclpy.callback_groups.ReentrantCallbackGroup()
        self.subscription = self.create_subscription(
            RigidBodies,
            'rigid_bodies',
            self.mocap_callback,
            5,  # Reduced queue size
            callback_group=self.cbg)

    def setup_plot(self):
        """Optimized plot setup with fixed x limits"""
        # PERFORMANCE: Use faster matplotlib backend
        import matplotlib
        matplotlib.use('TkAgg')
        
        self.plot_title = "Flight Data (Optimized)"
        plt.style.use('dark_background')
        self.fig = plt.figure(figsize=(14, 12))  # Slightly smaller
        
        # Create subplots
        self.ax1 = self.fig.add_subplot(311)
        self.ax2 = self.fig.add_subplot(312)
        self.ax3 = self.fig.add_subplot(313)
        
        # PERFORMANCE: Setup plots with FIXED limits for maximum speed
        self.line_z = self.ax1.plot([], [], 'cyan', linewidth=1.5)[0]
        self.ax1.set_ylabel('Z [m]')
        self.ax1.grid(True, alpha=0.2)
        self.ax1.set_title('Mocap Z Position (Last 10 seconds)')
        self.ax1.set_xlim(0, self.window_length_s)  # FIXED: 0 to 10 seconds
        self.ax1.set_ylim(-1, 3)  # FIXED: Adjust based on your Z range
        
        # Strain plot with fixed limits
        self.line_strain_A = self.ax2.plot([], [], 'red', linewidth=1.5, label='A')[0]
        self.line_strain_B = self.ax2.plot([], [], 'green', linewidth=1.5, label='B')[0]
        self.line_strain_C = self.ax2.plot([], [], 'blue', linewidth=1.5, label='C')[0]
        self.line_strain_D = self.ax2.plot([], [], 'yellow', linewidth=1.5, label='D')[0]
        self.ax2.set_ylabel('Strain')
        self.ax2.grid(True, alpha=0.2)
        self.ax2.set_title('Strain Data (Last 10 seconds)')
        self.ax2.legend(loc='upper right')
        self.ax2.set_xlim(0, self.window_length_s)  # FIXED: 0 to 10 seconds
        self.ax2.set_ylim(-5, 5)  # FIXED: Adjust based on your strain range
        
        # Overlay plot - FIXED limits for complete snippet visualization
        self.ax3.set_xlabel('Time [s]')
        self.ax3.set_ylabel('Z [m]')
        self.ax3.grid(True, alpha=0.2)
        self.ax3.set_title('Mode Transitions (Green: POSHOLD→ACRO, Red: POSHOLD→SPORT)')
        self.ax3.set_xlim(0, self.snippet_duration)  # FIXED: 0 to 15 seconds to show complete snippets
        self.ax3.set_ylim(-1, 3)  # FIXED: Adjust based on your Z range
        
        self.overlay_lines = []
        
        plt.tight_layout()
        self.get_logger().info('Plot setup complete with fixed limits for maximum performance.')

    def update_plot(self, frame):
        """Ultra-fast plot update with fixed limits"""
        self.frame_count += 1
        
        # PERFORMANCE: Non-blocking lock with timeout
        if not self.data_lock.acquire(blocking=False):
            return []  # Skip this frame if data is busy
        
        try:
            lines_to_return = []
            
            # Update mocap plot with rolling time window
            if len(self.data_buffer['time']) > 1:
                times = np.array(self.data_buffer['time'])
                z_data = np.array(self.data_buffer['z_data'])
                
                # PERFORMANCE: Use rolling time window - much faster than axis rescaling
                current_time = times[-1] if len(times) > 0 else 0
                # Show data from (current_time - window_length) to current_time
                # But plot it as if it's from 0 to window_length for fixed x-axis
                rolling_times = times - (current_time - self.window_length_s)
                
                # Only show data within the window
                mask = rolling_times >= 0
                if np.any(mask):
                    visible_times = rolling_times[mask]
                    visible_z = z_data[mask]
                    self.line_z.set_data(visible_times, visible_z)
                else:
                    self.line_z.set_data([], [])
                
                lines_to_return.append(self.line_z)
            
            # Update strain plot with same rolling window approach
            if len(self.data_buffer['strain_time']) > 1:
                strain_times = np.array(self.data_buffer['strain_time'])
                
                # Rolling time window for strain data
                current_strain_time = strain_times[-1] if len(strain_times) > 0 else 0
                rolling_strain_times = strain_times - (current_strain_time - self.window_length_s)
                
                # Mask for visible data
                strain_mask = rolling_strain_times >= 0
                
                if np.any(strain_mask):
                    visible_strain_times = rolling_strain_times[strain_mask]
                    
                    if len(self.data_buffer['strain_A']) > 0:
                        strain_A = np.array(self.data_buffer['strain_A'])[strain_mask]
                        self.line_strain_A.set_data(visible_strain_times, strain_A)
                        lines_to_return.append(self.line_strain_A)
                    
                    if len(self.data_buffer['strain_B']) > 0:
                        strain_B = np.array(self.data_buffer['strain_B'])[strain_mask]
                        self.line_strain_B.set_data(visible_strain_times, strain_B)
                        lines_to_return.append(self.line_strain_B)
                    
                    if len(self.data_buffer['strain_C']) > 0:
                        strain_C = np.array(self.data_buffer['strain_C'])[strain_mask]
                        self.line_strain_C.set_data(visible_strain_times, strain_C)
                        lines_to_return.append(self.line_strain_C)
                    
                    if len(self.data_buffer['strain_D']) > 0:
                        strain_D = np.array(self.data_buffer['strain_D'])[strain_mask]
                        self.line_strain_D.set_data(visible_strain_times, strain_D)
                        lines_to_return.append(self.line_strain_D)
                else:
                    # No visible data - clear lines
                    self.line_strain_A.set_data([], [])
                    self.line_strain_B.set_data([], [])
                    self.line_strain_C.set_data([], [])
                    self.line_strain_D.set_data([], [])
                    lines_to_return.extend([self.line_strain_A, self.line_strain_B, 
                                          self.line_strain_C, self.line_strain_D])
            
            # PERFORMANCE: Update overlay plot less frequently
            if self.frame_count % self.overlay_update_interval == 0:
                self._update_overlay_plot()
            
            lines_to_return.extend(self.overlay_lines)
            
            # PERFORMANCE: Update title less frequently
            if self.frame_count % 30 == 0:  # Every 30 frames
                recording_status = ""
                if self.recording_snippet:
                    recording_status = " [REC]"
                elif self.pending_recording:
                    remaining = self.recording_delay - (time.time() - self.mode_switch_time)
                    recording_status = f" [REC in {remaining:.0f}s]"
                
                title = f"{self.current_flight_mode} ({('ARMED' if self.is_armed else 'DISARMED')}){recording_status}"
                self.fig.suptitle(title, fontsize=14)
        
        finally:
            self.data_lock.release()
        
        return lines_to_return

    def _update_overlay_plot(self):
        """Fixed overlay plot update - shows complete snippets with debugging"""
        # PERFORMANCE: Only update if we have new snippets
        if len(self.overlay_lines) == len(self.overlay_snippets):
            return
        
        # Clear and redraw
        for line in self.overlay_lines:
            line.remove()
        self.overlay_lines.clear()
        
        # Debug: Log overlay update
        self.get_logger().info(f'Updating overlay plot with {len(self.overlay_snippets)} snippets')
        
        # Plot complete snippets with relative time from snippet start
        for i, snippet in enumerate(self.overlay_snippets):
            if len(snippet['times']) > 1:
                times = np.array(snippet['times'])
                z_data = np.array(snippet['z_data'])
                
                # DEBUG: Log snippet details
                duration = times[-1] - times[0]
                self.get_logger().info(f'Snippet {i+1}: {len(times)} points, duration: {duration:.1f}s, range: {times[0]:.1f} to {times[-1]:.1f}')
                
                # IMPORTANT: Use relative time from SNIPPET START
                snippet_relative_times = times - times[0]  # Start from 0
                
                # DEBUG: Log the time range being plotted
                self.get_logger().info(f'Plotting snippet {i+1}: time range 0 to {snippet_relative_times[-1]:.1f}s')
                
                line, = self.ax3.plot(snippet_relative_times, z_data, 
                                    color=snippet['color'], 
                                    linewidth=1.5, 
                                    alpha=0.8,
                                    label=f"{snippet['label']} #{i+1}")
                
                self.overlay_lines.append(line)
        
        # Update overlay plot limits to show complete snippets
        if self.overlay_lines:
            self.ax3.legend(loc='upper right', fontsize=8)
            # Set x-axis to show complete recording duration
            self.ax3.set_xlim(0, self.snippet_duration)  # 0 to 8 seconds
            self.get_logger().info(f'Set overlay plot x-limits to 0 - {self.snippet_duration}s')
            self.ax3.relim()
            self.ax3.autoscale_view(scalex=False)  # Only auto-scale Y, keep X fixed

    def start_animation(self):
        """Start optimized animation"""
        self.ani = animation.FuncAnimation(
            self.fig, 
            self.update_plot, 
            interval=1000//self.update_rate,
            blit=True,  # Re-enable blitting for performance
            cache_frame_data=False,
            repeat=True
        )
        plt.show()

    def mocap_callback(self, msg):
        """Optimized mocap callback"""
        # PERFORMANCE: Quick filtering
        self.callback_count += 1
        if self.callback_count % self.skip_mocap_messages != 0:
            return
        
        if not msg.rigidbodies:
            return
        
        # PERFORMANCE: Find rigid body efficiently
        rigid_body = None
        for rb in msg.rigidbodies:
            if rb.rigid_body_name == "Wand.Wand":
                rigid_body = rb
                break
        
        if rigid_body is None:
            return
        
        # PERFORMANCE: Minimal processing
        time_sec = msg.header.stamp.sec + msg.header.stamp.nanosec * 1e-9
        z = rigid_body.pose.position.z
        
        # PERFORMANCE: Minimal lock time
        with self.data_lock:
            self.data_buffer['time'].append(time_sec)
            self.data_buffer['z_data'].append(z)
            
            self._check_delayed_recording_start()
            self._update_snippet_recording(time_sec, z)

def main(args=None):
    rclpy.init(args=args)
    
    try:
        plotter = visualizer()
        # PERFORMANCE: Use SingleThreadedExecutor for better performance
        executor = rclpy.executors.SingleThreadedExecutor()
        executor.add_node(plotter)
        thread = threading.Thread(target=executor.spin, daemon=True)
        thread.start()
        plotter.run_plot()
        
    except KeyboardInterrupt:
        pass
    finally:
        if 'plotter' in locals():
            plotter.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()