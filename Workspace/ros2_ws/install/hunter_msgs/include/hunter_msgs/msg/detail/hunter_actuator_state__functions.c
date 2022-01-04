// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hunter_msgs:msg/HunterActuatorState.idl
// generated code does not contain a copyright notice
#include "hunter_msgs/msg/detail/hunter_actuator_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
hunter_msgs__msg__HunterActuatorState__init(hunter_msgs__msg__HunterActuatorState * msg)
{
  if (!msg) {
    return false;
  }
  // motor_id
  // rpm
  // current
  // pulse_count
  // driver_voltage
  // driver_temperature
  // motor_temperature
  // driver_state
  return true;
}

void
hunter_msgs__msg__HunterActuatorState__fini(hunter_msgs__msg__HunterActuatorState * msg)
{
  if (!msg) {
    return;
  }
  // motor_id
  // rpm
  // current
  // pulse_count
  // driver_voltage
  // driver_temperature
  // motor_temperature
  // driver_state
}

hunter_msgs__msg__HunterActuatorState *
hunter_msgs__msg__HunterActuatorState__create()
{
  hunter_msgs__msg__HunterActuatorState * msg = (hunter_msgs__msg__HunterActuatorState *)malloc(sizeof(hunter_msgs__msg__HunterActuatorState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hunter_msgs__msg__HunterActuatorState));
  bool success = hunter_msgs__msg__HunterActuatorState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hunter_msgs__msg__HunterActuatorState__destroy(hunter_msgs__msg__HunterActuatorState * msg)
{
  if (msg) {
    hunter_msgs__msg__HunterActuatorState__fini(msg);
  }
  free(msg);
}


bool
hunter_msgs__msg__HunterActuatorState__Sequence__init(hunter_msgs__msg__HunterActuatorState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hunter_msgs__msg__HunterActuatorState * data = NULL;
  if (size) {
    data = (hunter_msgs__msg__HunterActuatorState *)calloc(size, sizeof(hunter_msgs__msg__HunterActuatorState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hunter_msgs__msg__HunterActuatorState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hunter_msgs__msg__HunterActuatorState__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
hunter_msgs__msg__HunterActuatorState__Sequence__fini(hunter_msgs__msg__HunterActuatorState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hunter_msgs__msg__HunterActuatorState__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

hunter_msgs__msg__HunterActuatorState__Sequence *
hunter_msgs__msg__HunterActuatorState__Sequence__create(size_t size)
{
  hunter_msgs__msg__HunterActuatorState__Sequence * array = (hunter_msgs__msg__HunterActuatorState__Sequence *)malloc(sizeof(hunter_msgs__msg__HunterActuatorState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hunter_msgs__msg__HunterActuatorState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hunter_msgs__msg__HunterActuatorState__Sequence__destroy(hunter_msgs__msg__HunterActuatorState__Sequence * array)
{
  if (array) {
    hunter_msgs__msg__HunterActuatorState__Sequence__fini(array);
  }
  free(array);
}
