// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from mocap4r2_msgs:msg/Markers.idl
// generated code does not contain a copyright notice
#ifndef MOCAP4R2_MSGS__MSG__DETAIL__MARKERS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MOCAP4R2_MSGS__MSG__DETAIL__MARKERS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mocap4r2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mocap4r2_msgs/msg/detail/markers__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_msgs
bool cdr_serialize_mocap4r2_msgs__msg__Markers(
  const mocap4r2_msgs__msg__Markers * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_msgs
bool cdr_deserialize_mocap4r2_msgs__msg__Markers(
  eprosima::fastcdr::Cdr &,
  mocap4r2_msgs__msg__Markers * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_msgs
size_t get_serialized_size_mocap4r2_msgs__msg__Markers(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_msgs
size_t max_serialized_size_mocap4r2_msgs__msg__Markers(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_msgs
bool cdr_serialize_key_mocap4r2_msgs__msg__Markers(
  const mocap4r2_msgs__msg__Markers * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_msgs
size_t get_serialized_size_key_mocap4r2_msgs__msg__Markers(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_msgs
size_t max_serialized_size_key_mocap4r2_msgs__msg__Markers(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mocap4r2_msgs, msg, Markers)();

#ifdef __cplusplus
}
#endif

#endif  // MOCAP4R2_MSGS__MSG__DETAIL__MARKERS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
