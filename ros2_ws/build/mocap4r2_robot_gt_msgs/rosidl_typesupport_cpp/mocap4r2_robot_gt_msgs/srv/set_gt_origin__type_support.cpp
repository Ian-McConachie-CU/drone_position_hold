// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from mocap4r2_robot_gt_msgs:srv/SetGTOrigin.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mocap4r2_robot_gt_msgs/srv/detail/set_gt_origin__functions.h"
#include "mocap4r2_robot_gt_msgs/srv/detail/set_gt_origin__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mocap4r2_robot_gt_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetGTOrigin_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetGTOrigin_Request_type_support_ids_t;

static const _SetGTOrigin_Request_type_support_ids_t _SetGTOrigin_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetGTOrigin_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetGTOrigin_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetGTOrigin_Request_type_support_symbol_names_t _SetGTOrigin_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mocap4r2_robot_gt_msgs, srv, SetGTOrigin_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mocap4r2_robot_gt_msgs, srv, SetGTOrigin_Request)),
  }
};

typedef struct _SetGTOrigin_Request_type_support_data_t
{
  void * data[2];
} _SetGTOrigin_Request_type_support_data_t;

static _SetGTOrigin_Request_type_support_data_t _SetGTOrigin_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetGTOrigin_Request_message_typesupport_map = {
  2,
  "mocap4r2_robot_gt_msgs",
  &_SetGTOrigin_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetGTOrigin_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetGTOrigin_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetGTOrigin_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetGTOrigin_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__get_type_hash,
  &mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__get_type_description,
  &mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mocap4r2_robot_gt_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request>()
{
  return &::mocap4r2_robot_gt_msgs::srv::rosidl_typesupport_cpp::SetGTOrigin_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mocap4r2_robot_gt_msgs, srv, SetGTOrigin_Request)() {
  return get_message_type_support_handle<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mocap4r2_robot_gt_msgs/srv/detail/set_gt_origin__functions.h"
// already included above
// #include "mocap4r2_robot_gt_msgs/srv/detail/set_gt_origin__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mocap4r2_robot_gt_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetGTOrigin_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetGTOrigin_Response_type_support_ids_t;

static const _SetGTOrigin_Response_type_support_ids_t _SetGTOrigin_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetGTOrigin_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetGTOrigin_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetGTOrigin_Response_type_support_symbol_names_t _SetGTOrigin_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mocap4r2_robot_gt_msgs, srv, SetGTOrigin_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mocap4r2_robot_gt_msgs, srv, SetGTOrigin_Response)),
  }
};

typedef struct _SetGTOrigin_Response_type_support_data_t
{
  void * data[2];
} _SetGTOrigin_Response_type_support_data_t;

static _SetGTOrigin_Response_type_support_data_t _SetGTOrigin_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetGTOrigin_Response_message_typesupport_map = {
  2,
  "mocap4r2_robot_gt_msgs",
  &_SetGTOrigin_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetGTOrigin_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetGTOrigin_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetGTOrigin_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetGTOrigin_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__get_type_hash,
  &mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__get_type_description,
  &mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mocap4r2_robot_gt_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response>()
{
  return &::mocap4r2_robot_gt_msgs::srv::rosidl_typesupport_cpp::SetGTOrigin_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mocap4r2_robot_gt_msgs, srv, SetGTOrigin_Response)() {
  return get_message_type_support_handle<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mocap4r2_robot_gt_msgs/srv/detail/set_gt_origin__functions.h"
// already included above
// #include "mocap4r2_robot_gt_msgs/srv/detail/set_gt_origin__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mocap4r2_robot_gt_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetGTOrigin_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetGTOrigin_Event_type_support_ids_t;

static const _SetGTOrigin_Event_type_support_ids_t _SetGTOrigin_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetGTOrigin_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetGTOrigin_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetGTOrigin_Event_type_support_symbol_names_t _SetGTOrigin_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mocap4r2_robot_gt_msgs, srv, SetGTOrigin_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mocap4r2_robot_gt_msgs, srv, SetGTOrigin_Event)),
  }
};

typedef struct _SetGTOrigin_Event_type_support_data_t
{
  void * data[2];
} _SetGTOrigin_Event_type_support_data_t;

static _SetGTOrigin_Event_type_support_data_t _SetGTOrigin_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetGTOrigin_Event_message_typesupport_map = {
  2,
  "mocap4r2_robot_gt_msgs",
  &_SetGTOrigin_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetGTOrigin_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetGTOrigin_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetGTOrigin_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetGTOrigin_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Event__get_type_hash,
  &mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Event__get_type_description,
  &mocap4r2_robot_gt_msgs__srv__SetGTOrigin_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mocap4r2_robot_gt_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Event>()
{
  return &::mocap4r2_robot_gt_msgs::srv::rosidl_typesupport_cpp::SetGTOrigin_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mocap4r2_robot_gt_msgs, srv, SetGTOrigin_Event)() {
  return get_message_type_support_handle<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "mocap4r2_robot_gt_msgs/srv/detail/set_gt_origin__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mocap4r2_robot_gt_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetGTOrigin_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetGTOrigin_type_support_ids_t;

static const _SetGTOrigin_type_support_ids_t _SetGTOrigin_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetGTOrigin_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetGTOrigin_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetGTOrigin_type_support_symbol_names_t _SetGTOrigin_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mocap4r2_robot_gt_msgs, srv, SetGTOrigin)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mocap4r2_robot_gt_msgs, srv, SetGTOrigin)),
  }
};

typedef struct _SetGTOrigin_type_support_data_t
{
  void * data[2];
} _SetGTOrigin_type_support_data_t;

static _SetGTOrigin_type_support_data_t _SetGTOrigin_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetGTOrigin_service_typesupport_map = {
  2,
  "mocap4r2_robot_gt_msgs",
  &_SetGTOrigin_service_typesupport_ids.typesupport_identifier[0],
  &_SetGTOrigin_service_typesupport_symbol_names.symbol_name[0],
  &_SetGTOrigin_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetGTOrigin_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetGTOrigin_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mocap4r2_robot_gt_msgs::srv::SetGTOrigin_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<mocap4r2_robot_gt_msgs::srv::SetGTOrigin>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<mocap4r2_robot_gt_msgs::srv::SetGTOrigin>,
  &mocap4r2_robot_gt_msgs__srv__SetGTOrigin__get_type_hash,
  &mocap4r2_robot_gt_msgs__srv__SetGTOrigin__get_type_description,
  &mocap4r2_robot_gt_msgs__srv__SetGTOrigin__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mocap4r2_robot_gt_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mocap4r2_robot_gt_msgs::srv::SetGTOrigin>()
{
  return &::mocap4r2_robot_gt_msgs::srv::rosidl_typesupport_cpp::SetGTOrigin_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, mocap4r2_robot_gt_msgs, srv, SetGTOrigin)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<mocap4r2_robot_gt_msgs::srv::SetGTOrigin>();
}

#ifdef __cplusplus
}
#endif
