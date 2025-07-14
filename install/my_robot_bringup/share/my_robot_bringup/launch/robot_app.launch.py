from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    ld = LaunchDescription()

    param_config = os.path.join(get_package_share_directory('my_robot_bringup'), 'config', 'robot_app.yaml')
    
    robot_publisher1 = Node(
        package="my_py_pkg",
        executable="robot_news_station",
        name="robot_news_station_giskard",
        parameters=[param_config]
    )

    robot_publisher2 = Node(
        package="my_py_pkg",
        executable="robot_news_station",
        name="robot_news_station_bb8",
        parameters=[param_config]
    )

    robot_publisher3 = Node(
        package="my_py_pkg",
        executable="robot_news_station",
        name="robot_news_station_daneel",
        parameters=[param_config]
    )

    robot_publisher4 = Node(
        package="my_py_pkg",
        executable="robot_news_station",
        name="robot_news_station_jander",
        parameters=[param_config]
    )

    robot_publisher5 = Node(
        package="my_py_pkg",
        executable="robot_news_station",
        name="robot_news_station_c3po",
        parameters=[param_config]
    )

    smartphone = Node(
        package="my_py_pkg",
        executable="smartphone"
    )
    

    ld.add_action(robot_publisher1)
    ld.add_action(robot_publisher2)
    ld.add_action(robot_publisher3)
    ld.add_action(robot_publisher4)
    ld.add_action(robot_publisher5)
    ld.add_action(smartphone)
    
    return ld