#!usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts
        
def main(args=None):
    rclpy.init(args=args)  # Initialize the ROS2 system
    node = Node("add_two_ints_client_no_oop")  # Create an instance of your custom node class
    
    client = node.create_client(AddTwoInts, "add_two_ints")  # Create a client for the AddTwoInts service
    while not client.wait_for_service(timeout_sec=1.0):
        node.get_logger().warn("Service not available, waiting...")

    request = AddTwoInts.Request()  # Create a request object for the service
    request.a = 5  # Set the first integer
    request.b = 3  # Set the second integer

    future = client.call_async(request)
    rclpy.spin_until_future_complete(node, future)  # Wait for the service call to complete

    response = future.result()  # Get the response from the service call
    node.get_logger().info(str(request.a) + " + " + str(request.b) + " = " + str(response.sum))  # Log the result

    rclpy.shutdown()  # Shutdown the ROS2 system

if __name__ == "__main__": 
    main()  # Call the main function when the script is run directly    