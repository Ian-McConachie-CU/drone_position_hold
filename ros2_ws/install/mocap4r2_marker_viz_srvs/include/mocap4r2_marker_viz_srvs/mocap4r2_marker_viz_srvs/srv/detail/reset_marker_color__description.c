// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mocap4r2_marker_viz_srvs:srv/ResetMarkerColor.idl
// generated code does not contain a copyright notice

#include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_type_hash_t *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc8, 0x56, 0x53, 0x1a, 0x33, 0x72, 0x8b, 0x00,
      0x09, 0x8a, 0x6d, 0x82, 0xbd, 0x00, 0x37, 0xd0,
      0x9c, 0x14, 0xb2, 0x91, 0x4c, 0xf1, 0x92, 0x2e,
      0x39, 0xfe, 0x22, 0x8f, 0x46, 0x50, 0x19, 0xc4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_type_hash_t *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfe, 0x76, 0x64, 0x04, 0xac, 0x96, 0x33, 0xfa,
      0x88, 0xec, 0x2e, 0xf9, 0x93, 0x9e, 0x54, 0x16,
      0xca, 0xbf, 0xa6, 0x2f, 0xda, 0xc4, 0xac, 0x2c,
      0xb5, 0xc6, 0x5c, 0xe2, 0xc9, 0xc8, 0x81, 0xe4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_type_hash_t *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x72, 0x84, 0x50, 0x51, 0xb1, 0x43, 0x9c, 0x33,
      0x7c, 0xad, 0xb9, 0x77, 0xb3, 0xa2, 0xd5, 0xcb,
      0x14, 0xfc, 0x7a, 0xb6, 0x34, 0xe4, 0xfa, 0x35,
      0x0f, 0x06, 0xd6, 0xf9, 0x55, 0xd5, 0x40, 0x27,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_type_hash_t *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0xcb, 0xa3, 0x16, 0xf4, 0x42, 0xc8, 0x3a,
      0xe7, 0x00, 0x45, 0x80, 0xae, 0xc7, 0x96, 0xc7,
      0x49, 0xa0, 0xae, 0x99, 0x0c, 0x27, 0xc3, 0x9c,
      0xd6, 0x63, 0x85, 0x62, 0x95, 0x74, 0xe5, 0xf6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "std_msgs/msg/detail/int32__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t std_msgs__msg__Int32__EXPECTED_HASH = {1, {
    0xb6, 0x57, 0x8d, 0xed, 0x3c, 0x58, 0xc6, 0x26,
    0xcf, 0xe8, 0xd1, 0xa6, 0xfb, 0x6e, 0x04, 0xf7,
    0x06, 0xf9, 0x7e, 0x9f, 0x03, 0xd2, 0x72, 0x7c,
    0x9f, 0xf4, 0xe7, 0x4b, 0x1c, 0xef, 0x0d, 0xeb,
  }};
#endif

static char mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__TYPE_NAME[] = "mocap4r2_marker_viz_srvs/srv/ResetMarkerColor";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__TYPE_NAME[] = "mocap4r2_marker_viz_srvs/srv/ResetMarkerColor_Event";
static char mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__TYPE_NAME[] = "mocap4r2_marker_viz_srvs/srv/ResetMarkerColor_Request";
static char mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__TYPE_NAME[] = "mocap4r2_marker_viz_srvs/srv/ResetMarkerColor_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Int32__TYPE_NAME[] = "std_msgs/msg/Int32";

// Define type names, field names, and default values
static char mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__FIELD_NAME__request_message[] = "request_message";
static char mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__FIELD_NAME__response_message[] = "response_message";
static char mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__FIELDS[] = {
  {
    {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Int32__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__TYPE_NAME, 45, 45},
      {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__FIELDS, 3, 3},
    },
    {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Int32__EXPECTED_HASH, std_msgs__msg__Int32__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Int32__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__FIELD_NAME__id[] = "id";

static rosidl_runtime_c__type_description__Field mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__FIELDS[] = {
  {
    {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Int32__TYPE_NAME, 18, 18},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {std_msgs__msg__Int32__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__TYPE_NAME, 53, 53},
      {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__FIELDS, 1, 1},
    },
    {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&std_msgs__msg__Int32__EXPECTED_HASH, std_msgs__msg__Int32__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = std_msgs__msg__Int32__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__FIELDS[] = {
  {
    {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__TYPE_NAME, 54, 54},
      {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__FIELD_NAME__info[] = "info";
static char mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__FIELD_NAME__request[] = "request";
static char mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__FIELDS[] = {
  {
    {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Int32__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__TYPE_NAME, 51, 51},
      {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__FIELDS, 3, 3},
    },
    {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Int32__EXPECTED_HASH, std_msgs__msg__Int32__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Int32__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Int32 id\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__TYPE_NAME, 45, 45},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 22, 22},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__TYPE_NAME, 53, 53},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__TYPE_NAME, 54, 54},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__get_individual_type_description_source(NULL);
    sources[3] = *mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__get_individual_type_description_source(NULL);
    sources[4] = *mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Int32__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__get_individual_type_description_source(NULL),
    sources[1] = *std_msgs__msg__Int32__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__get_individual_type_description_source(NULL);
    sources[3] = *mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Int32__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
