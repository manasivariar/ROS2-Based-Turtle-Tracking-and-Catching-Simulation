// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:msg/TurtleList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/msg/turtle_list.hpp"


#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__TURTLE_LIST__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__TURTLE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/msg/detail/turtle_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_TurtleList_turtle_list
{
public:
  Init_TurtleList_turtle_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::msg::TurtleList turtle_list(::my_robot_interfaces::msg::TurtleList::_turtle_list_type arg)
  {
    msg_.turtle_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::msg::TurtleList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::msg::TurtleList>()
{
  return my_robot_interfaces::msg::builder::Init_TurtleList_turtle_list();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__TURTLE_LIST__BUILDER_HPP_
