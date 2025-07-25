// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_robot_interfaces:msg/TurtleList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_robot_interfaces/msg/detail/turtle_list__functions.h"
#include "my_robot_interfaces/msg/detail/turtle_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_robot_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TurtleList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_robot_interfaces::msg::TurtleList(_init);
}

void TurtleList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_robot_interfaces::msg::TurtleList *>(message_memory);
  typed_message->~TurtleList();
}

size_t size_function__TurtleList__turtle_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<my_robot_interfaces::msg::Turtle> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TurtleList__turtle_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<my_robot_interfaces::msg::Turtle> *>(untyped_member);
  return &member[index];
}

void * get_function__TurtleList__turtle_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<my_robot_interfaces::msg::Turtle> *>(untyped_member);
  return &member[index];
}

void fetch_function__TurtleList__turtle_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const my_robot_interfaces::msg::Turtle *>(
    get_const_function__TurtleList__turtle_list(untyped_member, index));
  auto & value = *reinterpret_cast<my_robot_interfaces::msg::Turtle *>(untyped_value);
  value = item;
}

void assign_function__TurtleList__turtle_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<my_robot_interfaces::msg::Turtle *>(
    get_function__TurtleList__turtle_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const my_robot_interfaces::msg::Turtle *>(untyped_value);
  item = value;
}

void resize_function__TurtleList__turtle_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<my_robot_interfaces::msg::Turtle> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TurtleList_message_member_array[1] = {
  {
    "turtle_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_robot_interfaces::msg::Turtle>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::msg::TurtleList, turtle_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__TurtleList__turtle_list,  // size() function pointer
    get_const_function__TurtleList__turtle_list,  // get_const(index) function pointer
    get_function__TurtleList__turtle_list,  // get(index) function pointer
    fetch_function__TurtleList__turtle_list,  // fetch(index, &value) function pointer
    assign_function__TurtleList__turtle_list,  // assign(index, value) function pointer
    resize_function__TurtleList__turtle_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TurtleList_message_members = {
  "my_robot_interfaces::msg",  // message namespace
  "TurtleList",  // message name
  1,  // number of fields
  sizeof(my_robot_interfaces::msg::TurtleList),
  false,  // has_any_key_member_
  TurtleList_message_member_array,  // message members
  TurtleList_init_function,  // function to initialize message memory (memory has to be allocated)
  TurtleList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TurtleList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TurtleList_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__msg__TurtleList__get_type_hash,
  &my_robot_interfaces__msg__TurtleList__get_type_description,
  &my_robot_interfaces__msg__TurtleList__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace my_robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::msg::TurtleList>()
{
  return &::my_robot_interfaces::msg::rosidl_typesupport_introspection_cpp::TurtleList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, msg, TurtleList)() {
  return &::my_robot_interfaces::msg::rosidl_typesupport_introspection_cpp::TurtleList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
