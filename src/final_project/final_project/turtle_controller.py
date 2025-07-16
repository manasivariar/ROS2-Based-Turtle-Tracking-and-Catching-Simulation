#!usr/bin/env python3
import rclpy
import math
from functools import partial
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from my_robot_interfaces.srv import CatchTurtle
from my_robot_interfaces.msg import TurtleList, Turtle
from turtlesim.srv import SetPen

class TurtleController(Node):
    def __init__(self):
        super().__init__("turtle_controller") 
        self.pose = Pose()
        self.declare_parameter("catch_closest_turtle", True)
        self.catch_closest_turtle = self.get_parameter("catch_closest_turtle").value
        self.target_turtle: Turtle = None
        self.alive_turtles_subscriber = self.create_subscription(TurtleList, "moving_turtles", self.callback_alive_turtles, 10)
        self.pose_subscriber = self.create_subscription(Pose, "/turtle1/pose", self.pose_callback, 10)
        self.cmd_vel_publisher = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.catch_turtle_client = self.create_client(CatchTurtle, "catch_turtle") 
        self.timer = self.create_timer(0.01, self.move_turtle)
        self.get_logger().info("Turtle Controller Node has been started")

    def callback_alive_turtles(self, msg: TurtleList):
        self.get_logger().info(f"Alive Turtles: {[t.turtle_name for t in msg.turtle_list]}")
        if msg.turtle_list:
            if self.catch_closest_turtle:
                # Find the closest turtle to catch
                closest_turtle = None
                min_distance = float('inf')
                for turtle in msg.turtle_list:
                    distance = math.sqrt((turtle.x - self.pose.x) ** 2 + (turtle.y - self.pose.y) ** 2)
                    if closest_turtle is None or distance < min_distance:
                        min_distance = distance
                        closest_turtle = turtle
                
                if closest_turtle:
                    self.target_turtle = closest_turtle
                    self.get_logger().info(f"Target Turtle: {self.target_turtle.turtle_name}")
            else:
                # Example: Catch the first turtle in the list
                self.target_turtle = msg.turtle_list[0]
        else:
            self.get_logger().info("No turtles available to catch.")

    def call_catch_turtle(self, turtle_name):
        while not self.catch_turtle_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn("Catch Turtle service not available, waiting...")

        request = CatchTurtle.Request()
        request.name = turtle_name
        future = self.catch_turtle_client.call_async(request)
        future.add_done_callback(partial(self.callback_catch_turtle, request=request))

    def callback_catch_turtle(self, future, request):
        response = future.result()
        if response:
            self.get_logger().info(f"Turtle {request.name} has been caught.")
        else:
            self.get_logger().error(f"Failed to catch turtle {request.name}: {response.message}")

        
    def pose_callback(self, pose: Pose):
        self.pose = pose
    
    def move_turtle(self):
        if self.pose is None or self.target_turtle is None:
            return
        
        distance = math.sqrt((self.target_turtle.x- self.pose.x) ** 2 + (self.target_turtle.y - self.pose.y) ** 2)

        twist = Twist()
        if distance > 0.5:
            twist.linear.x = 2*distance

            angle_to_target = math.atan2(self.target_turtle.y - self.pose.y, self.target_turtle.x - self.pose.x)
            angle_diff = angle_to_target - self.pose.theta
            angle_diff = math.atan2(math.sin(angle_diff), math.cos(angle_diff))  # Normalize angle difference
            twist.angular.z = 6*angle_diff
        else:
            #target reached
            twist.linear.x = 0.0
            twist.angular.z = 0.0
            self.get_logger().info("Target reached, stopping turtle.")
            self.call_catch_turtle(self.target_turtle.turtle_name)
            self.target_turtle = None
        self.cmd_vel_publisher.publish(twist)
        
def main(args=None):
    rclpy.init(args=args)  
    node = TurtleController()  
    rclpy.spin(node) 
    rclpy.shutdown()  

if __name__ == "__main__": 
    main()  # Call the main function when the script is run directly    