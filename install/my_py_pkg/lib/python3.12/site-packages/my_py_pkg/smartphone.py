#!usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String  # Import the String message type from example_interfaces

class SmartphoneNode(Node):
    def __init__(self):
        super().__init__("smartphone")  # Initialize the node with a name
        self.subscriber_ = self.create_subscription(String, "robot_news", self.callback_robot_news, 10)

    def callback_robot_news(self, msg: String):
        self.get_logger().info(f"Received message: {msg.data}")  # Log the received message

def main(args=None):
    rclpy.init(args=args)  # Initialize the ROS2 system
    node = SmartphoneNode()  # Create an instance of your custom node class
    rclpy.spin(node)  # Keep the node running until it is shut down
    rclpy.shutdown()  # Shutdown the ROS2 system

if __name__ == "__main__": 
    main()  # Call the main function when the script is run directly    