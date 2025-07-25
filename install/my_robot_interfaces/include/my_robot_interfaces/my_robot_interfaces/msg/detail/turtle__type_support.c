// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_robot_interfaces:msg/Turtle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_robot_interfaces/msg/detail/turtle__rosidl_typesupport_introspection_c.h"
#include "my_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_robot_interfaces/msg/detail/turtle__functions.h"
#include "my_robot_interfaces/msg/detail/turtle__struct.h"


// Include directives for member types
// Member `turtle_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_robot_interfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_robot_interfaces__msg__Turtle__init(message_memory);
}

void my_robot_interfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_fini_function(void * message_memory)
{
  my_robot_interfaces__msg__Turtle__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_robot_interfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_member_array[4] = {
  {
    "turtle_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__msg__Turtle, turtle_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__msg__Turtle, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__msg__Turtle, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__msg__Turtle, theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_robot_interfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_members = {
  "my_robot_interfaces__msg",  // message namespace
  "Turtle",  // message name
  4,  // number of fields
  sizeof(my_robot_interfaces__msg__Turtle),
  false,  // has_any_key_member_
  my_robot_interfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_member_array,  // message members
  my_robot_interfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_init_function,  // function to initialize message memory (memory has to be allocated)
  my_robot_interfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_robot_interfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_type_support_handle = {
  0,
  &my_robot_interfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__msg__Turtle__get_type_hash,
  &my_robot_interfaces__msg__Turtle__get_type_description,
  &my_robot_interfaces__msg__Turtle__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, msg, Turtle)() {
  if (!my_robot_interfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_type_support_handle.typesupport_identifier) {
    my_robot_interfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_robot_interfaces__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
