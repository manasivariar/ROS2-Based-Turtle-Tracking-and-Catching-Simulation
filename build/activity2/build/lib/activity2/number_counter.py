#!usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64, String 
from example_interfaces.srv import SetBool 

class NumberCounter(Node):
    def __init__(self):
        super().__init__("number_counter") 
        self.dict = {}
        self.subscriber_ = self.create_subscription(Int64, "/number", self.callback_number, 10)
        self.get_logger().info("Number Counter has been started.") 
        self.publisher_ = self.create_publisher(String, "/number_count", 10)

        self.server = self.create_service(SetBool, "/reset_counter", self.callback_reset_counter)  
        self.get_logger().info("Service to reset counter is ready.") 

    def callback_number(self, msg: Int64):
        self.get_logger().info(f"Received number: {msg.data}")   
        if msg.data in self.dict:
            self.dict[msg.data] += 1
        else:
            self.dict[msg.data] = 1    
        
        self.publisher_.publish(String(data=f"{msg.data}:{self.dict[msg.data]}"))

    def callback_reset_counter(self, request: SetBool.Request, response: SetBool.Response):
        if request.data:
            self.dict.clear()
            response.success = True
            response.message = "Counter has been reset."
        else:
            response.success = False
            response.message = "Counter reset request was not successful."
        
        self.publisher_.publish(String(data=f"Counter reset status: {response.success}, Message: {response.message}"))
        return response
        
def main(args=None):
    rclpy.init(args=args) 
    node = NumberCounter()  
    rclpy.spin(node)  
    rclpy.shutdown()  

if __name__ == "__main__": 
    main()  # Call the main function when the script is run directly