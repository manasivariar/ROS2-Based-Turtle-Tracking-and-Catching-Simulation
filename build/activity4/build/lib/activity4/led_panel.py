#!usr/bin/env python3
import rclpy
from rclpy.node import Node
from my_robot_interfaces.srv import SetLed
from my_robot_interfaces.msg import LedPanelState

class LedPanel(Node):
    def __init__(self):
        super().__init__("led_panel")  # Initialize the node with a name
        self.declare_parameter("led_panel_state", [0, 0, 0])  # Declare a parameter for the LED panel state
        self.led_panel_state = self.get_parameter("led_panel_state").value  # Get
        self.server = self.create_service(SetLed, "set_led", self.callback_set_led)
        self.get_logger().info("LED Panel service is ready.")
        self.publisher = self.create_publisher(LedPanelState, "led_panel_state", 10)
        # self.led_panel_state = [0, 0, 0]

    def callback_set_led(self, request: SetLed.Request, response: SetLed.Response):
        if request.led_number < 0 or request.led_number > len(self.led_panel_state):
            response.success = False
            return response
        else:
            self.led_panel_state[request.led_number-1] = 1 if request.state else 0
            response.success = True
            self.get_logger().info(f"LED {request.led_number} set to {'ON' if request.state else 'OFF'}")
        
        self.publisher.publish(LedPanelState(led_panel_state = self.led_panel_state))
        return response
    
def main(args=None):
    rclpy.init(args=args) 
    node = LedPanel()
    rclpy.spin(node) 
    rclpy.shutdown()  

if __name__ == "__main__": 
    main()  # Call the main function when the script is run directly    