// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mocap4r2_robot_gt_msgs:srv/SetGTOrigin.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mocap4r2_robot_gt_msgs/srv/set_gt_origin.h"


#ifndef MOCAP4R2_ROBOT_GT_MSGS__SRV__DETAIL__SET_GT_ORIGIN__STRUCT_H_
#define MOCAP4R2_ROBOT_GT_MSGS__SRV__DETAIL__SET_GT_ORIGIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'origin_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/SetGTOrigin in the package mocap4r2_robot_gt_msgs.
typedef struct mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request
{
  bool current_is_origin;
  geometry_msgs__msg__Pose origin_pose;
} mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request;

// Struct for a sequence of mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request.
typedef struct mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence
{
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'error_msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetGTOrigin in the package mocap4r2_robot_gt_msgs.
typedef struct mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response
{
  bool success;
  rosidl_runtime_c__String error_msg;
} mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response;

// Struct for a sequence of mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response.
typedef struct mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence
{
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetGTOrigin in the package mocap4r2_robot_gt_msgs.
typedef struct mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__Sequence request;
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__Sequence response;
} mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Event;

// Struct for a sequence of mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Event.
typedef struct mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Event__Sequence
{
  mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOCAP4R2_ROBOT_GT_MSGS__SRV__DETAIL__SET_GT_ORIGIN__STRUCT_H_
