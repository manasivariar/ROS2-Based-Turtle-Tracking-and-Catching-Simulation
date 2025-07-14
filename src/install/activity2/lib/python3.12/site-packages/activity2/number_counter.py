#!usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64  # Import the Int64 message type from example_interfaces   

class NumberCounter(Node):
    def __init__(self):
        super().__init__("number_counter")  # Initialize the node with a name
        self.subscriber_ = self.create_subscription(Int64, "/number", self.callback_number, 10)
        self.timer_ = self.create_timer(1.0, self.publish_count)  # Create a timer that calls the publish_count method every second
        self.count = 0  # Initialize a count variable
        self.get_logger().info("Number Counter has been started.")  # Log that the node has started
        self.publisher_ = self.create_publisher(Int64, "/number_count", 10)
        
    # Callback function for the timer
    def callback_number(self, msg: Int64):
        self.get_logger().info(f"Received number: {msg.data}")  # Log the received number

    def publish_count(self):
        self.count += 1  # Increment the count
        msg = Int64()
        msg.data = self.count  # Set the data field of the Int64 message to the current count
        self.publisher_.publish(msg)  # Publish the count to the "/number_count     

def main(args=None):
    rclpy.init(args=args)  # Initialize the ROS2 system
    node = NumberCounter()  # Create an instance of your custom node class
    rclpy.spin(node)  # Keep the node running until it is shut down
    rclpy.shutdown()  # Shutdown the ROS2 system

if __name__ == "__main__": 
    main()  # Call the main function when the script is run directly    