// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_robot_interfaces:msg/TurtleList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/msg/turtle_list.h"


#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__TURTLE_LIST__STRUCT_H_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__TURTLE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'turtle_list'
#include "my_robot_interfaces/msg/detail/turtle__struct.h"

/// Struct defined in msg/TurtleList in the package my_robot_interfaces.
typedef struct my_robot_interfaces__msg__TurtleList
{
  my_robot_interfaces__msg__Turtle__Sequence turtle_list;
} my_robot_interfaces__msg__TurtleList;

// Struct for a sequence of my_robot_interfaces__msg__TurtleList.
typedef struct my_robot_interfaces__msg__TurtleList__Sequence
{
  my_robot_interfaces__msg__TurtleList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__msg__TurtleList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__TURTLE_LIST__STRUCT_H_
