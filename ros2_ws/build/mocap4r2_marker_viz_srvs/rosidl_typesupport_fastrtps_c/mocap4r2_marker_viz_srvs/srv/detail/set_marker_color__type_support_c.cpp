// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mocap4r2_marker_viz_srvs:srv/SetMarkerColor.idl
// generated code does not contain a copyright notice
#include "mocap4r2_marker_viz_srvs/srv/detail/set_marker_color__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mocap4r2_marker_viz_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mocap4r2_marker_viz_srvs/srv/detail/set_marker_color__struct.h"
#include "mocap4r2_marker_viz_srvs/srv/detail/set_marker_color__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/color_rgba__functions.h"  // color
#include "std_msgs/msg/detail/int32__functions.h"  // id

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
bool cdr_serialize_std_msgs__msg__ColorRGBA(
  const std_msgs__msg__ColorRGBA * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
bool cdr_deserialize_std_msgs__msg__ColorRGBA(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__ColorRGBA * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
size_t get_serialized_size_std_msgs__msg__ColorRGBA(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
size_t max_serialized_size_std_msgs__msg__ColorRGBA(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
bool cdr_serialize_key_std_msgs__msg__ColorRGBA(
  const std_msgs__msg__ColorRGBA * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
size_t get_serialized_size_key_std_msgs__msg__ColorRGBA(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
size_t max_serialized_size_key_std_msgs__msg__ColorRGBA(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, ColorRGBA)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
bool cdr_serialize_std_msgs__msg__Int32(
  const std_msgs__msg__Int32 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
bool cdr_deserialize_std_msgs__msg__Int32(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Int32 * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
size_t get_serialized_size_std_msgs__msg__Int32(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
size_t max_serialized_size_std_msgs__msg__Int32(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
bool cdr_serialize_key_std_msgs__msg__Int32(
  const std_msgs__msg__Int32 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
size_t get_serialized_size_key_std_msgs__msg__Int32(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
size_t max_serialized_size_key_std_msgs__msg__Int32(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Int32)();


using _SetMarkerColor_Request__ros_msg_type = mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
bool cdr_serialize_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
  const mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: id
  {
    cdr_serialize_std_msgs__msg__Int32(
      &ros_message->id, cdr);
  }

  // Field name: color
  {
    cdr_serialize_std_msgs__msg__ColorRGBA(
      &ros_message->color, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
bool cdr_deserialize_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
  eprosima::fastcdr::Cdr & cdr,
  mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request * ros_message)
{
  // Field name: id
  {
    cdr_deserialize_std_msgs__msg__Int32(cdr, &ros_message->id);
  }

  // Field name: color
  {
    cdr_deserialize_std_msgs__msg__ColorRGBA(cdr, &ros_message->color);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
size_t get_serialized_size_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMarkerColor_Request__ros_msg_type * ros_message = static_cast<const _SetMarkerColor_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: id
  current_alignment += get_serialized_size_std_msgs__msg__Int32(
    &(ros_message->id), current_alignment);

  // Field name: color
  current_alignment += get_serialized_size_std_msgs__msg__ColorRGBA(
    &(ros_message->color), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
size_t max_serialized_size_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: id
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Int32(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: color
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__ColorRGBA(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request;
    is_plain =
      (
      offsetof(DataType, color) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
bool cdr_serialize_key_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
  const mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: id
  {
    cdr_serialize_key_std_msgs__msg__Int32(
      &ros_message->id, cdr);
  }

  // Field name: color
  {
    cdr_serialize_key_std_msgs__msg__ColorRGBA(
      &ros_message->color, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
size_t get_serialized_size_key_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMarkerColor_Request__ros_msg_type * ros_message = static_cast<const _SetMarkerColor_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: id
  current_alignment += get_serialized_size_key_std_msgs__msg__Int32(
    &(ros_message->id), current_alignment);

  // Field name: color
  current_alignment += get_serialized_size_key_std_msgs__msg__ColorRGBA(
    &(ros_message->color), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
size_t max_serialized_size_key_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: id
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Int32(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: color
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__ColorRGBA(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request;
    is_plain =
      (
      offsetof(DataType, color) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SetMarkerColor_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request * ros_message = static_cast<const mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(ros_message, cdr);
}

static bool _SetMarkerColor_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request * ros_message = static_cast<mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(cdr, ros_message);
}

static uint32_t _SetMarkerColor_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
      untyped_ros_message, 0));
}

static size_t _SetMarkerColor_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetMarkerColor_Request = {
  "mocap4r2_marker_viz_srvs::srv",
  "SetMarkerColor_Request",
  _SetMarkerColor_Request__cdr_serialize,
  _SetMarkerColor_Request__cdr_deserialize,
  _SetMarkerColor_Request__get_serialized_size,
  _SetMarkerColor_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SetMarkerColor_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetMarkerColor_Request,
  get_message_typesupport_handle_function,
  &mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__get_type_hash,
  &mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__get_type_description,
  &mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mocap4r2_marker_viz_srvs, srv, SetMarkerColor_Request)() {
  return &_SetMarkerColor_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "mocap4r2_marker_viz_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "mocap4r2_marker_viz_srvs/srv/detail/set_marker_color__struct.h"
// already included above
// #include "mocap4r2_marker_viz_srvs/srv/detail/set_marker_color__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetMarkerColor_Response__ros_msg_type = mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
bool cdr_serialize_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
  const mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
bool cdr_deserialize_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
  eprosima::fastcdr::Cdr & cdr,
  mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response * ros_message)
{
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
size_t get_serialized_size_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMarkerColor_Response__ros_msg_type * ros_message = static_cast<const _SetMarkerColor_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
size_t max_serialized_size_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: structure_needs_at_least_one_member
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
bool cdr_serialize_key_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
  const mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
size_t get_serialized_size_key_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMarkerColor_Response__ros_msg_type * ros_message = static_cast<const _SetMarkerColor_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
size_t max_serialized_size_key_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: structure_needs_at_least_one_member
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SetMarkerColor_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response * ros_message = static_cast<const mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(ros_message, cdr);
}

static bool _SetMarkerColor_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response * ros_message = static_cast<mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(cdr, ros_message);
}

static uint32_t _SetMarkerColor_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
      untyped_ros_message, 0));
}

static size_t _SetMarkerColor_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetMarkerColor_Response = {
  "mocap4r2_marker_viz_srvs::srv",
  "SetMarkerColor_Response",
  _SetMarkerColor_Response__cdr_serialize,
  _SetMarkerColor_Response__cdr_deserialize,
  _SetMarkerColor_Response__get_serialized_size,
  _SetMarkerColor_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SetMarkerColor_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetMarkerColor_Response,
  get_message_typesupport_handle_function,
  &mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__get_type_hash,
  &mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__get_type_description,
  &mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mocap4r2_marker_viz_srvs, srv, SetMarkerColor_Response)() {
  return &_SetMarkerColor_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "mocap4r2_marker_viz_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "mocap4r2_marker_viz_srvs/srv/detail/set_marker_color__struct.h"
// already included above
// #include "mocap4r2_marker_viz_srvs/srv/detail/set_marker_color__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

bool cdr_serialize_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
  const mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
  eprosima::fastcdr::Cdr & cdr,
  mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request * ros_message);

size_t get_serialized_size_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
  const mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mocap4r2_marker_viz_srvs, srv, SetMarkerColor_Request)();

bool cdr_serialize_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
  const mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
  eprosima::fastcdr::Cdr & cdr,
  mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response * ros_message);

size_t get_serialized_size_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
  const mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mocap4r2_marker_viz_srvs, srv, SetMarkerColor_Response)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _SetMarkerColor_Event__ros_msg_type = mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
bool cdr_serialize_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event(
  const mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
bool cdr_deserialize_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event(
  eprosima::fastcdr::Cdr & cdr,
  mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__Sequence__fini(&ros_message->request);
    }
    if (!mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__Sequence__fini(&ros_message->response);
    }
    if (!mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
size_t get_serialized_size_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMarkerColor_Event__ros_msg_type * ros_message = static_cast<const _SetMarkerColor_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
size_t max_serialized_size_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
bool cdr_serialize_key_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event(
  const mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
size_t get_serialized_size_key_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMarkerColor_Event__ros_msg_type * ros_message = static_cast<const _SetMarkerColor_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
size_t max_serialized_size_key_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SetMarkerColor_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event * ros_message = static_cast<const mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event(ros_message, cdr);
}

static bool _SetMarkerColor_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event * ros_message = static_cast<mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event(cdr, ros_message);
}

static uint32_t _SetMarkerColor_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event(
      untyped_ros_message, 0));
}

static size_t _SetMarkerColor_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetMarkerColor_Event = {
  "mocap4r2_marker_viz_srvs::srv",
  "SetMarkerColor_Event",
  _SetMarkerColor_Event__cdr_serialize,
  _SetMarkerColor_Event__cdr_deserialize,
  _SetMarkerColor_Event__get_serialized_size,
  _SetMarkerColor_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SetMarkerColor_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetMarkerColor_Event,
  get_message_typesupport_handle_function,
  &mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__get_type_hash,
  &mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__get_type_description,
  &mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mocap4r2_marker_viz_srvs, srv, SetMarkerColor_Event)() {
  return &_SetMarkerColor_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "mocap4r2_marker_viz_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mocap4r2_marker_viz_srvs/srv/set_marker_color.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetMarkerColor__callbacks = {
  "mocap4r2_marker_viz_srvs::srv",
  "SetMarkerColor",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mocap4r2_marker_viz_srvs, srv, SetMarkerColor_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mocap4r2_marker_viz_srvs, srv, SetMarkerColor_Response)(),
};

static rosidl_service_type_support_t SetMarkerColor__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetMarkerColor__callbacks,
  get_service_typesupport_handle_function,
  &_SetMarkerColor_Request__type_support,
  &_SetMarkerColor_Response__type_support,
  &_SetMarkerColor_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mocap4r2_marker_viz_srvs,
    srv,
    SetMarkerColor
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mocap4r2_marker_viz_srvs,
    srv,
    SetMarkerColor
  ),
  &mocap4r2_marker_viz_srvs__srv__SetMarkerColor__get_type_hash,
  &mocap4r2_marker_viz_srvs__srv__SetMarkerColor__get_type_description,
  &mocap4r2_marker_viz_srvs__srv__SetMarkerColor__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mocap4r2_marker_viz_srvs, srv, SetMarkerColor)() {
  return &SetMarkerColor__handle;
}

#if defined(__cplusplus)
}
#endif
