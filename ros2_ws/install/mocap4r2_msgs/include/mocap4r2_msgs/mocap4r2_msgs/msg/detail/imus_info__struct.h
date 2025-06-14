// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mocap4r2_msgs:msg/ImusInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mocap4r2_msgs/msg/imus_info.h"


#ifndef MOCAP4R2_MSGS__MSG__DETAIL__IMUS_INFO__STRUCT_H_
#define MOCAP4R2_MSGS__MSG__DETAIL__IMUS_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'sensor_ids'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ImusInfo in the package mocap4r2_msgs.
typedef struct mocap4r2_msgs__msg__ImusInfo
{
  rosidl_runtime_c__String__Sequence sensor_ids;
  float battery_level;
  float temperature;
} mocap4r2_msgs__msg__ImusInfo;

// Struct for a sequence of mocap4r2_msgs__msg__ImusInfo.
typedef struct mocap4r2_msgs__msg__ImusInfo__Sequence
{
  mocap4r2_msgs__msg__ImusInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap4r2_msgs__msg__ImusInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOCAP4R2_MSGS__MSG__DETAIL__IMUS_INFO__STRUCT_H_
