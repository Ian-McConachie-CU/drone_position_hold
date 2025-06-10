from pymavlink import mavutil
import time
import rclpy
from rclpy.node import Node
from scipy.spatial.transform import Rotation as R
from geometry_msgs.msg import PoseStamped

'''
1. subscribe to appropriate vicon topic
2. unpack data in callback
3. publish data to mavlink message in callback (using separate function)
'''
    
class vicon2mavlink_bridge(Node):

    def __init__(self, mavlink_connection_string):
        super().__init__('vicon_subscriber')
        self.subscription = self.create_subscription(
            PoseStamped,
            'topic', #enter vicon topic name here
            self.subscriber_callback,
            10)
        self.subscription  # prevent unused variable warning
        
        self.mavlink_master = mavutil.mavlink_connection(mavlink_connection_string)
        self.mavlink_master.wait_heartbeat()
        
    def send_global_vision_position_estimate(time_usec, 
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
        
        self.mavlink_master.mav.global_vision_position_estimate_send(
            usec=usec,           # Timestamp (microseconds)
            x=x,                 # Global X position
            y=y,                 # Global Y position  
            z=z,                 # Global Z position
            roll=roll,           # Roll angle
            pitch=pitch,         # Pitch angle
            yaw=yaw,             # Yaw angle
            covariance=covariance,  # Covariance matrix
            reset_counter=reset_counter  # Reset counter
        )

        print(f"Sent GLOBAL_VISION_POSITION_ESTIMATE at time {time_usec}")
        

    def subscriber_callback(self, msg):
        
        #unpack msg here  
        x = msg.data.position.x   # meters North
        y = msg.data.position.y   # meters East
        z = msg.data.position.z   # meters Down (negative means above reference)
        quat  = msg.data.orientation #assuming this is an array, otherwise cast as below:
        quaternion = np.array([quat.x, quat.y, quat.z, quat.w])
        
        rotation = R.from_quat(quaternion, scalar_last = True) # scalar last tells from_quat that w is listed last  
        euler_angles = rotation.as_euler('zyx', degrees=False) 
        # needs to be in radians. See:
        # https://mavlink.io/en/messages/common.html    
        
        # appears that rotation order is z-y-x:
        # https://mavsdk.mavlink.io/v1.4/en/cpp/api_reference/structmavsdk_1_1_camera_1_1_euler_angle.html
        
        roll = euler_angles[0]
        pitch = euler_angles[1]
        yaw =  euler_angles[2]
        
        '''
        FRAME CONVERSION FROM MOCAP TO NED
        Explain clearly what's going on with the conversions once we get there
        maybe include a link to image that explains this?
        
        
        '''
        x = y
        y = x
        z = -z
        roll = roll
        pitch = pitch
        yaw = yaw
        
        time_usec = int(time.time() * 1e6)
        
        self.send_global_vision_position_estimate(time_usec, x, y, z, roll, pitch, yaw)            
    
def main(args=None):
    
    rclpy.init(args=args)
    
    mavlink_connection_string = 'udpout:127.0.0.1:14550'
    bridge = vicon2mavlink_bridge(mavlink_connection_string)
    
    rclpy.spin(bridge)

    bridge.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
