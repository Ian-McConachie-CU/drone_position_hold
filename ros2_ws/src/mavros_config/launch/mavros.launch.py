from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument(
            'fcu_url',
            default_value='udp://:14550@localhost:14551',
            description='FCU connection URL - connects to MAVProxy UDP output'
        ),
        DeclareLaunchArgument(
            'gcs_url',
            default_value='',
            description='Ground Control Station URL'
        ),
        Node(
            package='mavros',
            executable='mavros_node',
            name='mavros',
            output='both',
            parameters=[{
                'fcu_url': LaunchConfiguration('fcu_url'),
                'gcs_url': LaunchConfiguration('gcs_url'),
                'system_id': 1,
                'component_id': 1,
                'fcu_protocol': 'v2.0',
                # Plugins for simulated vicon testing
                'plugin_allowlist': [
                    'sys_status',           # Connection status
                    'heartbeat',            # Keep alive  
                    'imu',                  # IMU data
                    'local_position',       # Local position feedback
                    'vision_pose',          # Vision pose input (for simulated Vicon)
                    'mocap',                # Mocap pose input (alternative)
                    # Removed: param, home_position (causing timeouts)
                    # Removed: setpoint_position (not needed for vision testing)
                ],
                # Connection settings
                'conn': {
                    'heartbeat_rate': 1.0,
                    'timeout': 10.0,
                },
                # Disable parameter sync to avoid timeouts
                'startup_px4_usb_quirk': False,
            }]
        )
    ])
