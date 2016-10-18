#include "std_lib_facilities.h"
#include "robot_model.h"

int findAndCreate(string partNumber)
{
  int i = 0;
  int found = 0;
  if(!found)
  {
    for(i=0;i<head_list.size();i++)
    {
      if(head_list[i].partNumber == partNumber)
      {
        cout<<"found it!!!\n";
        return 0;
      }
    }
  }
  if(!found)
  {
    for(i=0;i<torso_list.size();i++)
    {

    }
  }
  if(!found)
  {
    for(i=0;i<arm_list.size();i++)
    {

    }
  }
  if(!found)
  {
    for(i=0;i<battery_list.size();i++)
    {

    }
  }
  if(!found)
  {
    for(i=0;i<locomotor_list.size();i++)
    {

    }
  }

}
