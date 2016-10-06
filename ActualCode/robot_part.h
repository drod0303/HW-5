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
  Head(){};

};

class Arm : Robot_Part
{
public:
  //type
  //int powerConsumedFunction(int speed);
  Arm(){};
};

class Torso : Robot_Part
{
public:
  Torso(){};
  int batteryCompartments; //might have to change to constant or final


};

class Locomotor : Robot_Part
{
public:
  Locomotor(){};
  int maxSpeed;
  int powerConsumed;


  //int powerConsumedFunction(int speed);
};

class Battery : Robot_Part
{
public:
  Battery(){};
  double energy;
  double maxPower;
};
 #endif
