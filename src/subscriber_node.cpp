#include "ros/ros.h"
#include "std_msgs/String.h"

#include "publisher_package/topic_name.h"

void chatterCallback(const std_msgs::String::ConstPtr& msg) {
  ROS_INFO("I Heard: [%s]", msg->data.c_str());
}

int main(int argc, char** argv) {
  ros::init(argc, argv, "subscriber_node");

  ros::NodeHandle nh;

  ros::Subscriber sub = nh.subscribe(topic_name, 1000, chatterCallback);

  ros::spin();

  return 0;
}
