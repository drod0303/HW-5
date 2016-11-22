#include "std_lib_facilities.h"
#include "robot_model.h"
#include "robot_part.h"
#include <FL/Fl_Window.H>
#include <FL/FL_Text_Display.H>
#include <fl_ask.H>

void printModels()
{
  int i = 0;
  for(i = 0;i<model_list.size();i++)
  {
    //cout<<"Model #"<<i+1;
    model_list[i].print_my_parts();
  }
}

double Model::totalCost()
{
  double headCost =0;
  double armCost =0;
  double batteryCost =0;
  double locomotorCost =0;
  double torsoCost =0;
  double totalCost = 0;
  int i;


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
  //static int j = 0;
  //string num = to_string(j);
  Fl_Window *win = new Fl_Window(640, 480);
     Fl_Text_Buffer *buff = new Fl_Text_Buffer();
     Fl_Text_Display *disp = new Fl_Text_Display(20, 20, 640-40, 480-40, "Available Models");
     disp->buffer(buff);
     win->resizable(*disp);
     win->show();

  //disp->insert("Model #");
  //disp->insert(num.c_str());
  //disp->insert("  ");
  disp->insert(model_name.c_str());
  disp->insert("\n");
  //j++;

  for(i=0;i<head.size();i++)
  {
    disp->insert("    Head- ");
    disp->insert(head[i].name.c_str());
    disp->insert("    Part Number- ");
    disp->insert(head[i].partNumber.c_str());
    disp->insert("    Cost- ");
    disp->insert(head[i].cost.c_str());
    disp->insert("\n");

  }
  for(i=0;i<torso.size();i++)
  {
    disp->insert("    Torso- ");
    disp->insert(torso[i].name.c_str());
    disp->insert("    Part Number- ");
    disp->insert(torso[i].partNumber.c_str());
    disp->insert("    Cost- ");
    disp->insert(torso[i].cost.c_str());
    disp->insert("\n");

  }
  for(i=0;i<locomotor.size();i++)
  {
    disp->insert("    Locomotor- ");
    disp->insert(locomotor[i].name.c_str());
    disp->insert("    Part Number- ");
    disp->insert(locomotor[i].partNumber.c_str());
    disp->insert("    Cost- ");
    disp->insert(locomotor[i].cost.c_str());
    disp->insert("\n");
  }
  for(i=0;i<battery.size();i++)
  {
    disp->insert("    Battery- ");
    disp->insert(battery[i].name.c_str());
    disp->insert("    Part Number- ");
    disp->insert(battery[i].partNumber.c_str());
    disp->insert("    Cost- ");
    disp->insert(battery[i].cost.c_str());
    disp->insert("\n");

  }
  for(i=0;i<arm.size();i++)
  {
    disp->insert("    Arm- ");
    disp->insert(arm[i].name.c_str());
    disp->insert("    Part Number- ");
    disp->insert(arm[i].partNumber.c_str());
    disp->insert("    Cost- ");
    disp->insert(arm[i].cost.c_str());
    disp->insert("\n");

  }
  disp->insert("  Total Price = ");
  disp->insert(price.c_str());
  disp->insert("\n");
}

Model findAndAdd(string partNumber, Model model)
{

  int i = 0;
  const char *s;
  static int head = 1;
  static int torso = 1;
  static int locomotor = 1;

  for(i=0;i<head_list.size();i++)
  {
    if(head_list[i].partNumber == partNumber)
    {
      if(model.head.size() >= 1)
      {
        s = "WARNING: YOU ARE NOT ALLOWED TO HAVE MORE THAN 1 HEAD\n";
        fl_alert(s,0);
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
          s = "WARNING: YOU ARE NOT ALLOWED TO HAVE MORE THAN 1 TORSO\n";
          fl_alert(s,0);
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
          s = "WARNING: YOU ARE NOT ALLOWED TO HAVE MORE THAN 2 ARMS\n";
          fl_alert(s,0);
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
          s = "WARNING: YOU ARE NOT ALLOWED TO HAVE MORE THAN 1 LOCOMOTOR\n";
          fl_alert(s,0);
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
          s = "WARNING: YOU CAN'T HAVE MORE BATTERIES THAN YOUR TORSO ALLOWS\n";
          fl_alert(s,0);
        }
        else
        {
          model.battery.push_back(battery_list[i]);
        }
        return model;
      }
    }


}
