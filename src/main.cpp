#include "yocs_waypoints_navi/waypoints_navi.hpp"


int main(int argc, char **argv)
{
  ros::init(argc, argv, "waypoints_navi");
  yocs::WaypointsGoalNode eg;

  if (eg.init() == false)
  {
    ROS_ERROR("%s initialization failed", ros::this_node::getName().c_str());
    return -1;
  }
  ROS_INFO("%s initialized", ros::this_node::getName().c_str());

  ROS_INFO("to start:rostopic pub /nav_ctrl yocs_msgs/NavigationControl");
  ROS_INFO("control: 1 goal_name: ''");
  eg.spin();
  return 0;
}
