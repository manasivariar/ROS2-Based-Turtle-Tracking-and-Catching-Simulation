#!usr/bin/env python3
import rclpy
from rclpy.node import Node

class MyCustomNode(Node):
    def __init__(self):
        super().__init__("robot_newnode_names_station")  # Initialize the node with a name
        
    # Callback function for the timer
def main(args=None):
    rclpy.init(args=args)  # Initialize the ROS2 system
    node = MyCustomNode()  # Create an instance of your custom node class
    rclpy.spin(node)  # Keep the node running until it is shut down
    rclpy.shutdown()  # Shutdown the ROS2 system

if __name__ == "__main__": 
    main()  # Call the main function when the script is run directly    