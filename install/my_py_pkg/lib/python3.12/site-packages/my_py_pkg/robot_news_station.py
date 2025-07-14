#!usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String  # Import the String message type from example_interfaces

class RobotNewsStation(Node):
    def __init__(self):
        super().__init__("robot_news_station")  # Initialize the node with a name
        self.declare_parameter("message", "Hi, this is Robot News Station.")
        self.message = self.get_parameter("message").value
        self.publisher_ = self.create_publisher(String, "robot_news", 10)
        self.timer_ = self.create_timer(0.5, self.publish_news)  # Create a timer that calls the publish_news method every second
        self.get_logger().info("Robot News Station has been started.")

    def publish_news(self):
        msg = String()
        msg.data = f'"Hi, this is {self.message} from the Robot News Station.'  # Set the data field of the String message
        self.publisher_.publish(msg)  # Publish the message to the "robot_news" topic

def main(args=None):
    rclpy.init(args=args)  # Initialize the ROS2 system
    node = RobotNewsStation()  # Create an instance of your custom node class
    rclpy.spin(node)  # Keep the node running until it is shut down
    rclpy.shutdown()  # Shutdown the ROS2 system

if __name__ == "__main__": 
    main()  # Call the main function when the script is run directly    