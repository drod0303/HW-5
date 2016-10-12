#ifndef __ROBOTPART_H
#define __ROBOTPART_H 2016

#include "std_lib_facilities.h"



class Head
{
public:

  Head(){};
  string name;
  string partNumber;
  //componentType componentType
  double weight;
  double cost;
  string description;
  //RenderedImage image
  int powerConsumedFunction(int speed);
  int powerConsumed;

};

class Arm
{
public:
  //type

  Arm(){};
  string name;
  string partNumber;
  //componentType componentType
  double weight;
  double cost;
  string description;
  //RenderedImage image
  int powerConsumedFunction(int speed);
  int powerConsumed;
};

class Torso
{
public:
  Torso(){};
  int batteryCompartments; //might have to change to constant or final
  string name;
  string partNumber;
  //componentType componentType
  double weight;
  double cost;
  string description;
  //RenderedImage image
  int powerConsumedFunction(int speed);
  int powerConsumed;


};

class Locomotor
{
public:
  Locomotor(){};
  int maxSpeed;
  string name;
  string partNumber;
  //componentType componentType
  double weight;
  double cost;
  string description;
  //RenderedImage image
  int powerConsumedFunction(int speed);
  int powerConsumed;




};

class Battery
{
public:
  Battery(){};
  double energy;
  double maxPower;
  string name;
  string partNumber;
  //componentType componentType
  double weight;
  double cost;
  string description;
  //RenderedImage image
  int powerConsumedFunction(int speed);
  int powerConsumed;
};


extern vector<Head> head_list;
extern vector<Torso> torso_list;
extern vector<Arm> arm_list;
extern vector<Battery> battery_list;
extern vector<Locomotor> locomotor_list;




 #endif
