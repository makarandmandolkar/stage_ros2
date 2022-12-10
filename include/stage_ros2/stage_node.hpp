#ifndef STAGE_ROS2_PKG__STAGE_ROS_HPP_
#define STAGE_ROS2_PKG__STAGE_ROS_HPP_

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "stage_ros2/visibility.h"

//#include <stage.hh>

class StageNode : public rclcpp::Node
{
public:
  STAGE_ROS2_PACKAGE_PUBLIC StageNode(rclcpp::NodeOptions options);

private:
  void on_timer();
  size_t count_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;

  // The main simulator object
  //Stg::World* world;
};

#endif  // STAGE_ROS2_PKG__STAGE_ROS_HPP_
