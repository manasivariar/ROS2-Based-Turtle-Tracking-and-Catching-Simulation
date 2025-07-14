#!usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64


class NumberPublisher(Node):
    def __init__(self):
        super().__init__("number_publisher")  # Initialize the node with a name
        self.publisher_ = self.create_publisher(Int64, "/number", 10)
        self.timer_ = self.create_timer(1.0, self.publish_number)
        self.number = 1  # Initialize a number to publish
        self.get_logger().info("/number topic has been started.")
    
    def publish_number(self):
        msg = Int64()
        msg.data = self.number  # Set the data field of the Int64 message
        self.publisher_.publish(msg)  # Publish the message to the "/number" topic

    # Callback function for the timer
def main(args=None):
    rclpy.init(args=args)  # Initialize the ROS2 system
    node = NumberPublisher()  # Create an instance of your custom node class
    rclpy.spin(node)  # Keep the node running until it is shut down
    rclpy.shutdown()  # Shutdown the ROS2 system

if __name__ == "__main__": 
    main()  # Call the main function when the script is run directly    