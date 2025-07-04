// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mocap4r2_marker_viz_srvs:srv/SetMarkerColor.idl
// generated code does not contain a copyright notice

#include "mocap4r2_marker_viz_srvs/srv/detail/set_marker_color__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_type_hash_t *
mocap4r2_marker_viz_srvs__srv__SetMarkerColor__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7b, 0xbe, 0xb9, 0x99, 0x8f, 0xcb, 0x08, 0x47,
      0xf8, 0x6e, 0x07, 0x27, 0xab, 0x3b, 0xf5, 0x1c,
      0x8d, 0x1e, 0x02, 0x1c, 0xb4, 0x6b, 0xe5, 0xa8,
      0xc9, 0x39, 0xc0, 0x3e, 0x66, 0xb0, 0xc0, 0x08,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_type_hash_t *
mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x78, 0x68, 0x2b, 0xaa, 0x5b, 0x5d, 0x5e, 0xe9,
      0x37, 0x2a, 0xe4, 0x94, 0x3c, 0xbb, 0x7f, 0xdb,
      0x23, 0xab, 0x41, 0xbe, 0x93, 0xf3, 0x4b, 0x32,
      0x9b, 0xf9, 0x33, 0xbe, 0x03, 0x80, 0x68, 0xa0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_type_hash_t *
mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x66, 0x97, 0x27, 0x93, 0xae, 0x19, 0xfe, 0x24,
      0xd9, 0x67, 0x3d, 0x6d, 0x52, 0x25, 0x01, 0x27,
      0x65, 0x19, 0xb4, 0x51, 0x54, 0x04, 0x77, 0x26,
      0x42, 0xd0, 0x2a, 0x7d, 0x1e, 0x23, 0xad, 0x59,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_type_hash_t *
mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0xe4, 0xf5, 0x5b, 0xa9, 0x69, 0x83, 0xb2,
      0x9e, 0xd9, 0xab, 0xde, 0x84, 0x87, 0xd0, 0x93,
      0x8c, 0x94, 0xa1, 0x15, 0xc4, 0xa4, 0x8a, 0x1a,
      0xf3, 0x4a, 0x29, 0x9b, 0x02, 0xf5, 0x2a, 0xc2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/int32__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "std_msgs/msg/detail/color_rgba__functions.h"

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
static const rosidl_type_hash_t std_msgs__msg__ColorRGBA__EXPECTED_HASH = {1, {
    0x77, 0xa7, 0xa5, 0xb9, 0xae, 0x47, 0x73, 0x06,
    0x09, 0x76, 0x65, 0x10, 0x6e, 0x04, 0x13, 0xba,
    0x74, 0x44, 0x02, 0x45, 0xb1, 0xf3, 0xd0, 0xc6,
    0xd6, 0x40, 0x5f, 0xe5, 0xc7, 0x81, 0x3f, 0xe8,
  }};
static const rosidl_type_hash_t std_msgs__msg__Int32__EXPECTED_HASH = {1, {
    0xb6, 0x57, 0x8d, 0xed, 0x3c, 0x58, 0xc6, 0x26,
    0xcf, 0xe8, 0xd1, 0xa6, 0xfb, 0x6e, 0x04, 0xf7,
    0x06, 0xf9, 0x7e, 0x9f, 0x03, 0xd2, 0x72, 0x7c,
    0x9f, 0xf4, 0xe7, 0x4b, 0x1c, 0xef, 0x0d, 0xeb,
  }};
#endif

static char mocap4r2_marker_viz_srvs__srv__SetMarkerColor__TYPE_NAME[] = "mocap4r2_marker_viz_srvs/srv/SetMarkerColor";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__TYPE_NAME[] = "mocap4r2_marker_viz_srvs/srv/SetMarkerColor_Event";
static char mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__TYPE_NAME[] = "mocap4r2_marker_viz_srvs/srv/SetMarkerColor_Request";
static char mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__TYPE_NAME[] = "mocap4r2_marker_viz_srvs/srv/SetMarkerColor_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__ColorRGBA__TYPE_NAME[] = "std_msgs/msg/ColorRGBA";
static char std_msgs__msg__Int32__TYPE_NAME[] = "std_msgs/msg/Int32";

