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

  //headCost = stod(head[0].cost);
  //locomotorCost = stod(locomotor[0].cost);
  //torsoCost = stod(torso[0].cost);
  for(i=0;i<head.size();i++)
  {
    headCost = headCost + stod(head[i].cost);
  }
  for(i=0;i<locomotor.size();i++)
  {
    locomotorCost = locomotorCost + stod(locomotor[i].cost);
  }
  for(i=0;i<torso.size();i++)
  {
    torsoCost = torsoCost + stod(torso[i].cost);
  }
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

void Model::print_my_parts()
{
  int i = 0;
  cout<<"\n"<<model_name<<":\n";
  for(i=0;i<head.size();i++)
  {
    cout<<"     Head- " << setw(2)<<head[i].name<<"   Part Number- " <<setw(2) <<  head[i].partNumber << setw(4)<<"   Cost- " << setw(2) << head[i].cost<< endl;
  }
  for(i=0;i<torso.size();i++)
  {
    cout<<"     Torso- " << setw(2)<<torso[i].name<<"   Part Number- " <<setw(2) <<  torso[i].partNumber <<setw(4)<< "   Cost- " << setw(2) << torso[i].cost<< endl;
  }
  for(i=0;i<locomotor.size();i++)
  {
    cout<<"     Locomotor- " << setw(2)<<locomotor[i].name<<"   Part Number- " <<setw(2) <<  locomotor[i].partNumber << setw(4)<<"   Cost- " << setw(2) << locomotor[i].cost<< endl;
  }
  for(i=0;i<battery.size();i++)
  {
    cout<<"     Battery- " << setw(2)<<battery[i].name<<"   Part Number- " <<setw(2) <<  battery[i].partNumber << setw(4)<<"   Cost- " << setw(2) << battery[i].cost<< endl;
  }
  for(i=0;i<arm.size();i++)
  {
    cout<<"     Arm- " << setw(2)<<arm[i].name<<"   Part Number- " <<setw(2) <<  arm[i].partNumber <<setw(4)<< "   Cost- " << setw(2) << arm[i].cost<< endl;
  }
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
      if(model.head.size() >= 1)
      {
        cout<< "WARNING: YOU ARE NOT ALLOWED TO HAVE MORE THAN 1 HEAD\n";
      }
      else
      {
        model.head.push_back(head_list[i]);
      }
      return model;
    }
  }


    for(i=0;i<torso_list.size();i++)
    {
      if(torso_list[i].partNumber == partNumber)
      {
        if(model.torso.size() >= 1)
        {
          cout<< "WARNING: YOU ARE NOT ALLOWED TO HAVE MORE THAN 1 TORSO\n";
        }
        else
        {
          model.torso.push_back(torso_list[i]);
        }
        return model;
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
        if(model.locomotor.size() >= 1)
        {
          cout<< "WARNING: YOU ARE NOT ALLOWED TO HAVE MORE THAN 1 LOCOMOTOR\n";
        }
        else
        {
          model.locomotor.push_back(locomotor_list[i]);
        }
        return model;
      }
    }


    for(i=0;i<battery_list.size();i++)
    {
      if(battery_list[i].partNumber == partNumber)
      {
        if(model.battery.size()>=(stoi(model.torso[0].batteryCompartments)))
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
