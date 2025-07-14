#!usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

class AddTwoIntsServerNode(Node):
    def __init__(self):
        super().__init__("add_two_ints_server")  # Initialize the node with a name
        self.server = self.create_service(AddTwoInts, "add_two_ints", self.callback_add_two_ints)
        self.get_logger().info("AddTwoInts server is ready.")  # Log that the server is ready

    def callback_add_two_ints(self, request: AddTwoInts.Request, response: AddTwoInts.Response):
        response.sum = request.a + request.b
        self.get_logger().info(str(request.a) + " + " + str(request.b) + " = " + str(response.sum))
        return response
        
    # Callback function for the timer
def main(args=None):
    rclpy.init(args=args)  # Initialize the ROS2 system
    node = AddTwoIntsServerNode()  # Create an instance of your custom node class
    rclpy.spin(node)  # Keep the node running until it is shut down
    rclpy.shutdown()  # Shutdown the ROS2 system

if __name__ == "__main__": 
    main()  # Call the main function when the script is run directly    