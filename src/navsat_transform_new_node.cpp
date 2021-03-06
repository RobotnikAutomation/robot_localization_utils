#include <ros/ros.h>
#include <robot_localization_utils/navsat_transform_new.h>

using namespace RobotLocalization;

int main(int argc, char **argv)
{
  ros::init(argc, argv, "navsat_transform_new_node");

  NavSatTransformNew trans;

  trans.run();

  return 0;
}
