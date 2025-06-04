// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mocap4r2_msgs:msg/RigidBody.idl
// generated code does not contain a copyright notice

#include "mocap4r2_msgs/msg/detail/rigid_body__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
const rosidl_type_hash_t *
mocap4r2_msgs__msg__RigidBody__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7a, 0x1b, 0xca, 0x55, 0x2c, 0x93, 0xa8, 0xda,
      0x4f, 0x09, 0x08, 0x3e, 0xf4, 0x32, 0x74, 0x10,
      0xb6, 0x68, 0x7a, 0x95, 0xfe, 0x14, 0xdb, 0x29,
      0x29, 0x2c, 0x46, 0x19, 0x16, 0x6f, 0x5e, 0x66,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mocap4r2_msgs/msg/detail/marker__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t mocap4r2_msgs__msg__Marker__EXPECTED_HASH = {1, {
    0x0c, 0xad, 0xb1, 0x4b, 0x00, 0xeb, 0x93, 0xdf,
    0xd5, 0xd1, 0xb7, 0x74, 0xf0, 0x4f, 0x13, 0xef,
    0xc0, 0xc2, 0xe0, 0x8a, 0x3b, 0xee, 0x1a, 0xbb,
    0xae, 0xf9, 0xf6, 0x7f, 0x6b, 0x10, 0xb9, 0x43,
  }};
#endif

static char mocap4r2_msgs__msg__RigidBody__TYPE_NAME[] = "mocap4r2_msgs/msg/RigidBody";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char mocap4r2_msgs__msg__Marker__TYPE_NAME[] = "mocap4r2_msgs/msg/Marker";

// Define type names, field names, and default values
static char mocap4r2_msgs__msg__RigidBody__FIELD_NAME__rigid_body_name[] = "rigid_body_name";
static char mocap4r2_msgs__msg__RigidBody__FIELD_NAME__markers[] = "markers";
static char mocap4r2_msgs__msg__RigidBody__FIELD_NAME__pose[] = "pose";

static rosidl_runtime_c__type_description__Field mocap4r2_msgs__msg__RigidBody__FIELDS[] = {
  {
    {mocap4r2_msgs__msg__RigidBody__FIELD_NAME__rigid_body_name, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__msg__RigidBody__FIELD_NAME__markers, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {mocap4r2_msgs__msg__Marker__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__msg__RigidBody__FIELD_NAME__pose, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mocap4r2_msgs__msg__RigidBody__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__msg__Marker__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mocap4r2_msgs__msg__RigidBody__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mocap4r2_msgs__msg__RigidBody__TYPE_NAME, 27, 27},
      {mocap4r2_msgs__msg__RigidBody__FIELDS, 3, 3},
    },
    {mocap4r2_msgs__msg__RigidBody__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mocap4r2_msgs__msg__Marker__EXPECTED_HASH, mocap4r2_msgs__msg__Marker__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = mocap4r2_msgs__msg__Marker__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string rigid_body_name\n"
  "Marker[] markers\n"
  "geometry_msgs/Pose pose";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_msgs__msg__RigidBody__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mocap4r2_msgs__msg__RigidBody__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 64, 64},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_msgs__msg__RigidBody__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mocap4r2_msgs__msg__RigidBody__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[4] = *mocap4r2_msgs__msg__Marker__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
