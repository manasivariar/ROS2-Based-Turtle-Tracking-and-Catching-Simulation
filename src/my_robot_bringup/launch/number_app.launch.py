from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    ld = LaunchDescription()

    param_config = os.path.join(get_package_share_directory('my_robot_bringup'), 'config', 'number_app.yaml')
    number_publisher = Node(
        package="activity2",
        executable="number_publisher",
        namespace="/abc",
        name="my_number_publisher",
        remappings= [('number', 'my_number')],
        # parameters=[
        #     {'number': 6},
        #     {'timer_period': 1.0}
        # ]
        parameters=[param_config]
    )

    number_counter = Node(
        package="activity2",
        executable="number_counter",
    )

    ld.add_action(number_publisher)
    ld.add_action(number_counter)
    
    return ld
