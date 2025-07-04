// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mocap4r2_marker_viz_srvs:srv/ResetMarkerColor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__rosidl_typesupport_introspection_c.h"
#include "mocap4r2_marker_viz_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__functions.h"
#include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__struct.h"


// Include directives for member types
// Member `id`
#include "std_msgs/msg/int32.h"
// Member `id`
#include "std_msgs/msg/detail/int32__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__init(message_memory);
}

void mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_fini_function(void * message_memory)
{
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_message_member_array[1] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_message_members = {
  "mocap4r2_marker_viz_srvs__srv",  // message namespace
  "ResetMarkerColor_Request",  // message name
  1,  // number of fields
  sizeof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request),
  false,  // has_any_key_member_
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_message_member_array,  // message members
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_message_type_support_handle = {
  0,
  &mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_message_members,
  get_message_typesupport_handle_function,
  &mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__get_type_hash,
  &mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__get_type_description,
  &mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mocap4r2_marker_viz_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_marker_viz_srvs, srv, ResetMarkerColor_Request)() {
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int32)();
  if (!mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_message_type_support_handle.typesupport_identifier) {
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mocap4r2_marker_viz_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__functions.h"
// already included above
// #include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__init(message_memory);
}

void mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_fini_function(void * message_memory)
{
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_message_members = {
  "mocap4r2_marker_viz_srvs__srv",  // message namespace
  "ResetMarkerColor_Response",  // message name
  1,  // number of fields
  sizeof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response),
  false,  // has_any_key_member_
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_message_member_array,  // message members
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_message_type_support_handle = {
  0,
  &mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_message_members,
  get_message_typesupport_handle_function,
  &mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__get_type_hash,
  &mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__get_type_description,
  &mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mocap4r2_marker_viz_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_marker_viz_srvs, srv, ResetMarkerColor_Response)() {
  if (!mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_message_type_support_handle.typesupport_identifier) {
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mocap4r2_marker_viz_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__functions.h"
// already included above
// #include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "mocap4r2_marker_viz_srvs/srv/reset_marker_color.h"
// Member `request`
// Member `response`
// already included above
// #include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__ResetMarkerColor_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__init(message_memory);
}

void mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__ResetMarkerColor_Event_fini_function(void * message_memory)
{
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__fini(message_memory);
}

size_t mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__size_function__ResetMarkerColor_Event__request(
  const void * untyped_member)
{
  const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence * member =
    (const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__get_const_function__ResetMarkerColor_Event__request(
  const void * untyped_member, size_t index)
{
  const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence * member =
    (const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__get_function__ResetMarkerColor_Event__request(
  void * untyped_member, size_t index)
{
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence * member =
    (mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__fetch_function__ResetMarkerColor_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * item =
    ((const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request *)
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__get_const_function__ResetMarkerColor_Event__request(untyped_member, index));
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * value =
    (mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request *)(untyped_value);
  *value = *item;
}

void mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__assign_function__ResetMarkerColor_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * item =
    ((mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request *)
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__get_function__ResetMarkerColor_Event__request(untyped_member, index));
  const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * value =
    (const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request *)(untyped_value);
  *item = *value;
}

bool mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__resize_function__ResetMarkerColor_Event__request(
  void * untyped_member, size_t size)
{
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence * member =
    (mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence *)(untyped_member);
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence__fini(member);
  return mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence__init(member, size);
}

size_t mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__size_function__ResetMarkerColor_Event__response(
  const void * untyped_member)
{
  const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence * member =
    (const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__get_const_function__ResetMarkerColor_Event__response(
  const void * untyped_member, size_t index)
{
  const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence * member =
    (const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__get_function__ResetMarkerColor_Event__response(
  void * untyped_member, size_t index)
{
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence * member =
    (mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__fetch_function__ResetMarkerColor_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * item =
    ((const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response *)
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__get_const_function__ResetMarkerColor_Event__response(untyped_member, index));
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * value =
    (mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response *)(untyped_value);
  *value = *item;
}

void mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__assign_function__ResetMarkerColor_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * item =
    ((mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response *)
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__get_function__ResetMarkerColor_Event__response(untyped_member, index));
  const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * value =
    (const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response *)(untyped_value);
  *item = *value;
}

bool mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__resize_function__ResetMarkerColor_Event__response(
  void * untyped_member, size_t size)
{
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence * member =
    (mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence *)(untyped_member);
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence__fini(member);
  return mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__ResetMarkerColor_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event, request),  // bytes offset in struct
    NULL,  // default value
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__size_function__ResetMarkerColor_Event__request,  // size() function pointer
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__get_const_function__ResetMarkerColor_Event__request,  // get_const(index) function pointer
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__get_function__ResetMarkerColor_Event__request,  // get(index) function pointer
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__fetch_function__ResetMarkerColor_Event__request,  // fetch(index, &value) function pointer
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__assign_function__ResetMarkerColor_Event__request,  // assign(index, value) function pointer
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__resize_function__ResetMarkerColor_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event, response),  // bytes offset in struct
    NULL,  // default value
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__size_function__ResetMarkerColor_Event__response,  // size() function pointer
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__get_const_function__ResetMarkerColor_Event__response,  // get_const(index) function pointer
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__get_function__ResetMarkerColor_Event__response,  // get(index) function pointer
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__fetch_function__ResetMarkerColor_Event__response,  // fetch(index, &value) function pointer
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__assign_function__ResetMarkerColor_Event__response,  // assign(index, value) function pointer
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__resize_function__ResetMarkerColor_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__ResetMarkerColor_Event_message_members = {
  "mocap4r2_marker_viz_srvs__srv",  // message namespace
  "ResetMarkerColor_Event",  // message name
  3,  // number of fields
  sizeof(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event),
  false,  // has_any_key_member_
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__ResetMarkerColor_Event_message_member_array,  // message members
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__ResetMarkerColor_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__ResetMarkerColor_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__ResetMarkerColor_Event_message_type_support_handle = {
  0,
  &mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__ResetMarkerColor_Event_message_members,
  get_message_typesupport_handle_function,
  &mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__get_type_hash,
  &mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__get_type_description,
  &mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mocap4r2_marker_viz_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_marker_viz_srvs, srv, ResetMarkerColor_Event)() {
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__ResetMarkerColor_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__ResetMarkerColor_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_marker_viz_srvs, srv, ResetMarkerColor_Request)();
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__ResetMarkerColor_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_marker_viz_srvs, srv, ResetMarkerColor_Response)();
  if (!mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__ResetMarkerColor_Event_message_type_support_handle.typesupport_identifier) {
    mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__ResetMarkerColor_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__ResetMarkerColor_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mocap4r2_marker_viz_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mocap4r2_marker_viz_srvs__srv__detail__reset_marker_color__rosidl_typesupport_introspection_c__ResetMarkerColor_service_members = {
  "mocap4r2_marker_viz_srvs__srv",  // service namespace
  "ResetMarkerColor",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // mocap4r2_marker_viz_srvs__srv__detail__reset_marker_color__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_message_type_support_handle,
  NULL,  // response message
  // mocap4r2_marker_viz_srvs__srv__detail__reset_marker_color__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_message_type_support_handle
  NULL  // event_message
  // mocap4r2_marker_viz_srvs__srv__detail__reset_marker_color__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_message_type_support_handle
};


static rosidl_service_type_support_t mocap4r2_marker_viz_srvs__srv__detail__reset_marker_color__rosidl_typesupport_introspection_c__ResetMarkerColor_service_type_support_handle = {
  0,
  &mocap4r2_marker_viz_srvs__srv__detail__reset_marker_color__rosidl_typesupport_introspection_c__ResetMarkerColor_service_members,
  get_service_typesupport_handle_function,
  &mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__rosidl_typesupport_introspection_c__ResetMarkerColor_Request_message_type_support_handle,
  &mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__rosidl_typesupport_introspection_c__ResetMarkerColor_Response_message_type_support_handle,
  &mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__rosidl_typesupport_introspection_c__ResetMarkerColor_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mocap4r2_marker_viz_srvs,
    srv,
    ResetMarkerColor
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mocap4r2_marker_viz_srvs,
    srv,
    ResetMarkerColor
  ),
  &mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__get_type_hash,
  &mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__get_type_description,
  &mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_marker_viz_srvs, srv, ResetMarkerColor_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_marker_viz_srvs, srv, ResetMarkerColor_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_marker_viz_srvs, srv, ResetMarkerColor_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mocap4r2_marker_viz_srvs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_marker_viz_srvs, srv, ResetMarkerColor)(void) {
  if (!mocap4r2_marker_viz_srvs__srv__detail__reset_marker_color__rosidl_typesupport_introspection_c__ResetMarkerColor_service_type_support_handle.typesupport_identifier) {
    mocap4r2_marker_viz_srvs__srv__detail__reset_marker_color__rosidl_typesupport_introspection_c__ResetMarkerColor_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mocap4r2_marker_viz_srvs__srv__detail__reset_marker_color__rosidl_typesupport_introspection_c__ResetMarkerColor_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_marker_viz_srvs, srv, ResetMarkerColor_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_marker_viz_srvs, srv, ResetMarkerColor_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_marker_viz_srvs, srv, ResetMarkerColor_Event)()->data;
  }

  return &mocap4r2_marker_viz_srvs__srv__detail__reset_marker_color__rosidl_typesupport_introspection_c__ResetMarkerColor_service_type_support_handle;
}
