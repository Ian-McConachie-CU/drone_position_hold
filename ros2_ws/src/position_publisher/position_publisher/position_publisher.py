import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped, TwistStamped
from mavros_msgs.msg import State
from mavros_msgs.srv import CommandBool, SetMode
import math
import time

class PositionPublisher(Node):
    def __init__(self):
        super().__init__('position_publisher')
        
        # Publishers for vision pose (simulating Vicon input)
        self.local_pos_pub = self.create_publisher(
            PoseStamped, 
            '/mavros/vision_pose/pose',
            10
        )
        
        # Alternative publisher for mocap pose
        self.velocity_pub = self.create_publisher(
            PoseStamped,
            '/mavros/mocap/pose',
            10
        )
        
        # Subscriber for VICON data (currently not used, ready for real Vicon)
        # Uncomment this when ready to use real Vicon from mocap4ros:
        # self.vicon_sub = self.create_subscription(
        #     PoseStamped,
        #     '/vicon/drone/pose',  # Change to your actual Vicon topic
        #     self.vicon_callback,
        #     10
        # )
        
        # Subscribers
        self.state_sub = self.create_subscription(
            State,
            '/mavros/state',
            self.state_callback,
            10
        )
        
        # Service clients
        self.arming_client = self.create_client(CommandBool, '/mavros/cmd/arming')
        self.set_mode_client = self.create_client(SetMode, '/mavros/set_mode')
        
        # State variables
        self.current_state = State()
        self.position_target = PoseStamped()
        self.use_vicon_data = False  # Set to True when using real Vicon
        
        # Timer for publishing position data
        self.timer = self.create_timer(0.02, self.publish_position)  # 50Hz
        
        # Initialize position target
        self.setup_initial_position()
        
        self.get_logger().info('Position Publisher Node Started')
        if self.use_vicon_data:
            self.get_logger().info('Mode: Using REAL Vicon data')
        else:
            self.get_logger().info('Mode: Using SIMULATED data (origin position)')
        
    def state_callback(self, msg):
        self.current_state = msg
        
    def vicon_callback(self, msg):
        """Callback for real Vicon data from mocap4ros"""
        if self.use_vicon_data:
            # Use real Vicon data
            self.position_target = msg
            # Ensure correct frame_id and timestamp
            self.position_target.header.frame_id = "map"
            self.position_target.header.stamp = self.get_clock().now().to_msg()
        
    def setup_initial_position(self):
        """Setup initial position at origin"""
        self.position_target.header.frame_id = "map"
        
        # Simple origin position (0,0,0)
        self.position_target.pose.position.x = 0.0
        self.position_target.pose.position.y = 0.0
        self.position_target.pose.position.z = 0.0
        
        # No rotation (identity quaternion)
        self.position_target.pose.orientation.x = 0.0
        self.position_target.pose.orientation.y = 0.0
        self.position_target.pose.orientation.z = 0.0
        self.position_target.pose.orientation.w = 1.0
        
    def publish_position(self):
        """Publish position data to flight controller"""
        if not self.use_vicon_data:
            # Update timestamp for simulated data
            self.position_target.header.stamp = self.get_clock().now().to_msg()
        
        # Publish to both vision and mocap topics
        self.local_pos_pub.publish(self.position_target)
        self.velocity_pub.publish(self.position_target)
        
    def set_position_target(self, x, y, z, yaw=0.0):
        """Manually set position (only works in simulation mode)"""
        if not self.use_vicon_data:
            self.position_target.pose.position.x = float(x)
            self.position_target.pose.position.y = float(y)
            self.position_target.pose.position.z = float(z)
            
            # Convert yaw to quaternion
            self.position_target.pose.orientation.x = 0.0
            self.position_target.pose.orientation.y = 0.0
            self.position_target.pose.orientation.z = math.sin(yaw / 2.0)
            self.position_target.pose.orientation.w = math.cos(yaw / 2.0)
            
            self.get_logger().info(f'Set position: x={x:.2f}, y={y:.2f}, z={z:.2f}, yaw={yaw:.2f}')
        else:
            self.get_logger().warn('Cannot manually set position when using real Vicon data')

    def switch_to_vicon_mode(self):
        """Switch to using real Vicon data"""
        self.use_vicon_data = True
        self.get_logger().info('Switched to REAL Vicon mode')
        
    def switch_to_simulation_mode(self):
        """Switch back to simulated data"""
        self.use_vicon_data = False
        self.setup_initial_position()
        self.get_logger().info('Switched to SIMULATION mode')

    def arm_vehicle(self):
        """Arm the vehicle"""
        if not self.arming_client.wait_for_service(timeout_sec=5.0):
            self.get_logger().error('Arming service not available')
            return False
            
        req = CommandBool.Request()
        req.value = True
        
        future = self.arming_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        
        if future.result() is not None:
            if future.result().success:
                self.get_logger().info('Vehicle armed successfully')
                return True
            else:
                self.get_logger().error('Failed to arm vehicle')
                return False
        else:
            self.get_logger().error('Arming service call failed')
            return False
            
    def set_offboard_mode(self):
        """Set vehicle to OFFBOARD mode"""
        if not self.set_mode_client.wait_for_service(timeout_sec=5.0):
            self.get_logger().error('Set mode service not available')
            return False
            
        req = SetMode.Request()
        req.custom_mode = 'OFFBOARD'
        
        future = self.set_mode_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        
        if future.result() is not None:
            if future.result().mode_sent:
                self.get_logger().info('OFFBOARD mode set successfully')
                return True
            else:
                self.get_logger().error('Failed to set OFFBOARD mode')
                return False
        else:
            self.get_logger().error('Set mode service call failed')
            return False
            
    def publish_velocity_setpoint(self, vx, vy, vz, yaw_rate=0.0):
        """Publish velocity setpoint (for future use)"""
        vel_msg = TwistStamped()
        vel_msg.header.stamp = self.get_clock().now().to_msg()
        vel_msg.header.frame_id = "base_link"
        
        vel_msg.twist.linear.x = float(vx)
        vel_msg.twist.linear.y = float(vy)
        vel_msg.twist.linear.z = float(vz)
        vel_msg.twist.angular.z = float(yaw_rate)
        
        # Note: This would need a TwistStamped publisher, not PoseStamped
        self.get_logger().info(f'Velocity setpoint: vx={vx}, vy={vy}, vz={vz}')


def main(args=None):
    rclpy.init(args=args)
    
    # Create the position publisher node
    position_publisher = PositionPublisher()
    
    try:
        # Wait for MAVROS connection
        while rclpy.ok() and not position_publisher.current_state.connected:
            rclpy.spin_once(position_publisher, timeout_sec=0.1)
            position_publisher.get_logger().info('Waiting for MAVROS connection...')
            time.sleep(1)
            
        position_publisher.get_logger().info('MAVROS connected!')
        position_publisher.get_logger().info('Publishing position data at origin (0,0,0)...')
        
        # Continue spinning - just publishes origin position continuously
        rclpy.spin(position_publisher)
        
    except KeyboardInterrupt:
        position_publisher.get_logger().info('Shutting down position publisher...')
    finally:
        position_publisher.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
