// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hunter_msgs:msg/HunterActuatorState.idl
// generated code does not contain a copyright notice

#ifndef HUNTER_MSGS__MSG__DETAIL__HUNTER_ACTUATOR_STATE__FUNCTIONS_H_
#define HUNTER_MSGS__MSG__DETAIL__HUNTER_ACTUATOR_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hunter_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "hunter_msgs/msg/detail/hunter_actuator_state__struct.h"

/// Initialize msg/HunterActuatorState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hunter_msgs__msg__HunterActuatorState
 * )) before or use
 * hunter_msgs__msg__HunterActuatorState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hunter_msgs
bool
hunter_msgs__msg__HunterActuatorState__init(hunter_msgs__msg__HunterActuatorState * msg);

/// Finalize msg/HunterActuatorState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunter_msgs
void
hunter_msgs__msg__HunterActuatorState__fini(hunter_msgs__msg__HunterActuatorState * msg);

/// Create msg/HunterActuatorState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hunter_msgs__msg__HunterActuatorState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hunter_msgs
hunter_msgs__msg__HunterActuatorState *
hunter_msgs__msg__HunterActuatorState__create();

/// Destroy msg/HunterActuatorState message.
/**
 * It calls
 * hunter_msgs__msg__HunterActuatorState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunter_msgs
void
hunter_msgs__msg__HunterActuatorState__destroy(hunter_msgs__msg__HunterActuatorState * msg);


/// Initialize array of msg/HunterActuatorState messages.
/**
 * It allocates the memory for the number of elements and calls
 * hunter_msgs__msg__HunterActuatorState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunter_msgs
bool
hunter_msgs__msg__HunterActuatorState__Sequence__init(hunter_msgs__msg__HunterActuatorState__Sequence * array, size_t size);

/// Finalize array of msg/HunterActuatorState messages.
/**
 * It calls
 * hunter_msgs__msg__HunterActuatorState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunter_msgs
void
hunter_msgs__msg__HunterActuatorState__Sequence__fini(hunter_msgs__msg__HunterActuatorState__Sequence * array);

/// Create array of msg/HunterActuatorState messages.
/**
 * It allocates the memory for the array and calls
 * hunter_msgs__msg__HunterActuatorState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hunter_msgs
hunter_msgs__msg__HunterActuatorState__Sequence *
hunter_msgs__msg__HunterActuatorState__Sequence__create(size_t size);

/// Destroy array of msg/HunterActuatorState messages.
/**
 * It calls
 * hunter_msgs__msg__HunterActuatorState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hunter_msgs
void
hunter_msgs__msg__HunterActuatorState__Sequence__destroy(hunter_msgs__msg__HunterActuatorState__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // HUNTER_MSGS__MSG__DETAIL__HUNTER_ACTUATOR_STATE__FUNCTIONS_H_
