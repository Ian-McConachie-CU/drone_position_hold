// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mocap4r2_control_msgs:msg/MocapInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mocap4r2_control_msgs/msg/mocap_info.hpp"


#ifndef MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__MOCAP_INFO__STRUCT_HPP_
#define MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__MOCAP_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mocap4r2_control_msgs__msg__MocapInfo __attribute__((deprecated))
#else
# define DEPRECATED__mocap4r2_control_msgs__msg__MocapInfo __declspec(deprecated)
#endif

namespace mocap4r2_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MocapInfo_
{
  using Type = MocapInfo_<ContainerAllocator>;

  explicit MocapInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mocap4r2_source = "";
      this->ros_version_source = 0;
    }
  }

  explicit MocapInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mocap4r2_source(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mocap4r2_source = "";
      this->ros_version_source = 0;
    }
  }

  // field types and members
  using _mocap4r2_source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mocap4r2_source_type mocap4r2_source;
  using _ros_version_source_type =
    int8_t;
  _ros_version_source_type ros_version_source;
  using _topics_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _topics_type topics;

  // setters for named parameter idiom
  Type & set__mocap4r2_source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mocap4r2_source = _arg;
    return *this;
  }
  Type & set__ros_version_source(
    const int8_t & _arg)
  {
    this->ros_version_source = _arg;
    return *this;
  }
  Type & set__topics(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->topics = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t ROS2 =
    0;
  static constexpr int8_t ROS1 =
    1;

  // pointer types
  using RawPtr =
    mocap4r2_control_msgs::msg::MocapInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const mocap4r2_control_msgs::msg::MocapInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mocap4r2_control_msgs::msg::MocapInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mocap4r2_control_msgs::msg::MocapInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mocap4r2_control_msgs::msg::MocapInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_control_msgs::msg::MocapInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mocap4r2_control_msgs::msg::MocapInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mocap4r2_control_msgs::msg::MocapInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mocap4r2_control_msgs::msg::MocapInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mocap4r2_control_msgs::msg::MocapInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mocap4r2_control_msgs__msg__MocapInfo
    std::shared_ptr<mocap4r2_control_msgs::msg::MocapInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mocap4r2_control_msgs__msg__MocapInfo
    std::shared_ptr<mocap4r2_control_msgs::msg::MocapInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MocapInfo_ & other) const
  {
    if (this->mocap4r2_source != other.mocap4r2_source) {
      return false;
    }
    if (this->ros_version_source != other.ros_version_source) {
      return false;
    }
    if (this->topics != other.topics) {
      return false;
    }
    return true;
  }
  bool operator!=(const MocapInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MocapInfo_

// alias to use template instance with default allocator
using MocapInfo =
  mocap4r2_control_msgs::msg::MocapInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MocapInfo_<ContainerAllocator>::ROS2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MocapInfo_<ContainerAllocator>::ROS1;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mocap4r2_control_msgs

#endif  // MOCAP4R2_CONTROL_MSGS__MSG__DETAIL__MOCAP_INFO__STRUCT_HPP_
