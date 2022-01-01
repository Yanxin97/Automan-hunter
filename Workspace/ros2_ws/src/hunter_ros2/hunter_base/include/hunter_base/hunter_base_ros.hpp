/*
 * hunter_base_ros.hpp
 *
 * Created on: Dec 30, 2021 20:49
 * Description:
 *
 * Copyright (c) 2021 Weston Robot Pte. Ltd.
 */

#ifndef HUNTER_BASE_ROS_HPP
#define HUNTER_BASE_ROS_HPP

#include <atomic>
#include <memory>

#include <rclcpp/rclcpp.hpp>

#include "ugv_sdk/mobile_robot/hunter_robot.hpp"

namespace westonrobot {
class HunterBaseRos : public rclcpp::Node {
 public:
  HunterBaseRos(std::string node_name);

  bool Initialize();
  void Run();
  void Stop();

 private:
  std::string port_name_;
  std::string odom_frame_;
  std::string base_frame_;
  std::string odom_topic_name_;

  bool simulated_robot_ = false;
  int sim_control_rate_ = 50;

  std::shared_ptr<HunterRobot> robot_;

  std::atomic<bool> keep_running_;

  void LoadParameters();
};
}  // namespace westonrobot

#endif /* HUNTER_BASE_ROS_HPP */
