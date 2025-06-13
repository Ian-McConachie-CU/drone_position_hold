from pymavlink import mavutil
import time
import rclpy
import numpy as np
from rclpy.node import Node
from scipy.spatial.transform import Rotation as R
from geometry_msgs.msg import PoseStamped
from mocap4r2_msgs.msg import RigidBodies

'''
1. subscribe to appropriate vicon topic
2. unpack data in callback
3. publish data to mavlink message in callback (using separate function)
'''
    
class vicon2mavlink_bridge(Node):

    def __init__(self, mavlink_connection_string):
        super().__init__('vicon_subscriber')
        self.get_logger().info('Subscribing to mocap rigid_bodies...')
        self.subscription = self.create_subscription(
            RigidBodies,
            'rigid_bodies', #enter vicon topic name here
            self.subscriber_callback,
            10)
        self.subscription  # prevent unused variable warning
        self.get_logger().info('Subscribed to mocap rigid_bodies!')
        
        self.mavlink_master = mavutil.mavlink_connection(mavlink_connection_string)
        self.get_logger().info('Connecting to mavlink...')
        self.mavlink_master.wait_heartbeat()
        self.get_logger().info('Connected to mavlink!')

    def subscriber_callback(self, msg):
        
        #unpack msg here  
        #  "bprl_drone.bprl_drone"
        # "Wand.Wand"

        for rigid_body in msg.rigidbodies:
            if rigid_body.rigid_body_name == "bprl_drone.bprl_drone":
                break     

        x = rigid_body.pose.position.x
        y = rigid_body.pose.position.y
        z = rigid_body.pose.position.z

        qx = rigid_body.pose.orientation.x
        qy = rigid_body.pose.orientation.y
        qz = rigid_body.pose.orientation.z
        qw = rigid_body.pose.orientation.w

        quaternion = np.array([qx, qy, qz, qw])

        quat_norm = np.linalg.norm(quaternion)
        
        if x == y == z == qx == qy == qz == qw == 0.0:
            self.get_logger().warn("Lost mocap data")
            return
        
        if quat_norm < 1e-6:  # Very small norm indicates invalid quaternion
            self.get_logger().warn(f"Invalid quaternion with norm {quat_norm:.6f}, skipping this message")
            return
        quaternion = quaternion / quat_norm

        rotation = R.from_quat(quaternion) # scalar last tells from_quat that w is listed last  
        euler_angles = rotation.as_euler('ZYX', degrees=False) 

        # needs to be in radians. See:
        # https://mavlink.io/en/messages/common.html    
        
        # appears that rotation order is z-y-x:
        # https://mavsdk.mavlink.io/v1.4/en/cpp/api_reference/structmavsdk_1_1_camera_1_1_euler_angle.html

        
        roll = euler_angles[0]
        pitch = euler_angles[1]
        yaw =  euler_angles[2]

        # roll = 0
        # pitch = 0
        # yaw = 0
        
        '''
        FRAME CONVERSION FROM MOCAP TO NED
        Explain clearly what's going on with the conversions once we get there
        maybe include a link to image that explains this?
        
        
        '''
        x_ned = y
        y_ned = x
        z_ned = -z
        roll_ned = pitch
        pitch_ned = roll
        yaw_ned = -yaw
        
        #time_usec = int(time.time() * 1e6)
        time_usec = int((time.time() - time.time() % 86400) * 1e6)
        
        #send data to FC via mavlink connection
        #self.send_global_vision_position_estimate(time_usec, x_ned, y_ned, z_ned, roll_ned, pitch_ned, yaw_ned)
        self.send_vision_position_estimate(time_usec, x_ned, y_ned, z_ned, roll_ned, pitch_ned, yaw_ned)

    def send_vision_position_estimate(self,
                                             time_usec, 
                                             x, 
                                             y, 
                                             z, 
                                             roll, 
                                             pitch, 
                                             yaw, 
                                             covariance = None,
                                             reset_counter = 0):
        """
        Sends a GLOBAL_VISION_POSITION_ESTIMATE message.
        
        Parameters:
        - time_usec: Timestamp (microseconds, synced to UNIX epoch or system boot)
        - x, y, z: Global position in meters (NED frame)
        - roll, pitch, yaw: Attitude angles in radians
        """
        
        #self.mavlink_master.mav.global_vision_position_estimate_send(
        #    usec=time_usec,           # Timestamp (microseconds)
        #    x=x,                 # Global X position
        #    y=y,                 # Global Y position  
        #    z=z,                 # Global Z position
        #    roll=roll,           # Roll angle
        #    pitch=pitch,         # Pitch angle
        #    yaw=yaw,             # Yaw angle
        #)
        covariance = [
            0.0001, 0.0, 0.0, 0.0, 0.0, 0.0,    # x position - low noise
            0.0, 0.0001, 0.0, 0.0, 0.0, 0.0,    # y position - low noise  
            0.0, 0.0, 0.0001, 0.0, 0.0, 0.0,    # z position - low noise
            0.0, 0.0, 0.0, 999.0, 0.0, 0.0,   # roll - high noise (ignore)
            0.0, 0.0, 0.0, 0.0, 999.0, 0.0,   # pitch - high noise (ignore)
            0.0, 0.0, 0.0, 0.0, 0.0, 0.02,

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
            reset_counter=reset_counter
    )

        print(f"Sent GLOBAL_VISION_POSITION_ESTIMATE at time {time_usec}")
        
def main(args=None):
    print("entered main")
    
    rclpy.init(args=args)
    
    mavlink_connection_string = 'udp:127.0.0.1:14550'
    bridge = vicon2mavlink_bridge(mavlink_connection_string)
    
    rclpy.spin(bridge)

    bridge.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