// Define type names, field names, and default values
static char mocap4r2_marker_viz_srvs__srv__SetMarkerColor__FIELD_NAME__request_message[] = "request_message";
static char mocap4r2_marker_viz_srvs__srv__SetMarkerColor__FIELD_NAME__response_message[] = "response_message";
static char mocap4r2_marker_viz_srvs__srv__SetMarkerColor__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field mocap4r2_marker_viz_srvs__srv__SetMarkerColor__FIELDS[] = {
  {
    {mocap4r2_marker_viz_srvs__srv__SetMarkerColor__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_marker_viz_srvs__srv__SetMarkerColor__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_marker_viz_srvs__srv__SetMarkerColor__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mocap4r2_marker_viz_srvs__srv__SetMarkerColor__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__ColorRGBA__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Int32__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mocap4r2_marker_viz_srvs__srv__SetMarkerColor__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mocap4r2_marker_viz_srvs__srv__SetMarkerColor__TYPE_NAME, 43, 43},
      {mocap4r2_marker_viz_srvs__srv__SetMarkerColor__FIELDS, 3, 3},
    },
    {mocap4r2_marker_viz_srvs__srv__SetMarkerColor__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__ColorRGBA__EXPECTED_HASH, std_msgs__msg__ColorRGBA__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__ColorRGBA__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Int32__EXPECTED_HASH, std_msgs__msg__Int32__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = std_msgs__msg__Int32__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__FIELD_NAME__id[] = "id";
static char mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__FIELD_NAME__color[] = "color";

static rosidl_runtime_c__type_description__Field mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__FIELDS[] = {
  {
    {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Int32__TYPE_NAME, 18, 18},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__FIELD_NAME__color, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__ColorRGBA__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {std_msgs__msg__ColorRGBA__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Int32__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__TYPE_NAME, 51, 51},
      {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__FIELDS, 2, 2},
    },
    {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&std_msgs__msg__ColorRGBA__EXPECTED_HASH, std_msgs__msg__ColorRGBA__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = std_msgs__msg__ColorRGBA__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Int32__EXPECTED_HASH, std_msgs__msg__Int32__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Int32__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__FIELDS[] = {
  {
    {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__TYPE_NAME, 52, 52},
      {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__FIELD_NAME__info[] = "info";
static char mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__FIELD_NAME__request[] = "request";
static char mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__FIELDS[] = {
  {
    {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__ColorRGBA__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Int32__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__TYPE_NAME, 49, 49},
      {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__FIELDS, 3, 3},
    },
    {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__ColorRGBA__EXPECTED_HASH, std_msgs__msg__ColorRGBA__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__ColorRGBA__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Int32__EXPECTED_HASH, std_msgs__msg__Int32__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Int32__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Int32 id\n"
  "std_msgs/ColorRGBA color\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_marker_viz_srvs__srv__SetMarkerColor__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mocap4r2_marker_viz_srvs__srv__SetMarkerColor__TYPE_NAME, 43, 43},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 47, 47},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_marker_viz_srvs__srv__SetMarkerColor__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mocap4r2_marker_viz_srvs__srv__SetMarkerColor__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__get_individual_type_description_source(NULL);
    sources[3] = *mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__get_individual_type_description_source(NULL);
    sources[4] = *mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__ColorRGBA__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__Int32__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__get_individual_type_description_source(NULL),
    sources[1] = *std_msgs__msg__ColorRGBA__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Int32__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Request__get_individual_type_description_source(NULL);
    sources[3] = *mocap4r2_marker_viz_srvs__srv__SetMarkerColor_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__ColorRGBA__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Int32__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
