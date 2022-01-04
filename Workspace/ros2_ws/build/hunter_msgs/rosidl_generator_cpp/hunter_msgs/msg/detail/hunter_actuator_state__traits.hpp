// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hunter_msgs:msg/HunterActuatorState.idl
// generated code does not contain a copyright notice

#ifndef HUNTER_MSGS__MSG__DETAIL__HUNTER_ACTUATOR_STATE__TRAITS_HPP_
#define HUNTER_MSGS__MSG__DETAIL__HUNTER_ACTUATOR_STATE__TRAITS_HPP_

#include "hunter_msgs/msg/detail/hunter_actuator_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hunter_msgs::msg::HunterActuatorState>()
{
  return "hunter_msgs::msg::HunterActuatorState";
}

template<>
inline const char * name<hunter_msgs::msg::HunterActuatorState>()
{
  return "hunter_msgs/msg/HunterActuatorState";
}

template<>
struct has_fixed_size<hunter_msgs::msg::HunterActuatorState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hunter_msgs::msg::HunterActuatorState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hunter_msgs::msg::HunterActuatorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HUNTER_MSGS__MSG__DETAIL__HUNTER_ACTUATOR_STATE__TRAITS_HPP_