#ifndef __ROBOTPART_H
#define __ROBOTPART_H 2016

#include "std_lib_facilities.h"

class Robot_Part
{
  public:
    virtual ~Robot_Part() = 0;

  protected:
    string name;
    int partNumber;
    //componentType componentType
    double weight;
    double cost;
    string description;
    //RenderedImage image

    int powerConsumedFunction(int speed);

};

Robot_Part::~Robot_Part() {}

class Head : Robot_Part
{
public:

  Head(){};

};

class Arm : Robot_Part
{
public:
  //type

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



};

class Battery : Robot_Part
{
public:
  Battery(){};
  double energy;
  double maxPower;
};
 #endif
