// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mocap4r2_marker_viz_srvs:srv/ResetMarkerColor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mocap4r2_marker_viz_srvs/srv/reset_marker_color.h"


#ifndef MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__RESET_MARKER_COLOR__FUNCTIONS_H_
#define MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__RESET_MARKER_COLOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "mocap4r2_marker_viz_srvs/msg/rosidl_generator_c__visibility_control.h"

#include "mocap4r2_marker_viz_srvs/srv/detail/reset_marker_color__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_type_hash_t *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_runtime_c__type_description__TypeDescription *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/ResetMarkerColor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request
 * )) before or use
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__init(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * msg);

/// Finalize srv/ResetMarkerColor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
void
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__fini(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * msg);

/// Create srv/ResetMarkerColor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__create(void);

/// Destroy srv/ResetMarkerColor message.
/**
 * It calls
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
void
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__destroy(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * msg);

/// Check for srv/ResetMarkerColor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__are_equal(const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * lhs, const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * rhs);

/// Copy a srv/ResetMarkerColor message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__copy(
  const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * input,
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_type_hash_t *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_runtime_c__type_description__TypeDescription *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/ResetMarkerColor messages.
/**
 * It allocates the memory for the number of elements and calls
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence__init(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence * array, size_t size);

/// Finalize array of srv/ResetMarkerColor messages.
/**
 * It calls
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
void
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence__fini(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence * array);

/// Create array of srv/ResetMarkerColor messages.
/**
 * It allocates the memory for the array and calls
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence__create(size_t size);

/// Destroy array of srv/ResetMarkerColor messages.
/**
 * It calls
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
void
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence__destroy(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence * array);

/// Check for srv/ResetMarkerColor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence__are_equal(const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence * lhs, const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence * rhs);

/// Copy an array of srv/ResetMarkerColor messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence__copy(
  const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence * input,
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Request__Sequence * output);

/// Initialize srv/ResetMarkerColor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response
 * )) before or use
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__init(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * msg);

/// Finalize srv/ResetMarkerColor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
void
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__fini(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * msg);

/// Create srv/ResetMarkerColor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__create(void);

/// Destroy srv/ResetMarkerColor message.
/**
 * It calls
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
void
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__destroy(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * msg);

/// Check for srv/ResetMarkerColor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__are_equal(const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * lhs, const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * rhs);

/// Copy a srv/ResetMarkerColor message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__copy(
  const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * input,
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_type_hash_t *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_runtime_c__type_description__TypeDescription *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/ResetMarkerColor messages.
/**
 * It allocates the memory for the number of elements and calls
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence__init(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence * array, size_t size);

/// Finalize array of srv/ResetMarkerColor messages.
/**
 * It calls
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
void
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence__fini(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence * array);

/// Create array of srv/ResetMarkerColor messages.
/**
 * It allocates the memory for the array and calls
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence__create(size_t size);

/// Destroy array of srv/ResetMarkerColor messages.
/**
 * It calls
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
void
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence__destroy(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence * array);

/// Check for srv/ResetMarkerColor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence__are_equal(const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence * lhs, const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence * rhs);

/// Copy an array of srv/ResetMarkerColor messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence__copy(
  const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence * input,
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Response__Sequence * output);

/// Initialize srv/ResetMarkerColor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event
 * )) before or use
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__init(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event * msg);

/// Finalize srv/ResetMarkerColor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
void
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__fini(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event * msg);

/// Create srv/ResetMarkerColor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__create(void);

/// Destroy srv/ResetMarkerColor message.
/**
 * It calls
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
void
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__destroy(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event * msg);

/// Check for srv/ResetMarkerColor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__are_equal(const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event * lhs, const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event * rhs);

/// Copy a srv/ResetMarkerColor message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__copy(
  const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event * input,
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_type_hash_t *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_runtime_c__type_description__TypeDescription *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/ResetMarkerColor messages.
/**
 * It allocates the memory for the number of elements and calls
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__Sequence__init(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__Sequence * array, size_t size);

/// Finalize array of srv/ResetMarkerColor messages.
/**
 * It calls
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
void
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__Sequence__fini(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__Sequence * array);

/// Create array of srv/ResetMarkerColor messages.
/**
 * It allocates the memory for the array and calls
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__Sequence *
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__Sequence__create(size_t size);

/// Destroy array of srv/ResetMarkerColor messages.
/**
 * It calls
 * mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
void
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__Sequence__destroy(mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__Sequence * array);

/// Check for srv/ResetMarkerColor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__Sequence__are_equal(const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__Sequence * lhs, const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__Sequence * rhs);

/// Copy an array of srv/ResetMarkerColor messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_marker_viz_srvs
bool
mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__Sequence__copy(
  const mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__Sequence * input,
  mocap4r2_marker_viz_srvs__srv__ResetMarkerColor_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // MOCAP4R2_MARKER_VIZ_SRVS__SRV__DETAIL__RESET_MARKER_COLOR__FUNCTIONS_H_
