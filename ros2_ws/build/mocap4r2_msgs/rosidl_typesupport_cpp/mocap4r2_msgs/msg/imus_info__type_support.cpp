// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from mocap4r2_msgs:msg/ImusInfo.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mocap4r2_msgs/msg/detail/imus_info__functions.h"
#include "mocap4r2_msgs/msg/detail/imus_info__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mocap4r2_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _ImusInfo_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ImusInfo_type_support_ids_t;

static const _ImusInfo_type_support_ids_t _ImusInfo_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ImusInfo_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ImusInfo_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ImusInfo_type_support_symbol_names_t _ImusInfo_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mocap4r2_msgs, msg, ImusInfo)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mocap4r2_msgs, msg, ImusInfo)),
  }
};

typedef struct _ImusInfo_type_support_data_t
{
  void * data[2];
} _ImusInfo_type_support_data_t;

static _ImusInfo_type_support_data_t _ImusInfo_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ImusInfo_message_typesupport_map = {
  2,
  "mocap4r2_msgs",
  &_ImusInfo_message_typesupport_ids.typesupport_identifier[0],
  &_ImusInfo_message_typesupport_symbol_names.symbol_name[0],
  &_ImusInfo_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ImusInfo_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ImusInfo_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mocap4r2_msgs__msg__ImusInfo__get_type_hash,
  &mocap4r2_msgs__msg__ImusInfo__get_type_description,
  &mocap4r2_msgs__msg__ImusInfo__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace mocap4r2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mocap4r2_msgs::msg::ImusInfo>()
{
  return &::mocap4r2_msgs::msg::rosidl_typesupport_cpp::ImusInfo_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mocap4r2_msgs, msg, ImusInfo)() {
  return get_message_type_support_handle<mocap4r2_msgs::msg::ImusInfo>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
