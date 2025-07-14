#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class MyNode(Node):
    def __init__(self):
        super().__init__("py_test")  # Initialize the node with a name
        self.counter = 0
        self.get_logger().info("Hello World")  # Log a message
        self.create_timer(1.0, self.timer_callback)  # Create a timer that calls the callback every second
    
    # Callback function for the timer
    def timer_callback(self):
        self.get_logger().info("Hello Hi" + str(self.counter))  # Log a message with the current counter value
        self.counter += 1

def main(args=None):
    rclpy.init(args=args) #This is the first thing you do in a ROS2 node
    node = MyNode() #Create an instance of your node class
    rclpy.spin(node) #Keep the node running until it is shut down
    rclpy.shutdown() #This is how you shutdown the node

if __name__ == "__main__":
    main() #Call the main function when the script is run directly




# This is a simple ROS2 Python node that logs a message to the console.
# To run this node, you would typically use the command:
# ros2 run my_py_pkg my_first_node
# Make sure to replace 'my_py_pkg' with the actual name of your package.
# This code is a basic example of a ROS2 Python node that initializes the ROS2 system,
# creates a node, logs a message, and then shuts down the ROS2 system.
# It serves as a starting point for creating more complex ROS2 nodes in Python.
# Note: Ensure that you have the necessary ROS2 environment set up before running this node.    
    