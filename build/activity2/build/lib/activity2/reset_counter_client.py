#!usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import SetBool 

class ResetCounterClient(Node):
    def __init__(self):
        super().__init__("reset_counter_client")  
        self.client = self.create_client(SetBool, "/reset_counter")
    
    def call_reset_counter(self, data):
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn("Service not available, waiting...")

        request = SetBool.Request()
        request.data = data

        future = self.client.call_async(request)
        future.add_done_callback(self.callback_reset_counter)

    def callback_reset_counter(self, future):
        response = future.result()
        self.get_logger().info(f"Reset Counter Response: Success={response.success}, Message='{response.message}'") 

def main(args=None):
    rclpy.init(args=args)  
    node = ResetCounterClient() 
    node.call_reset_counter(True)
    rclpy.spin(node) 
    rclpy.shutdown() 

if __name__ == "__main__": 
    main()  # Call the main function when the script is run directly    