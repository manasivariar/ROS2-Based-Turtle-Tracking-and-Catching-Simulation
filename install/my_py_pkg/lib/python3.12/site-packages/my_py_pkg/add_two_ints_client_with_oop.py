#!usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts
from functools import partial

class AddTwoIntsClient(Node):
    def __init__(self):
        super().__init__("add_two_ints_client_with_oop")  # Initialize the node with a name
        self.client = self.create_client(AddTwoInts, "add_two_ints")

    def call_add_two_ints(self, a, b):
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn("Service not available, waiting...")

        request = AddTwoInts.Request()
        request.a = a
        request.b = b

        future = self.client.call_async(request)
        future.add_done_callback(partial(self.callback_add_two_ints, request=request))  # Add a callback to handle the response

    def callback_add_two_ints(self, future, request):
        response = future.result()
        self.get_logger().info(str(request.a) + " + " + str(request.b) + " = " + str(response.sum))  # Log the result of the service call

    # Callback function for the timer
def main(args=None):
    rclpy.init(args=args) 
    node = AddTwoIntsClient()  
    node.call_add_two_ints(5, 3) 
    node.call_add_two_ints(8, 2) 
    node.call_add_two_ints(1, 2) 
    rclpy.spin(node) 
    rclpy.shutdown() 

if __name__ == "__main__": 
    main()  # Call the main function when the script is run directly    