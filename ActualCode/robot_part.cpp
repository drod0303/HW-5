#include "std_lib_facilities.h"
#include "robot_part.h"


void print_part(int classNumber, int index)
{

    cout << endl;

    if(classNumber == 1)
    {

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
        cout<< "      Battery Compartments: " << torso_list[index].cost << "\n";
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
  int i = 0;
  cout<< "HEAD PARTS:\n";
  for(i=0;i<head_list.size();i++)
  {
    print_part(1, i);
  }

  cout<<"TORSO PARTS:\n";
  for(i=0;i<torso_list.size();i++)
  {
    print_part(2, i);
  }

  cout<<"ARM PARTS:\n";
  for(i=0;i<arm_list.size();i++)
  {
    print_part(3, i);
  }

  cout<<"LOCOMOTOR PARTS:\n";
  for(i=0;i<locomotor_list.size();i++)
  {
    print_part(4, i);
  }


  cout<<"BATTERY PARTS:\n";
  for(i=0;i<battery_list.size();i++)
  {
    print_part(5, i);
  }




}
