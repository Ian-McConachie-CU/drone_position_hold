// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mocap4r2_control_msgs:msg/MocapInfo.idl
// generated code does not contain a copyright notice

#include "mocap4r2_control_msgs/msg/detail/mocap_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_control_msgs
const rosidl_type_hash_t *
mocap4r2_control_msgs__msg__MocapInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe4, 0x37, 0x7d, 0xea, 0x0a, 0x16, 0x3a, 0x7e,
      0x1a, 0xe8, 0x6e, 0x48, 0x79, 0x13, 0xd2, 0x3b,
      0xb1, 0x79, 0x63, 0xee, 0xa9, 0x6b, 0x84, 0x9a,
      0x9b, 0x3e, 0x7b, 0xa8, 0x30, 0x9f, 0x0f, 0xd2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mocap4r2_control_msgs__msg__MocapInfo__TYPE_NAME[] = "mocap4r2_control_msgs/msg/MocapInfo";

// Define type names, field names, and default values
static char mocap4r2_control_msgs__msg__MocapInfo__FIELD_NAME__mocap4r2_source[] = "mocap4r2_source";
static char mocap4r2_control_msgs__msg__MocapInfo__FIELD_NAME__ros_version_source[] = "ros_version_source";
static char mocap4r2_control_msgs__msg__MocapInfo__FIELD_NAME__topics[] = "topics";

static rosidl_runtime_c__type_description__Field mocap4r2_control_msgs__msg__MocapInfo__FIELDS[] = {
  {
    {mocap4r2_control_msgs__msg__MocapInfo__FIELD_NAME__mocap4r2_source, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_control_msgs__msg__MocapInfo__FIELD_NAME__ros_version_source, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_control_msgs__msg__MocapInfo__FIELD_NAME__topics, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mocap4r2_control_msgs__msg__MocapInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mocap4r2_control_msgs__msg__MocapInfo__TYPE_NAME, 35, 35},
      {mocap4r2_control_msgs__msg__MocapInfo__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 ROS2=0\n"
  "int8 ROS1=1\n"
  "\n"
  "string mocap4r2_source\n"
  "int8 ros_version_source\n"
  "string[] topics";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_control_msgs__msg__MocapInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mocap4r2_control_msgs__msg__MocapInfo__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 88, 88},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_control_msgs__msg__MocapInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mocap4r2_control_msgs__msg__MocapInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
