#ifndef __ROBOTPART_H
#define __ROBOTPART_H 2016

#include "std_lib_facilities.h"

class Robot_Part
{
  public:

  private:
    string name;
    int partNumber;
    //componentType componentType
    double weight;
    double cost;
    string description;
    //RenderedImage image

    int powerConsumedFunction(int speed);

};


class Head : Robot_Part
{
public:
  //type

};

class Arm : Robot_Part
{
public:
  //type
  //int powerConsumedFunction(int speed);
};

class Torso : Robot_Part
{
public:
  const int batteryCompartments;

};

class Locomotor : Robot_Part
{
public:
  int maxSpeed;
  int powerConsumed;


  //int powerConsumedFunction(int speed);
};

class Battery : Robot_Part
{
public:
  double energy;
  double maxPower;
};
 #endif
