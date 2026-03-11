// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mocap4r2_msgs:msg/ImusInfo.idl
// generated code does not contain a copyright notice

#include "mocap4r2_msgs/msg/detail/imus_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
const rosidl_type_hash_t *
mocap4r2_msgs__msg__ImusInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x53, 0x2c, 0xba, 0x15, 0xd4, 0xd6, 0x22, 0xa0,
      0xb4, 0x79, 0xad, 0x4d, 0x65, 0x9e, 0xc9, 0x49,
      0x39, 0x19, 0x4e, 0x50, 0x51, 0xf5, 0x95, 0x44,
      0x6d, 0xef, 0x3b, 0x0f, 0xc6, 0x76, 0x1b, 0x24,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mocap4r2_msgs__msg__ImusInfo__TYPE_NAME[] = "mocap4r2_msgs/msg/ImusInfo";

// Define type names, field names, and default values
static char mocap4r2_msgs__msg__ImusInfo__FIELD_NAME__sensor_ids[] = "sensor_ids";
static char mocap4r2_msgs__msg__ImusInfo__FIELD_NAME__battery_level[] = "battery_level";
static char mocap4r2_msgs__msg__ImusInfo__FIELD_NAME__temperature[] = "temperature";

static rosidl_runtime_c__type_description__Field mocap4r2_msgs__msg__ImusInfo__FIELDS[] = {
  {
    {mocap4r2_msgs__msg__ImusInfo__FIELD_NAME__sensor_ids, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__msg__ImusInfo__FIELD_NAME__battery_level, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__msg__ImusInfo__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mocap4r2_msgs__msg__ImusInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mocap4r2_msgs__msg__ImusInfo__TYPE_NAME, 26, 26},
      {mocap4r2_msgs__msg__ImusInfo__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string[] sensor_ids\n"
  "float32 battery_level\n"
  "float32 temperature";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_msgs__msg__ImusInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mocap4r2_msgs__msg__ImusInfo__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 62, 62},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_msgs__msg__ImusInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mocap4r2_msgs__msg__ImusInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
