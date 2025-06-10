import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped, TwistStamped
from mavros_msgs.msg import State
from mavros_msgs.srv import CommandBool, SetMode
import math
import time

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
        - master: mavlink connection object
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
        
        rotation = R.from_quat(quaternion) 
        euler_angles = rotation.as_euler('xyz', degrees=False) #need to double check if this should be degrees or radians    
        
        roll = euler_angles[0]
        pitch = euler_angles[1]
        yaw =  euler_angles[2]
        
        # do frame conversion here
        '''
        Explain clearly what's going on with the conversions once we get there
        link to image?
        '''
        x = x
        y = y
        z = z
        roll = roll
        pitch = pitch
        yaw = yaw
        
        time_usec = int(time.time() * 1e6)
        
        self.send_global_vision_position_estimate(time_usec, x, y, z, roll, pitch, yaw)            
    


def main(args=None): # this needs to be updated
    
    rclpy.init(args=args)
    
    mavlink_connection_string = 'udpout:127.0.0.1:14550'
    bridge = vicon2mavlink_bridge(mavlink_connection_string)
    
    rclpy.spin(bridge)

    bridge.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
