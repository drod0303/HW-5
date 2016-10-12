#include "std_lib_facilities.h"
#include "robot_part.h"


void print_part_set(int classNumber)
{

    int index = 0;

    cout << endl;

    if(classNumber == 1)
    {
      while(index<head_list.size())
      {
        cout<< "    " << head_list[index].name << ":\n"
        cout<< "      Part Number: " << head_list[index].partNumber << "\n";
        cout<< "      Weight: " << head_list[index].weight << "\n";
        cout<< "      Cost: " << head_list[index].cost << "\n";
        cout<< "      Description: " << head_list[index].description << "\n";
        index++;
      }
    }
    else if(classNumber ==2)
    {
      while(index<torso_list.size())
      {

        index++;
      }
    }
    else if(classNumber ==3)
    {
      while(index<arm_list.size())
      {

        index++;
      }
    }
    else if(classNumber ==4)
    {
      while(index<locomotor_list.size())
      {

        index++;
      }
    }
    else if(classNumber ==5)
    {
        while(index<battery_list.size())
        {

        }
    }
}

void print_part_all()
{
  int i = 0;
  cout<< "HEAD PARTS:\n"
  while(i<head_list.size())
}
