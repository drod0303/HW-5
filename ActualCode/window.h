#ifndef __STORE_H
#define __STORE_H 2016


#include "std_lib_facilities.h"
#include "robot_part.h"
#include "robot_part.cpp"
#include "robot_model.h"
#include "robot_model.cpp"
#include "people.h"
#include "people.cpp"
#include "tools.h"
#include <FL/Fl_Button.H>

vector<Head> head_list;
vector<Torso> torso_list;
vector<Arm> arm_list;
vector<Battery> battery_list;
vector<Locomotor> locomotor_list;
vector<Model> model_list;
vector<Customer> customer_list;
vector<Salesman> salesman_list;
MyButton *button1, *button2, *button3, *button4, *button5, *button6;
const int x = 640;
const int y = 480;


void print_directions(double path);
void execute(double path);




void print_directions(double path)
{

  if(path == 0)
  {
      button1 = new MyButton(x/2 - 20,(y/2)-20,100,25,"Create");
      button1->callback(but_create);
      button2 = new MyButton(x/2 - 20,(y/2)+20,100,25,"Quit");
      button2->callback(but_quit);

  }
  else if(path ==1)
  {
    button1 = new MyButton(x/2 - 80,(y/2)-120,200,25,"Create Order");
    button1->callback(but_create_order);
    button2 = new MyButton(x/2 - 80,(y/2)-80,200,25,"Create Customer");
    button2->callback(but_create_customer);
    button3 = new MyButton(x/2 - 80,(y/2)-40,200,25,"Create Salesman");
    button3->callback(but_create_salesman);
    button4 = new MyButton(x/2 - 80,(y/2),200,25,"Create Robot Model");
    button4->callback(but_create_robot_model);
    button5 = new MyButton(x/2 - 80,(y/2)+40,200,25,"Create Robot Component");
    button5->callback(but_create_roboto_component);
    button6 = new MyButton(x/2 - 80,(y/2)+80,200,25,"Quit to Main Menu");
    button6->callback(but_quit_to_main_menu);

    /*
    cout << endl;
    cout<< "Create" << endl;
    cout << "--------" << endl;
    cout << "1.1  (O)rder" << endl;
    cout << "1.2  (C)ustomer" << endl;
    cout << "1.3  (S)ales Associate" << endl;
    cout << "1.4  Robot (M)odel" << endl;
    cout << "1.5  Robot (C)omponent" << endl;
    cout << "1.6  (Q)uit to Main Menu" << endl;
    cin>>path;
    execute(path);
    cout << endl;*/
  }
  else if(path == 2)
  {
    cout << endl;
    cout<< "Report" << endl;
    cout << "--------" << endl;
    cout << "2.1  (O)rders" << endl;
    cout << "2.2  (C)ustomers" << endl;
    cout << "2.3  (S)ales Associates" << endl;
    cout << "2.4  Robot (M)odels" << endl;
    cout << "2.5  Robot (P)arts" << endl;
    cout << "2.6  (Q)uit to Main Menu" << endl;
    cin>>path;
    execute(path);
    cout << endl;
  }
  else if(path ==3)
  {
    cout<<"Your data has been saved." << endl;
  }
  else if(path ==4)
  {
    cout<<"Thank you, and have a nice day!" << endl;
    exit(0);
  }

}

void test_input(double input)
{

  if ((input==1.0) || (input==2.0) || (input==3.0) || (input==4.0)){} //makes sure that the input is a valid key number

  else
  {
    cout << "Sorry that input is invalid. Taking you back to main menus." << endl;
  }

}

