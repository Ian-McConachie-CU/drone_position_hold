// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mocap4r2_msgs:msg/Marker.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mocap4r2_msgs/msg/marker.h"


#ifndef MOCAP4R2_MSGS__MSG__DETAIL__MARKER__STRUCT_H_
#define MOCAP4R2_MSGS__MSG__DETAIL__MARKER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'USE_NAME'.
enum
{
  mocap4r2_msgs__msg__Marker__USE_NAME = 0
};

/// Constant 'USE_INDEX'.
enum
{
  mocap4r2_msgs__msg__Marker__USE_INDEX = 1
};

/// Constant 'USE_BOTH'.
enum
{
  mocap4r2_msgs__msg__Marker__USE_BOTH = 2
};

// Include directives for member types
// Member 'marker_name'
#include "rosidl_runtime_c/string.h"
// Member 'translation'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Marker in the package mocap4r2_msgs.
typedef struct mocap4r2_msgs__msg__Marker
{
  int8_t id_type;
  int32_t marker_index;
  rosidl_runtime_c__String marker_name;
  geometry_msgs__msg__Point translation;
} mocap4r2_msgs__msg__Marker;

// Struct for a sequence of mocap4r2_msgs__msg__Marker.
typedef struct mocap4r2_msgs__msg__Marker__Sequence
{
  mocap4r2_msgs__msg__Marker * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap4r2_msgs__msg__Marker__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOCAP4R2_MSGS__MSG__DETAIL__MARKER__STRUCT_H_
