import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/strain-drone/Documents/drone_position_hold/ros2_ws/install/mocap4r2cli'
