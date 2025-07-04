// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mocap4r2_marker_viz_srvs:srv/ResetMarkerColor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mocap4r2_marker_viz_srvs/srv/reset_marker_color.hpp"


#ifndef MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__RESET_MARKER_COLOR__TRAITS_HPP_
#define MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__RESET_MARKER_COLOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'id'
#include "std_msgs/msg/detail/int32__traits.hpp"

namespace mocap4r2_marker_viz_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetMarkerColor_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    to_flow_style_yaml(msg.id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetMarkerColor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_block_style_yaml(msg.id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetMarkerColor_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mocap4r2_marker_viz_srvs

namespace rosidl_generator_traits
{

[[deprecated("use mocap4r2_marker_viz_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mocap4r2_marker_viz_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mocap4r2_marker_viz_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request & msg)
{
  return mocap4r2_marker_viz_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request>()
{
  return "mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request";
}

template<>
inline const char * name<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request>()
{
  return "mocap4r2_marker_viz_srvs/srv/ResetMarkerColor_Request";
}

template<>
struct has_fixed_size<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Int32>::value> {};

template<>
struct has_bounded_size<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Int32>::value> {};

template<>
struct is_message<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mocap4r2_marker_viz_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetMarkerColor_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetMarkerColor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetMarkerColor_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mocap4r2_marker_viz_srvs

namespace rosidl_generator_traits
{

[[deprecated("use mocap4r2_marker_viz_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mocap4r2_marker_viz_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mocap4r2_marker_viz_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response & msg)
{
  return mocap4r2_marker_viz_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response>()
{
  return "mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response";
}

template<>
inline const char * name<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response>()
{
  return "mocap4r2_marker_viz_srvs/srv/ResetMarkerColor_Response";
}

template<>
struct has_fixed_size<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace mocap4r2_marker_viz_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetMarkerColor_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetMarkerColor_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetMarkerColor_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mocap4r2_marker_viz_srvs

namespace rosidl_generator_traits
{

[[deprecated("use mocap4r2_marker_viz_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  mocap4r2_marker_viz_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mocap4r2_marker_viz_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Event & msg)
{
  return mocap4r2_marker_viz_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Event>()
{
  return "mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Event";
}

template<>
inline const char * name<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Event>()
{
  return "mocap4r2_marker_viz_srvs/srv/ResetMarkerColor_Event";
}

template<>
struct has_fixed_size<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Event>
  : std::integral_constant<bool, has_bounded_size<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request>::value && has_bounded_size<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor>()
{
  return "mocap4r2_marker_viz_srvs::srv::ResetMarkerColor";
}

template<>
inline const char * name<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor>()
{
  return "mocap4r2_marker_viz_srvs/srv/ResetMarkerColor";
}

template<>
struct has_fixed_size<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor>
  : std::integral_constant<
    bool,
    has_fixed_size<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request>::value &&
    has_fixed_size<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response>::value
  >
{
};

template<>
struct has_bounded_size<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor>
  : std::integral_constant<
    bool,
    has_bounded_size<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request>::value &&
    has_bounded_size<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response>::value
  >
{
};

template<>
struct is_service<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor>
  : std::true_type
{
};

template<>
struct is_service_request<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__RESET_MARKER_COLOR__TRAITS_HPP_
