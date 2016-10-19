#ifndef __ROBOTMODEL_H
#define __ROBOTMODEL_H 2016

#include "std_lib_facilities.h"
#include "robot_part.h"

class Model
{
public:

    Model(){};
    Head head;
    vector<Arm> arm;
    vector<Battery> battery;
    Torso torso;
    Locomotor locomotor;

    string model_name;
    string model_number;
    double total_cost;
    string price;

    double totalCost();

};

extern vector<Model> model_list;


 #endif
