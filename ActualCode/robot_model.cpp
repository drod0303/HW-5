#include "std_lib_facilities.h"
#include "robot_model.h"
#include "robot_part.h"

double Model::totalCost()
{
  double headCost =0;
  double armCost =0;
  double batteryCost =0;
  double locomotorCost =0;
  double torsoCost =0;
  double totalCost = 0;
  int i;

  headCost = stod(head.cost);
  locomotorCost = stod(locomotor.cost);
  torsoCost = stod(torso.cost);
  for(i=0;i<battery.size();i++)
  {
    batteryCost = batteryCost + stod(battery[i].cost);
  }
  for(i=0;i<arm.size();i++)
  {
    armCost = armCost + stod(arm[i].cost);
  }
  totalCost = headCost + locomotorCost+torsoCost+batteryCost+armCost;
  return totalCost;


}

Model findAndAdd(string partNumber, Model model)
{

  int i = 0;
  static int head = 1;
  static int torso = 1;
  static int locomotor = 1;

    for(i=0;i<head_list.size();i++)
    {
      if(head_list[i].partNumber == partNumber)
      {
        if(head)
        {
          model.head = head_list[i];
          head = 0;
          return model;
        }
        else
        {
          cout<< "WARNING: CANNOT HAVE MORE THAN 1 HEAD\n";
          return model;
        }
      }
    }


    for(i=0;i<torso_list.size();i++)
    {
      if(torso_list[i].partNumber == partNumber)
      {
        if(torso)
        {
          model.torso = torso_list[i];
          torso = 0;
          return model;
        }
        else
        {
          cout<< "WARNING: CANNOT HAVE MORE THAN 1 TORSO\n";
          return model;
        }
      }
    }


    for(i=0;i<arm_list.size();i++)
    {
      if(arm_list[i].partNumber == partNumber)
      {
        if(model.arm.size() >= 2)
        {
          cout<< "WARNING: YOU ARE NOT ALLOWED TO HAVE MORE THAN 2 ARMS\n";
        }
        else
        {
          model.arm.push_back(arm_list[i]);
        }
        return model;
      }
    }


    for(i=0;i<locomotor_list.size();i++)
    {
      if(locomotor_list[i].partNumber == partNumber)
      {
        if(locomotor)
        {
          model.locomotor = locomotor_list[i];
          locomotor = 0;
          return model;
        }
        else
        {
          cout<< "WARNING: CANNOT HAVE MORE THAN 1 LOCOMOTOR\n";
          return model;
        }
      }
    }


    for(i=0;i<battery_list.size();i++)
    {
      if(battery_list[i].partNumber == partNumber)
      {
        if(model.battery.size()>=(stoi(model.torso.batteryCompartments)))
        {
          cout<<"WARNING: YOU CAN'T HAVE MORE BATTERIES THAN YOUR TORSO ALLOWS\n";
        }
        else
        {
          model.battery.push_back(battery_list[i]);
        }
        return model;
      }
    }


}