void eleven()
{
  int model = -1;
  int amount = -1;
  if(model_list.size()>0 && salesman_list.size()>0 && customer_list.size()>0)
  {
    cout<< "Here is a catalog of our latest Robot Models:\n\n";
    printModels();
    cout<< "Which model would you like to buy?\n";
    cin >> model;
    cout<< "How many would you like to purchase?\n";
    cin >> amount;
    if(amount<=0)
    {
      cout<<"Sorry we couldn't do business with you! Have a good day!"<< endl;
      return;
    }
    else
    {
      cout<< "Congratulations you just bought " <<amount << " robot(s) of model type " << model_list[model-1].model_name<< " for $" << stoi(model_list[model-1].price) * amount<<endl;
    }




  }
  else
  {
    cout<<"I'm sorry but our boss needs to create a customer, salesman, and robot model for this function to operate.\n";
  }
}
void twelve()
{
  Customer customer;
  cout<< "What is the name of this customer?\n";
  cin >> customer.name;
  cout << "You just created a new customer named: " << customer.name<< endl;
  customer_list.push_back(customer);
}
void thirteen()
{
  Salesman salesman;
  cout<<"What is the name of this new salesman?\n";
  cin >> salesman.name;
  cout<< "You just created a new salesman named: " << salesman.name << endl;
  salesman_list.push_back(salesman);
}
void fourteen()
{
  Model model;
  string input;
  cout<< "\n----------SELECT WHICH PARTS YOU WOULD LIKE TO USE.\n----------REMEMBER YOU CAN ONLY HAVE A MAX OF 2 ARMS AND AS MANY BATTERIES AS THE TORSO CAN HOLD.\n";
  print_part_all();
  cout<< "\nSelect the parts you want by typing in the partnumber followed by enter. \nOnce you are ready to create the model press Q and then enter.\n";
  do
  {
    cin>>input;

    if(input == "Q" || input == "q")
    {
      break;
    }
    else
    {
      model = findAndAdd(input, model);
    }
  }while(!input.empty());
  model.total_cost = model.totalCost();

  cout<<"\nModel Name: ";
  cin >> model.model_name;
  cout<<"\nModel Number: ";
  cin >> model.model_number;

  cout<<"\nThe price to create " << model.model_name << " is  $" << model.total_cost<< endl;
  cout<<" What would you like to price it at?\n";
  cin>> model.price;
  if(stod(model.price) >= model.total_cost)
  {
    cout<< "You just created " << model.model_name << " with a possible gain of $" << (stod(model.price) - model.total_cost)<< endl;
  }
  else
  {
    cout<< "You just created " << model.model_name << " with a possible loss of $" << (stod(model.price) - model.total_cost)<< endl;
  }
  model_list.push_back(model);
  model.print_my_parts();

}
void fifteen()
{
  double input = -1;
  cout<<"\n Which robot component would you like to CREATE?";
  cout<<"\n(1)  Head\n(2)  Torso\n(3)  Arm\n(4)  Locomotor\n(5)  Battery\n";
  cin >> input;
  if(input<1 || input > 5)
  {
    cout << "Sorry that input is invalid. Taking you back to main menus." << endl;
    print_directions(0);
  }
  switch((int)input)
  {
    case 1:
    {
       Head head;
       cout<<"\nName: ";
       cin >> head.name;
       cout<<"\nPart Number: ";
       cin >> head.partNumber;
       cout<<"\nWeight: ";
       cin >> head.weight;
       cout<<"\nCost: ";
       cin >> head.cost;
       cout << endl;
       head_list.push_back(head);
       cout <<"\n    YOU JUST CREATED:\n";
       cout<< "      "<< head.name << "   " << head.partNumber<< endl;
    }
      break;
    case 2:
    {
      Torso torso;
      cout<<"\nName: ";
      cin >> torso.name;
      cout<<"\nPart Number: ";
      cin >> torso.partNumber;
      cout<<"\nWeight: ";
      cin >> torso.weight;
      cout<<"\nCost: ";
      cin >> torso.cost;
      cout<<"\nBattery Compartments: ";
      cin >> torso.batteryCompartments;
      cout << endl;
      torso_list.push_back(torso);
      cout <<"\n    YOU JUST CREATED:\n";
      cout<< "      "<< torso.name << "   " << torso.partNumber<< endl;
    }
      break;
    case 3:
    {
      Arm arm;
      cout<<"\nName: ";
      cin >> arm.name;
      cout<<"\nPart Number: ";
      cin >> arm.partNumber;
      cout<<"\nWeight: ";
      cin >> arm.weight;
      cout<<"\nCost: ";
      cin >> arm.cost;
      cout << endl;
      arm_list.push_back(arm);
      cout <<"\n    YOU JUST CREATED:\n";
      cout<< "      "<< arm.name << "   " << arm.partNumber<< endl;
    }
      break;
    case 4:
    {
      Locomotor locomotor;
      cout<<"\nName: ";
      cin >> locomotor.name;
      cout<<"\nPart Number: ";
      cin >> locomotor.partNumber;
      cout<<"\nWeight: ";
      cin >> locomotor.weight;
      cout<<"\nCost: ";
      cin >> locomotor.cost;
      cout << "\nMax Speed: ";
      cin >> locomotor.maxSpeed;
      cout << endl;
      locomotor_list.push_back(locomotor);
      cout <<"\n    YOU JUST CREATED:\n";
      cout<< "      "<< locomotor.name << "   " << locomotor.partNumber<< endl;
    }
      break;
    case 5:
    {
      Battery battery;
      cout<<"\nName: ";
      cin >> battery.name;
      cout<<"\nPart Number: ";
      cin >> battery.partNumber;
      cout<<"\nWeight: ";
      cin >> battery.weight;
      cout<<"\nCost: ";
      cin >> battery.cost;
      cout << "\nEnergy: ";
      cin >> battery.energy;
      cout << "\nMax Power: ";
      cin >> battery.maxPower;
      cout << endl;
      battery_list.push_back(battery);
      cout <<"\n    YOU JUST CREATED:\n";
      cout<< "      "<< battery.name << "   " << battery.partNumber<< endl;
    }
      break;
  }


}
void twentyOne()
{

}
void twentyTwo()
{

}
void twentyThree()
{

}
void twentyFour()
{

}
void twentyFive()
{

}

void execute(double path)
{
  int switchValue = path*10;

  switch(switchValue)
  {
    case 11: eleven();
      break;
    case 12: twelve();
      break;
    case 13: thirteen();
      break;
    case 14: fourteen();
      break;
    case 15: fifteen();
      break;
    case 16:
      break;
    case 21:
      break;
    case 22:
      break;
    case 23:
      break;
    case 24:
      break;
    case 25:
      break;
    case 26:
      break;
  }
  print_directions(0);
}











 #endif
