#include "std_lib_facilities.h"
#include "robot_part.h"
#include <FL/Fl_Multiline_Output.H>
#include <FL/Fl_Window.H>
#include <FL/FL_Text_Display.H>
const int xxx = 640;
const int yyy = 480;

void print_part(int classNumber, int index,  Fl_Text_Buffer *buff)
{

    if(classNumber == 1)
    {
        buff->insert(50,"     Part Number:\n");
        buff->insert(100,"     Weight:\n");
        buff->insert(150,"     Cost:\n");
        cout<< "    " << head_list[index].name << ":\n";
        cout<< "      Part Number: " << head_list[index].partNumber << "\n";
        cout<< "      Weight: " << head_list[index].weight << "\n";
        cout<< "      Cost: " << head_list[index].cost << "\n";
        cout<< "      Description: " << head_list[index].description << "\n";
        cout<< endl;
        cout<< endl;

    }
    else if(classNumber ==2)
    {

        cout<< "    " << torso_list[index].name << ":\n";
        cout<< "      Part Number: " << torso_list[index].partNumber << "\n";
        cout<< "      Weight: " << torso_list[index].weight << "\n";
        cout<< "      Cost: " << torso_list[index].cost << "\n";
        cout<< "      Battery Compartments: " << torso_list[index].batteryCompartments << "\n";
        cout<< "      Description: " << torso_list[index].description << "\n";
        cout<< endl;
        cout<< endl;
        index++;

    }
    else if(classNumber ==3)
    {

        cout<< "    " << arm_list[index].name << ":\n";
        cout<< "      Part Number: " << arm_list[index].partNumber << "\n";
        cout<< "      Weight: " << arm_list[index].weight << "\n";
        cout<< "      Cost: " << arm_list[index].cost << "\n";
        cout<< "      Description: " << arm_list[index].description << "\n";
        cout<< endl;
        cout<< endl;


    }
    else if(classNumber ==4)
    {
        Locomotor l = locomotor_list[index];
        cout<< "    " << locomotor_list[index].name << ":\n";
        cout<< "      Part Number: " << locomotor_list[index].partNumber << "\n";
        cout<< "      Weight: " << locomotor_list[index].weight << "\n";
        cout<< "      Cost: " << locomotor_list[index].cost << "\n";
        cout<< "      Max Speed: "<< locomotor_list[index].maxSpeed << "\n";
        cout<< "      Description: " << locomotor_list[index].description << "\n";
        cout<< endl;
        cout<< endl;

    }
    else if(classNumber ==5)
    {
          Battery b = battery_list[index];
          cout<< "    " << b.name << ":\n";
          cout<< "      Part Number: " << b.partNumber << "\n";
          cout<< "      Weight: " << b.weight << "\n";
          cout<< "      Cost: " << b.cost << "\n";
          cout<< "      Energy: " << b.energy << "\n";
          cout<< "      Max Power: " << b.maxPower << "\n";
          cout<< "      Description: " << b.description << "\n";
          cout<< endl;
          cout<< endl;

    }
}

void print_part_all()
{

  Fl_Window *win = new Fl_Window(640, 480);
     Fl_Text_Buffer *buff = new Fl_Text_Buffer();
     Fl_Text_Display *disp = new Fl_Text_Display(20, 20, 640-40, 480-40, "Display");
     disp->buffer(buff);
     win->resizable(*disp);
     win->show();



  int i = 0;
  buff->text("HEAD PARTS:\n");

  for(i=0;i<head_list.size();i++)
  {
    print_part(1, i, buff);
  }
  buff->insert(200,"TORSO PARTS:\n");
  for(i=0;i<torso_list.size();i++)
  {
    print_part(2, i, buff);
  }
 buff->insert(400,"ARM PARTS:\n");
  for(i=0;i<arm_list.size();i++)
  {
    print_part(3, i, buff);
  }
  buff->insert(600,"LOCOMOTOR PARTS:\n");
  for(i=0;i<locomotor_list.size();i++)
  {
    print_part(4, i, buff);
  }

  buff->insert(800,"BATTERY PARTS:\n");
  for(i=0;i<battery_list.size();i++)
  {
    print_part(5, i, buff);
  }
}
