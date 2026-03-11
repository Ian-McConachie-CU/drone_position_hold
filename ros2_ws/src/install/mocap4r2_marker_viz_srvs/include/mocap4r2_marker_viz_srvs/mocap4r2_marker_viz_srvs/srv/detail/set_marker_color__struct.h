// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mocap4r2_marker_viz_srvs:srv/SetMarkerColor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mocap4r2_marker_viz_srvs/srv/set_marker_color.h"


#ifndef MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__SET_MARKER_COLOR__STRUCT_H_
#define MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__SET_MARKER_COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "std_msgs/msg/detail/int32__struct.h"
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__struct.h"

/// Struct defined in srv/SetMarkerColor in the package mocap4r2_marker_viz_srvs.
typedef struct mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request
{
  std_msgs__msg__Int32 id;
  std_msgs__msg__ColorRGBA color;
} mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request;

// Struct for a sequence of mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request.
typedef struct mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__Sequence
{
  mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetMarkerColor in the package mocap4r2_marker_viz_srvs.
typedef struct mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response
{
  uint8_t structure_needs_at_least_one_member;
} mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response;

// Struct for a sequence of mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response.
typedef struct mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__Sequence
{
  mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetMarkerColor in the package mocap4r2_marker_viz_srvs.
typedef struct mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__Sequence request;
  mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__Sequence response;
} mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event;

// Struct for a sequence of mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event.
typedef struct mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__Sequence
{
  mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__SET_MARKER_COLOR__STRUCT_H_
