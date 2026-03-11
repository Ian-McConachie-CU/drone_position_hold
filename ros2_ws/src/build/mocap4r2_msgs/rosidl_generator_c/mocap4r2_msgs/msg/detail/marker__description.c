// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mocap4r2_msgs:msg/Marker.idl
// generated code does not contain a copyright notice

#include "mocap4r2_msgs/msg/detail/marker__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
const rosidl_type_hash_t *
mocap4r2_msgs__msg__Marker__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0c, 0xad, 0xb1, 0x4b, 0x00, 0xeb, 0x93, 0xdf,
      0xd5, 0xd1, 0xb7, 0x74, 0xf0, 0x4f, 0x13, 0xef,
      0xc0, 0xc2, 0xe0, 0x8a, 0x3b, 0xee, 0x1a, 0xbb,
      0xae, 0xf9, 0xf6, 0x7f, 0x6b, 0x10, 0xb9, 0x43,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
#endif

static char mocap4r2_msgs__msg__Marker__TYPE_NAME[] = "mocap4r2_msgs/msg/Marker";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";

// Define type names, field names, and default values
static char mocap4r2_msgs__msg__Marker__FIELD_NAME__id_type[] = "id_type";
static char mocap4r2_msgs__msg__Marker__FIELD_NAME__marker_index[] = "marker_index";
static char mocap4r2_msgs__msg__Marker__FIELD_NAME__marker_name[] = "marker_name";
static char mocap4r2_msgs__msg__Marker__FIELD_NAME__translation[] = "translation";

static rosidl_runtime_c__type_description__Field mocap4r2_msgs__msg__Marker__FIELDS[] = {
  {
    {mocap4r2_msgs__msg__Marker__FIELD_NAME__id_type, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__msg__Marker__FIELD_NAME__marker_index, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__msg__Marker__FIELD_NAME__marker_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__msg__Marker__FIELD_NAME__translation, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mocap4r2_msgs__msg__Marker__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mocap4r2_msgs__msg__Marker__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mocap4r2_msgs__msg__Marker__TYPE_NAME, 24, 24},
      {mocap4r2_msgs__msg__Marker__FIELDS, 4, 4},
    },
    {mocap4r2_msgs__msg__Marker__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 USE_NAME=0\n"
  "int8 USE_INDEX=1\n"
  "int8 USE_BOTH=2\n"
  "\n"
  "int8 id_type\n"
  "int32 marker_index\n"
  "string marker_name\n"
  "geometry_msgs/Point translation";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_msgs__msg__Marker__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mocap4r2_msgs__msg__Marker__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 132, 132},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_msgs__msg__Marker__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mocap4r2_msgs__msg__Marker__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
