#!usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import SetBool  # Import the SetBool service type from example_interfaces

class ResetCounterServer(Node):
    def __init__(self):
        super().__init__("reset_counter_server")  # Initialize the node with a name
        self.server = self.create_service(SetBool, "/reset_counter", self.callback_reset_counter)  # Create a service to handle incoming numbers
        self.get_logger().info("Service to reset counter is ready.")  # Log that the service is ready

    def callback_reset_counter(self, request: SetBool.Request, response: SetBool.Response):
        if request.data:
            self.dict.clear()
            response.success = True
            response.message = "Counter has been reset."
        
    # Callback function for the timer
def main(args=None):
    rclpy.init(args=args)  # Initialize the ROS2 system
    node = ResetCounterServer()  # Create an instance of your custom node class
    rclpy.spin(node)  # Keep the node running until it is shut down
    rclpy.shutdown()  # Shutdown the ROS2 system

if __name__ == "__main__": 
    main()  # Call the main function when the script is run directly    