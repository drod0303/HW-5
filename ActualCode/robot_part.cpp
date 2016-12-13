#include "std_lib_facilities.h"
#include "robot_part.h"
#include <FL/Fl_Multiline_Output.H>
#include <FL/Fl_Window.H>
#include <FL/FL_Text_Display.H>
const int xxx = 640;
const int yyy = 480;

void print_part(int classNumber, int index,  Fl_Text_Display *disp)
{

    if(classNumber == 1)
    {
        disp->insert("     ");
        disp->insert(head_list[index].name.c_str());
        disp->insert("\n");
        disp->insert("      Part Number: ");
        disp->insert(head_list[index].partNumber.c_str());
        disp->insert("\n");
        disp->insert("      Weight: ");
        disp->insert( head_list[index].weight.c_str());
        disp->insert("\n");
        disp->insert("      Cost: ");
        disp->insert(head_list[index].cost.c_str());
        disp->insert("\n");


    }
    else if(classNumber ==2)
    {
      disp->insert("     ");
      disp->insert(torso_list[index].name.c_str());
      disp->insert("\n");
       disp->insert("       Part Number: ");
       disp->insert(torso_list[index].partNumber.c_str());
       disp->insert("\n");
       disp->insert("       Weight: ");
       disp->insert(torso_list[index].weight.c_str());
       disp->insert("\n");
       disp->insert("       Cost: ");
       disp->insert(torso_list[index].cost.c_str());
       disp->insert("\n");
       disp->insert("       Battery Compartments: ");
       disp->insert(torso_list[index].batteryCompartments.c_str());
       disp->insert("\n");
        //index++;

    }
    else if(classNumber ==3)
    {
      disp->insert("     ");
      disp->insert(arm_list[index].name.c_str());
      disp->insert("\n");
      disp->insert("      Part Number: ");
      disp->insert(arm_list[index].partNumber.c_str());
      disp->insert("\n");
      disp->insert("      Weight: ");
      disp->insert(arm_list[index].weight.c_str());
      disp->insert("\n");
      disp->insert("      Cost: ");
      disp->insert(arm_list[index].cost.c_str());
      disp->insert("\n");



    }
    else if(classNumber ==4)
    {

        Locomotor l = locomotor_list[index];


      disp->insert("     ");
      disp->insert(locomotor_list[index].name.c_str());
      disp->insert("\n");
       disp->insert("       Part Number: ");
       disp->insert(locomotor_list[index].partNumber.c_str());
       disp->insert("\n");
       disp->insert("       Weight: ");
       disp->insert(locomotor_list[index].weight.c_str());
       disp->insert("\n");
       disp->insert("       Cost: ");
       disp->insert(locomotor_list[index].cost.c_str());
       disp->insert("\n");
       disp->insert("       Max Speed: ");
       disp->insert(locomotor_list[index].maxSpeed.c_str());
       disp->insert("\n");


    }
    else if(classNumber ==5)
    {
              Battery b = battery_list[index];

      disp->insert("     ");
      disp->insert(battery_list[index].name.c_str());
      disp->insert("\n");
      disp->insert("      Part Number: ");
      disp->insert(b.partNumber.c_str());
      disp->insert("\n");
      disp->insert("      Weight: ");
      disp->insert(b.weight.c_str());
      disp->insert("\n");
      disp->insert("      Cost: ");
      disp->insert(b.cost.c_str());
      disp->insert("\n");
      disp->insert("      Energy: ");
      disp->insert(b.energy.c_str());
      disp->insert("\n");
      disp->insert("      Max Power: ");
      disp->insert(b.maxPower.c_str());
      disp->insert("\n");


    }
}

void print_part_all()
{

  Fl_Window *win = new Fl_Window(640, 480);
     Fl_Text_Buffer *buff = new Fl_Text_Buffer();
     Fl_Text_Display *disp = new Fl_Text_Display(20, 20, 640-40, 480-40, "Available Parts");
     disp->buffer(buff);
     win->resizable(*disp);
     win->show();



  int i = 0;
  //buff->text("HEAD PARTS:\n");
  disp->insert("HEAD PARTS:\n");

  for(i=0;i<head_list.size();i++)
  {
    print_part(1, i, disp);
  }
  disp->insert("TORSO PARTS:\n");
  for(i=0;i<torso_list.size();i++)
  {
    print_part(2, i, disp);
  }
 disp->insert("ARM PARTS:\n");
  for(i=0;i<arm_list.size();i++)
  {
    print_part(3, i, disp);
  }
  disp->insert("LOCOMOTOR PARTS:\n");
  for(i=0;i<locomotor_list.size();i++)
  {
    print_part(4, i, disp);
  }

  disp->insert("BATTERY PARTS:\n");
  for(i=0;i<battery_list.size();i++)
  {
    print_part(5, i, disp);
  }
  
}
