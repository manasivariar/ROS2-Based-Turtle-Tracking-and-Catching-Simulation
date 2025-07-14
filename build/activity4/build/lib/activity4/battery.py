#!usr/bin/env python3
import rclpy
from rclpy.node import Node
from my_robot_interfaces.srv import SetLed  

class Battery(Node):
    def __init__(self):
        super().__init__("battery") 
        self.client = self.create_client(SetLed, "set_led")
        self.counter = 0
        self.timer = self.create_timer(1.0, self.clock) 

    def call_set_led(self, led_number, state):    
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn("Service not available, waiting...")
        request = SetLed.Request()
        request.led_number = led_number
        request.state = state
        future = self.client.call_async(request)
        future.add_done_callback(self.callback_set_led)
    
    def callback_set_led(self, future):
        response = future.result()
        if response is not None:
            self.get_logger().info(f"Response is {response.success}")
        else:
            self.get_logger().error("Service call failed")
    
    def clock(self):
        self.counter += 1
        if self.counter == 4:
            self.call_set_led(3, True)
        elif self.counter == 10:
            self.call_set_led(3, False)
            self.counter = 0
    
def main(args=None):
    rclpy.init(args=args) 
    node = Battery()   
    rclpy.spin(node)  
    rclpy.shutdown() 

if __name__ == "__main__": 
    main()  # Call the main function when the script is run directly    