// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mocap4r2_msgs:msg/Markers.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mocap4r2_msgs/msg/detail/markers__rosidl_typesupport_introspection_c.h"
#include "mocap4r2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mocap4r2_msgs/msg/detail/markers__functions.h"
#include "mocap4r2_msgs/msg/detail/markers__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `markers`
#include "mocap4r2_msgs/msg/marker.h"
// Member `markers`
#include "mocap4r2_msgs/msg/detail/marker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mocap4r2_msgs__msg__Markers__init(message_memory);
}

void mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_fini_function(void * message_memory)
{
  mocap4r2_msgs__msg__Markers__fini(message_memory);
}

size_t mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__markers(
  const void * untyped_member)
{
  const mocap4r2_msgs__msg__Marker__Sequence * member =
    (const mocap4r2_msgs__msg__Marker__Sequence *)(untyped_member);
  return member->size;
}

const void * mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__markers(
  const void * untyped_member, size_t index)
{
  const mocap4r2_msgs__msg__Marker__Sequence * member =
    (const mocap4r2_msgs__msg__Marker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__markers(
  void * untyped_member, size_t index)
{
  mocap4r2_msgs__msg__Marker__Sequence * member =
    (mocap4r2_msgs__msg__Marker__Sequence *)(untyped_member);
  return &member->data[index];
}

void mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__markers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mocap4r2_msgs__msg__Marker * item =
    ((const mocap4r2_msgs__msg__Marker *)
    mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__markers(untyped_member, index));
  mocap4r2_msgs__msg__Marker * value =
    (mocap4r2_msgs__msg__Marker *)(untyped_value);
  *value = *item;
}

void mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__markers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mocap4r2_msgs__msg__Marker * item =
    ((mocap4r2_msgs__msg__Marker *)
    mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__markers(untyped_member, index));
  const mocap4r2_msgs__msg__Marker * value =
    (const mocap4r2_msgs__msg__Marker *)(untyped_value);
  *item = *value;
}

bool mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__markers(
  void * untyped_member, size_t size)
{
  mocap4r2_msgs__msg__Marker__Sequence * member =
    (mocap4r2_msgs__msg__Marker__Sequence *)(untyped_member);
  mocap4r2_msgs__msg__Marker__Sequence__fini(member);
  return mocap4r2_msgs__msg__Marker__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_msgs__msg__Markers, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_msgs__msg__Markers, frame_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "markers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_msgs__msg__Markers, markers),  // bytes offset in struct
    NULL,  // default value
    mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__markers,  // size() function pointer
    mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__markers,  // get_const(index) function pointer
    mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__markers,  // get(index) function pointer
    mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__markers,  // fetch(index, &value) function pointer
    mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__markers,  // assign(index, value) function pointer
    mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__markers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_members = {
  "mocap4r2_msgs__msg",  // message namespace
  "Markers",  // message name
  3,  // number of fields
  sizeof(mocap4r2_msgs__msg__Markers),
  false,  // has_any_key_member_
  mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_member_array,  // message members
  mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_init_function,  // function to initialize message memory (memory has to be allocated)
  mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_type_support_handle = {
  0,
  &mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_members,
  get_message_typesupport_handle_function,
  &mocap4r2_msgs__msg__Markers__get_type_hash,
  &mocap4r2_msgs__msg__Markers__get_type_description,
  &mocap4r2_msgs__msg__Markers__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mocap4r2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_msgs, msg, Markers)() {
  mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_msgs, msg, Marker)();
  if (!mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_type_support_handle.typesupport_identifier) {
    mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mocap4r2_msgs__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
