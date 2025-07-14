#!usr/bin/env python3
import rclpy
from rclpy.node import Node
from turtlesim.srv import Spawn, Kill, SetPen
from my_robot_interfaces.msg import TurtleList, Turtle
from my_robot_interfaces.srv import CatchTurtle
from functools import partial
from random import random, randint

class TurtleSpawner(Node):
    def __init__(self):
        super().__init__("turtle_spawner") 
        self.declare_parameter("turtle_name_prefix", "turtle")
        self.declare_parameter("spawn frequency", 1.0)
        self.turtle_name_prefix = self.get_parameter("turtle_name_prefix").value
        self.spawn_frequency = self.get_parameter("spawn frequency").value
        self.turtle_counter = 0
        self.alive_turtles = []
        self.alive_turtles_publisher = self.create_publisher(TurtleList, "alive_turtles", 10)
        self.catch_turtle_service = self.create_service(CatchTurtle, "catch_turtle", self.catch_turtle_callback)
        self.kill_turtle_client = self.create_client(Kill, "/kill")
        self.spawn_turtle_client = self.create_client(Spawn, "/spawn")
        self.set_pen_turtle_client = self.create_client(SetPen, "/turtle1/set_pen") 
        self.timer = self.create_timer(1.0/self.spawn_frequency, self.call_spawn_turtle)         
        self.get_logger().info("Turtle Spawner Node has been started")

    def call_set_pen(self):
        while not self.set_pen_turtle_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn("SetPen service not available, waiting...")

        request = SetPen.Request()
        request.r = randint(0, 255)
        request.g = randint(0, 255)
        request.b = randint(0, 255)
        request.width = 2
        
        future = self.set_pen_turtle_client.call_async(request)
        future.add_done_callback(self.callback_set_pen)

    def callback_set_pen(self, future):
        response = future.result()

    def call_kill_turtle(self, turtle_name):
        while not self.kill_turtle_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn("Kill service not available, waiting...")

        request = Kill.Request()
        request.name = turtle_name
        future = self.kill_turtle_client.call_async(request)
        future.add_done_callback(self.callback_kill_turtle)

    def callback_kill_turtle(self, future):
        response = future.result()
        return response

    def catch_turtle_callback(self, request: CatchTurtle.Request, response: CatchTurtle.Response):
        turtle_name = request.name
        self.call_kill_turtle(turtle_name)
        self.call_set_pen()

        #remove the killed turtle from the alive_turtles list
        self.alive_turtles = [t for t in self.alive_turtles if t.turtle_name != turtle_name]
        
        response.message = f"Turtle {turtle_name} has been caught."
        self.get_logger().info(response.message)
        self.alive_turtles_publisher.publish(TurtleList(turtle_list=self.alive_turtles))
        self.get_logger().info(f"Updated alive turtles: {[t.turtle_name for t in self.alive_turtles]}")
        
        return response 
    
    def call_spawn_turtle(self):
        while not self.spawn_turtle_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn("Spawn service not available, waiting...")
            
        self.turtle_counter += 1
        self.get_logger().info(f"Spawning turtle {self.turtle_name_prefix + str(self.turtle_counter)}")
        request = Spawn.Request()
        
        request.x = random() * 11.0  # Random x position between 0 and 11
        request.y = random() * 11.0  # Random y position between 0 and 11
        request.theta = random() * 6.28  # Random orientation between 0 and 2*pi (6.28 radians)
        
        future = self.spawn_turtle_client.call_async(request)
        future.add_done_callback(partial(self.callback_spawn_turtle, request=request))

    def callback_spawn_turtle(self, future, request):                
        response = future.result()
        if response.name:
            self.get_logger().info(f"Turtle {response.name} has been spawned at ({request.x}, {request.y}) with orientation {request.theta}.")
            new_turtle = Turtle(turtle_name=response.name, x=request.x, y=request.y, theta=request.theta)
            self.alive_turtles.append(new_turtle)
            self.alive_turtles_publisher.publish(TurtleList(turtle_list=self.alive_turtles))
            self.get_logger().info(f"Updated alive turtles: {[t.turtle_name for t in self.alive_turtles]}")
        else:
            self.get_logger().warn(f"Failed to spawn turtle: {response.name}")        

def main(args=None):
    rclpy.init(args=args) 
    node = TurtleSpawner()  
    rclpy.spin(node)  
    rclpy.shutdown() 

if __name__ == "__main__": 
    main()  # Call the main function when the script is run directly    