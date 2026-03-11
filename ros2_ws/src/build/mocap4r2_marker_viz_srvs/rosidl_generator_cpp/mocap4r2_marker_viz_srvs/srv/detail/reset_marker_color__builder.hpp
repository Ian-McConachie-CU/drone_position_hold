// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mocap4r2_marker_viz_srvs:srv/ResetMarkerColor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mocap4r2_marker_viz_srvs/srv/reset_marker_color.hpp"


#ifndef MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__RESET_MARKER_COLOR__BUILDER_HPP_
#define MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__RESET_MARKER_COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mocap4r2_marker_viz_srvs
{

namespace srv
{

namespace builder
{

class Init_ResetMarkerColor_Request_id
{
public:
  Init_ResetMarkerColor_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request id(::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Request>()
{
  return mocap4r2_marker_viz_srvs::srv::builder::Init_ResetMarkerColor_Request_id();
}

}  // namespace mocap4r2_marker_viz_srvs


namespace mocap4r2_marker_viz_srvs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response>()
{
  return ::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mocap4r2_marker_viz_srvs


namespace mocap4r2_marker_viz_srvs
{

namespace srv
{

namespace builder
{

class Init_ResetMarkerColor_Event_response
{
public:
  explicit Init_ResetMarkerColor_Event_response(::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Event & msg)
  : msg_(msg)
  {}
  ::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Event response(::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Event msg_;
};

class Init_ResetMarkerColor_Event_request
{
public:
  explicit Init_ResetMarkerColor_Event_request(::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Event & msg)
  : msg_(msg)
  {}
  Init_ResetMarkerColor_Event_response request(::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ResetMarkerColor_Event_response(msg_);
  }

private:
  ::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Event msg_;
};

class Init_ResetMarkerColor_Event_info
{
public:
  Init_ResetMarkerColor_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResetMarkerColor_Event_request info(::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ResetMarkerColor_Event_request(msg_);
  }

private:
  ::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mocap4r2_marker_viz_srvs::srv::ResetMarkerColor_Event>()
{
  return mocap4r2_marker_viz_srvs::srv::builder::Init_ResetMarkerColor_Event_info();
}

}  // namespace mocap4r2_marker_viz_srvs

#endif  // MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__RESET_MARKER_COLOR__BUILDER_HPP_
