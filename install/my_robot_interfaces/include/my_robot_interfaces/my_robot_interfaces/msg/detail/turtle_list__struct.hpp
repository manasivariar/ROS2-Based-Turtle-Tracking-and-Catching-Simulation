// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_robot_interfaces:msg/TurtleList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/msg/turtle_list.hpp"


#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__TURTLE_LIST__STRUCT_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__TURTLE_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'turtle_list'
#include "my_robot_interfaces/msg/detail/turtle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_robot_interfaces__msg__TurtleList __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_interfaces__msg__TurtleList __declspec(deprecated)
#endif

namespace my_robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TurtleList_
{
  using Type = TurtleList_<ContainerAllocator>;

  explicit TurtleList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TurtleList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _turtle_list_type =
    std::vector<my_robot_interfaces::msg::Turtle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_robot_interfaces::msg::Turtle_<ContainerAllocator>>>;
  _turtle_list_type turtle_list;

  // setters for named parameter idiom
  Type & set__turtle_list(
    const std::vector<my_robot_interfaces::msg::Turtle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_robot_interfaces::msg::Turtle_<ContainerAllocator>>> & _arg)
  {
    this->turtle_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_interfaces::msg::TurtleList_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_interfaces::msg::TurtleList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_interfaces::msg::TurtleList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_interfaces::msg::TurtleList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::msg::TurtleList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::msg::TurtleList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::msg::TurtleList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::msg::TurtleList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_interfaces::msg::TurtleList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_interfaces::msg::TurtleList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_interfaces__msg__TurtleList
    std::shared_ptr<my_robot_interfaces::msg::TurtleList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_interfaces__msg__TurtleList
    std::shared_ptr<my_robot_interfaces::msg::TurtleList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleList_ & other) const
  {
    if (this->turtle_list != other.turtle_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleList_

// alias to use template instance with default allocator
using TurtleList =
  my_robot_interfaces::msg::TurtleList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__TURTLE_LIST__STRUCT_HPP_
