// Copyright 2018 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <rclcpp/rclcpp.hpp>

// include Ignition Transport
#include <ignition/transport/Node.hh>

#include <list>
#include <memory>
#include <string>

#include "bridge_ign_to_ros.hpp"
#include "bridge_ros_to_ign.hpp"

//////////////////////////////////////////////////
int main(int argc, char * argv[])
{
  // ROS node
  rclcpp::init(argc, argv);
  auto ros_node = std::make_shared<rclcpp::Node>("my_bridge_node");

  // Ignition node
  auto ign_node = std::make_shared<ignition::transport::Node>();

  std::string subtopic_name[3] = {"/world_vel/angular",
                                  "/world_vel/linear",
                                  "/world_pose"};
  std::string ros_type[3] = {"geometry_msgs/msg/Quaternion",
                             "geometry_msgs/msg/Vector3",
                             "geometry_msgs/msg/Pose"};
  std::string ign_type[3] = {"ignition.msgs.Quaternion",
                             "ignition.msgs.Vector3d",
                             "ignition.msgs.Pose"};

  std::list<ros_ign_bridge::BridgePtr> handles;

  for (int i = 1; i <= 10; i++){
      for (int j = 0; j < 3; j++){
          std::string topic_name = "model/suav_" + std::to_string(i) + subtopic_name[j];
          handles.push_back(
                  std::make_unique<ros_ign_bridge::BridgeIgnToRos>(
                          ros_node, ign_node,
                          ros_type[j], topic_name,
                          ign_type[j], topic_name
                          )
                  );
      }
  }

  for (int i = 1; i <= 6; i++){
      for (int j = 0; j < 3; j++){
          std::string topic_name = "model/buav_" + std::to_string(i) + subtopic_name[j];
          handles.push_back(
                  std::make_unique<ros_ign_bridge::BridgeIgnToRos>(
                          ros_node, ign_node,
                          ros_type[j], topic_name,
                          ign_type[j], topic_name
                          )
                  );
      }
  }

    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 3; j++){
            std::string chara;
            chara = chara + char('A' + i);
          std::string topic_name = "model/Vessel_" + chara + subtopic_name[j];
          handles.push_back(
                  std::make_unique<ros_ign_bridge::BridgeIgnToRos>(
                          ros_node, ign_node,
                          ros_type[j], topic_name,
                          ign_type[j], topic_name
                          )
                  );
      }
  }


  for (int j = 0; j < 3; j++){
      std::string topic_name = "model/USV" + subtopic_name[j];
      handles.push_back(
              std::make_unique<ros_ign_bridge::BridgeIgnToRos>(
                      ros_node, ign_node,
                      ros_type[j], topic_name,
                      ign_type[j], topic_name
                      )
              );
  }


  for (auto & bridge : handles) {
    bridge->Start();
  }

  rclcpp::spin(ros_node);

  // Wait for ign node shutdown
  ignition::transport::waitForShutdown();

  return 0;
}
