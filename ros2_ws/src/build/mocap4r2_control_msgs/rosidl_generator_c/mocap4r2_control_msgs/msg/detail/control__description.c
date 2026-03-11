// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mocap4r2_control_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#include "mocap4r2_control_msgs/msg/detail/control__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_control_msgs
const rosidl_type_hash_t *
mocap4r2_control_msgs__msg__Control__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x21, 0xa4, 0x4c, 0x9c, 0x2e, 0x2c, 0xba, 0x55,
      0xe8, 0xdc, 0xa4, 0x02, 0xe9, 0x4d, 0xa6, 0xfd,
      0x36, 0x98, 0x6b, 0x4e, 0x98, 0x05, 0x65, 0x76,
      0x35, 0x4b, 0xe9, 0xd4, 0xff, 0x0c, 0x7c, 0xfa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char mocap4r2_control_msgs__msg__Control__TYPE_NAME[] = "mocap4r2_control_msgs/msg/Control";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char mocap4r2_control_msgs__msg__Control__FIELD_NAME__control_type[] = "control_type";
static char mocap4r2_control_msgs__msg__Control__FIELD_NAME__stamp[] = "stamp";
static char mocap4r2_control_msgs__msg__Control__FIELD_NAME__mocap4r2_source[] = "mocap4r2_source";
static char mocap4r2_control_msgs__msg__Control__FIELD_NAME__session_id[] = "session_id";
static char mocap4r2_control_msgs__msg__Control__FIELD_NAME__mocap4r2_systems[] = "mocap4r2_systems";

static rosidl_runtime_c__type_description__Field mocap4r2_control_msgs__msg__Control__FIELDS[] = {
  {
    {mocap4r2_control_msgs__msg__Control__FIELD_NAME__control_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_control_msgs__msg__Control__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_control_msgs__msg__Control__FIELD_NAME__mocap4r2_source, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_control_msgs__msg__Control__FIELD_NAME__session_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_control_msgs__msg__Control__FIELD_NAME__mocap4r2_systems, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mocap4r2_control_msgs__msg__Control__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mocap4r2_control_msgs__msg__Control__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mocap4r2_control_msgs__msg__Control__TYPE_NAME, 33, 33},
      {mocap4r2_control_msgs__msg__Control__FIELDS, 5, 5},
    },
    {mocap4r2_control_msgs__msg__Control__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 START=0\n"
  "int8 ACK_START=1\n"
  "int8 STOP=2\n"
  "int8 ACK_STOP=3\n"
  "\n"
  "int8 control_type\n"
  "builtin_interfaces/Time stamp\n"
  "\n"
  "string mocap4r2_source\n"
  "string session_id\n"
  "string[] mocap4r2_systems";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_control_msgs__msg__Control__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mocap4r2_control_msgs__msg__Control__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 175, 175},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_control_msgs__msg__Control__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mocap4r2_control_msgs__msg__Control__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
