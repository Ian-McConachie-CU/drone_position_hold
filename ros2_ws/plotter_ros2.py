import numpy as np
import socket
import numpy as np
import struct
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from scipy.spatial.transform import Rotation as R
from std_msgs.msg import Int32
# from rclpy.qos import QoSProfile, ReliabilityPolicy, DurabilityPolicy, HistoryPolicy

RADIUS = 0.9

def main():
    rclpy.init()
    node = LivePlotNode()  # renamed class
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.sock.close()
        node.destroy_node()
        rclpy.shutdown()
    

class LivePlotNode(Node):
    def __init__(self):
        super().__init__('live_plotter')
        self.plotting = False
        self.x_off = 0
        self.y_off = 0
        self.z_off = 0
        self.md = 0
        self.maxLen = 2000
        self.r = 1

        self.target_ip   = "100.101.238.71"
        self.target_port = 5101

        self.x = 0.0-self.x_off
        self.y = 0.0-self.y_off
        self.z = 0.0-self.z_off
        self.phi = 0.0
        self.the = 0.0
        self.psi = 0.0

        self.sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

        self.subscription = self.create_subscription(
            PoseStamped,
            'crashDrone/pose',
            self.pose_callback,
            10
        )
        self.zero_sub = self.create_subscription(
            PoseStamped,
            'zero_position',
            self.zero_callback,
            10
        )
        self.md_sub = self.create_subscription(
            Int32,
            'rc8_state',
            self.md_callback,
            10
        )

        self.get_logger().info('LivePlotNode started, waiting for pose...')

    def md_callback(self, msg: Int32):
        self.md = msg.data
        # self.get_logger().info(f'md updated → {self.md}')

    def zero_callback(self, msg: PoseStamped):
        self.x_off = msg.pose.position.y
        self.y_off = msg.pose.position.x
        self.z_off = msg.pose.position.z

        q = msg.pose.orientation
        yaw = R.from_quat([q.x, q.y, q.z, q.w]).as_euler('ZYX')[0]

        self.get_logger().info(
            f'Zero updated  x_off={self.x_off:.3f}  y_off={self.y_off:.3f}  '
            f'z_off={self.z_off:.3f}  yaw={np.degrees(yaw):.1f} deg'
        )

    def publish_animation(self,target_ip,target_port):
        # Build array (match MATLAB single precision)

        packet = struct.pack('<9f', 
                            self.x,          # index 0: x (North)
                            self.y,           # index 4: y (East)
                            self.z,           # index 8: z (Down)
                            self.phi,           # index 12
                            self.the,          # index 16
                            self.psi,            # index 20
                            float(self.md),           # index 24
                            float(self.r), # index 28
                            0.0             # index 32: unused
        )

        # print(packet)
#        print(f"Sending Packet x:{self.x}, y:{self.y}, z:{self.z}")

        # Send UDP datagram
        self.sock.sendto(packet, (target_ip, target_port))

    def updateOffset(self,xo,yo):
        self.x_off = xo
        self.y_off = yo
        return
    
    def pose_callback(self, msg: PoseStamped):
        self.x = msg.pose.position.y - self.x_off
        self.y = msg.pose.position.x - self.y_off
        self.z = -1*(msg.pose.position.z - self.z_off)
        q = msg.pose.orientation
        rot = R.from_quat([q.x, q.y, -q.z, q.w])
        self.phi, self.the, self.psi = rot.as_euler('xyz', degrees=False)
        self.phi, self.the = self.the, -self.phi
        self.publish_animation(self.target_ip, self.target_port)


if __name__ == "__main__":
    main()