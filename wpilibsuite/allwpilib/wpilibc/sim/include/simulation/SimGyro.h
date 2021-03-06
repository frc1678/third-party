/*----------------------------------------------------------------------------*/
/* Copyright (c) FIRST 2014-2016. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <gazebo/transport/transport.hh>
#include "simulation/gz_msgs/msgs.h"

using namespace gazebo;

class SimGyro {
 public:
  SimGyro(std::string topic);

  void Reset();
  double GetAngle();
  double GetVelocity();

 private:
  void sendCommand(std::string cmd);

  double position, velocity;
  transport::SubscriberPtr posSub, velSub;
  transport::PublisherPtr commandPub;
  void positionCallback(const msgs::ConstFloat64Ptr& msg);
  void velocityCallback(const msgs::ConstFloat64Ptr& msg);
};
