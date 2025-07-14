#!usr/bin/env python3
import rclpy
from rclpy.node import Node
from functools import partial
from my_robot_interfaces.msg import TurtleList, Turtle
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
import random

class TurtleMonitor(Node):
    def __init__(self):
        super().__init__("turtle_monitor")  # Initialize the node with a name
        self.cmd_vel_publishers = {}
        self.pose_subscribers = {}
        self.turtle_poses = {}
        self.alive_turtles_subscriber = self.create_subscription(TurtleList, "alive_turtles", self.callback_alive_turtles, 10)
        self.moving_turtles_publisher = self.create_publisher(TurtleList, "moving_turtles", 10)
        self.movement_timer = self.create_timer(0.5, self.generate_random_movements)
        self.get_logger().info("Turtle Monitor Node has been started.")

    def callback_alive_turtles(self, msg: TurtleList):
        for turtle in msg.turtle_list:
            if turtle.turtle_name not in self.pose_subscribers:
                self.cmd_vel_publishers[turtle.turtle_name] = self.create_publisher(Twist, f"/{turtle.turtle_name}/cmd_vel", 10)
                self.pose_subscribers[turtle.turtle_name] = self.create_subscription(Pose, f"/{turtle.turtle_name}/pose", partial(self.pose_callback, name=turtle.turtle_name), 10)
                self.turtle_poses[turtle.turtle_name] = Pose()

        dead_turtles = [name for name in self.pose_subscribers if name not in [t.turtle_name for t in msg.turtle_list]]
        for dead_turtle in dead_turtles:
            self.get_logger().info(f"Turtle {dead_turtle} is dead. Removing its publishers and subscribers.")
            self.destroy_publisher(self.cmd_vel_publishers.pop(dead_turtle))
            self.destroy_subscription(self.pose_subscribers.pop(dead_turtle))
            self.turtle_poses.pop(dead_turtle)
        

    def pose_callback(self, msg: Pose, name: str):
        self.turtle_poses[name] = msg
        self.get_logger().info(f"Pose of {name}: x={msg.x}, y={msg.y}, theta={msg.theta}")

    def generate_random_movements(self):
        for turtle_name, publisher in self.cmd_vel_publishers.items():
            twist = Twist()
            twist.linear.x = random.uniform(0.5, 2.0)
            twist.angular.z = random.uniform(-1.5, 1.5)
            
            publisher.publish(twist)
        
        updated_turtles_coordinates = TurtleList()
        for turtle_name, pose in self.turtle_poses.items():
            turtle = Turtle(turtle_name=turtle_name, x=pose.x, y=pose.y, theta=pose.theta)
            updated_turtles_coordinates.turtle_list.append(turtle)
        self.moving_turtles_publisher.publish(updated_turtles_coordinates)
            
def main(args=None):
    rclpy.init(args=args)  # Initialize the ROS2 system
    node = TurtleMonitor()  # Create an instance of your custom node class
    rclpy.spin(node)  # Keep the node running until it is shut down
    rclpy.shutdown()  # Shutdown the ROS2 system

if __name__ == "__main__": 
    main()  # Call the main function when the script is run directly    