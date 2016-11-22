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
#include "view.h"
#include <FL/Fl_Button.H>
#include <FL/Fl_Multiline_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Input.H>


vector<Head> head_list;
vector<Torso> torso_list;
vector<Arm> arm_list;
vector<Battery> battery_list;
vector<Locomotor> locomotor_list;
vector<Model> model_list;
vector<Customer> customer_list;
vector<Salesman> salesman_list;
MyButton *button1, *button2, *button3, *button4, *button5, *button6;
TextBox *input1;
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
      button3 = new MyButton(0,0,0,0,"");
      button4 = new MyButton(0,0,0,0,"");
      button5 = new MyButton(0,0,0,0,"");
      button6 = new MyButton(0,0,0,0,"");

  }
  else if(path ==1)
  {
    button1->label("Create Order");
    button1->resize(x/2 - 80,(y/2)-120,200,25);
    button1->redraw();
    button1->show();
    button1->callback(but_create_order);
    button2->label("Create Customer");
    button2->resize(x/2 - 80,(y/2)-80,200,25);
    button2->redraw();
    button2->show();
    button2->callback(but_create_customer);
    button3->label("Create Salesman");
    button3->resize(x/2 - 80,(y/2)-40,200,25);
    button3->redraw();
    button3->show();
    button3->callback(but_create_salesman);
    button4->label("Create Robot Model");
    button4->resize(x/2 - 80,(y/2),200,25);
    button4->redraw();
    button4->show();
    button4->callback(but_create_robot_model);
    button5->label("Create Robot Component");
    button5->resize(x/2 - 80,(y/2)+40,200,25);
    button5->redraw();
    button5->show();
    button5->callback(but_create_roboto_component);
    button6->label("Quit to Main Menu");
    button6->resize(x/2 - 80,(y/2)+80,200,25);
    button6->redraw();
    button6->show();
    button6->callback(but_quit_to_main_menu);





  /*  cout << "\n\nmaking it heren\n\n";
    button1 = new MyButton(x/2 - 80,(y/2)-120,200,25,"Create Order");
    button1->callback(but_create_order);
    button2 = new MyButton(x/2 - 80,(y/2)-80,200,25,"Create Customer");
    button2->callback(but_create_customer);
    button3->label("changed the label")
    button3->resize(x/2 - 80,(y/2),200,25); //redraw needed
    button3->redraw();

    button3->callback(but_create_salesman);
    button4 = new MyButton(x/2 - 80,(y/2),200,25,"Create Robot Model");
    button4->callback(but_create_robot_model);
    button5 = new MyButton(x/2 - 80,(y/2)+40,200,25,"Create Robot Component");
    button5->callback(but_create_roboto_component);
    button6 = new MyButton(x/2 - 80,(y/2)+80,200,25,"Quit to Main Menu");
    button6->callback(but_quit_to_main_menu);
*/

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
    /*cout << endl;
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
    cout << endl;*/
  }
  else if(path ==3)
  {
    /*cout<<"Your data has been saved." << endl;*/
  }
  else if(path ==4)
  {
    /*cout<<"Thank you, and have a nice day!" << endl;*/
    exit(0);
  }
  else if(path==5)
  {
    button1->label("Create");
    button1->resize(x/2 - 20,(y/2)-20,100,25);
    button1->redraw();
    button1->show();
    button1->callback(but_create);
    button2->label("Quit");
    button2->resize(x/2 - 20,(y/2)+20,100,25);
    button2->redraw();
    button2->show();
    button2->callback(but_quit);
    button3->hide();
    button4->hide();
    button5->hide();
    button6->hide();

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
  string text;
  const char *s;




  if(model_list.size()>0 && salesman_list.size()>0 && customer_list.size()>0)
  {
    //cout<< "Here is a catalog of our latest Robot Models:\n\n";
    printModels();
    s = "Which model would you like to buy?";
    text = string{fl_input(s, 0)};
    model = stod(text);
    s = "How many would you like to purchase?";
    text = string{fl_input(s, 0)};
    amount = stod(text);
    if(amount<=0)
    {
      //cout<<"Sorry we couldn't do business with you! Have a good day!"<< endl;
      return;
    }
    else
    {
      //cout<< "Congratulations you just bought " <<amount << " robot(s) of model type " << model_list[model-1].model_name<< " for $" << stoi(model_list[model-1].price) * amount<<endl;
    }




  }
  else
  {
    //cout<<"I'm sorry but our boss needs to create a customer, salesman, and robot model for this function to operate.\n";
  }
}
void twelve()
{
  string text;
  Customer customer;
  const char *s = "what is the name of the customer?";
  text = string{fl_input(s, 0)};

  cout<<"you just created "<<text<<endl;
  customer.name = text;

  customer_list.push_back(customer);

}
void thirteen()
{
  string text;
  Salesman salesman;
  const char *s = "what is the name of the salesman?";
  text = string{fl_input(s, 0)};

  cout<<"you just created "<<text<<endl;
  salesman.name = text;

  salesman_list.push_back(salesman);
}
void fourteen()
{
  string input;
  const char *s;

  Model model;

  print_part_all();
  s = "Select the parts you want by typing in the partnumber followed by enter. \nOnce you are ready to create the model press Q and then enter.";
  do
  {
    input = string{fl_input(s, 0)};

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

  s = "Model Name?";
  model.model_name = string{fl_input(s, 0)};
  s = "Model Number?";
  model.model_number = string{fl_input(s, 0)};

  s = "Price?";
  model.price = string{fl_input(s, 0)};

  /*if(stod(model.price) >= model.total_cost)
  {
    cout<< "You just created " << model.model_name << " with a possible gain of $" << (stod(model.price) - model.total_cost)<< endl;
  }
  else
  {
    cout<< "You just created " << model.model_name << " with a possible loss of $" << (stod(model.price) - model.total_cost)<< endl;
  }*/
  model_list.push_back(model);
  model.print_my_parts();

}
void fifteen()
{

  string text;
  double input = -1;
  Customer customer;
  const char *s = "Which Robot Component would you like to CREATE?\n(1)  Head\n(2)  Torso\n(3)  Arm\n(4)  Locomotor\n(5)  Battery\n";
  text = string{fl_input(s, 0)};
  input = std::stoi(text);

  switch((int)input)
  {
    case 1:
    {
       Head head;

       s = "Name?";
       head.name = string{fl_input(s, 0)};
       s = "Part Number?";
       head.partNumber = string{fl_input(s, 0)};
       s = "Weight?";
       head.weight = string{fl_input(s, 0)};
       s = "Cost?";
       head.cost = string{fl_input(s, 0)};

       head_list.push_back(head);
       //cout <<"\n    YOU JUST CREATED:\n";
       //cout<< "      "<< head.name << "   " << head.partNumber<< endl;
    }
      break;
    case 2:
    {


      Torso torso;

      s = "Name?";
      torso.name = string{fl_input(s, 0)};
      s = "Part Number?";
      torso.partNumber = string{fl_input(s, 0)};
      s = "Weight?";
      torso.weight = string{fl_input(s, 0)};
      s = "Cost?";
      torso.cost = string{fl_input(s, 0)};
      s = "Battery Compartments?";
      torso.batteryCompartments = string{fl_input(s, 0)};

      torso_list.push_back(torso);
      //cout <<"\n    YOU JUST CREATED:\n";
      //cout<< "      "<< torso.name << "   " << torso.partNumber<< endl;
    }
      break;
    case 3:
    {
      Arm arm;

      s = "Name?";
      arm.name = string{fl_input(s, 0)};
      s = "Part Number?";
      arm.partNumber = string{fl_input(s, 0)};
      s = "Weight?";
      arm.weight = string{fl_input(s, 0)};
      s = "Cost?";
      arm.cost = string{fl_input(s, 0)};

      arm_list.push_back(arm);
      //cout <<"\n    YOU JUST CREATED:\n";
      //cout<< "      "<< arm.name << "   " << arm.partNumber<< endl;
    }
      break;
    case 4:
    {
      Locomotor locomotor;
      s = "Name?";
      locomotor.name = string{fl_input(s, 0)};
      s = "Part Number?";
      locomotor.partNumber = string{fl_input(s, 0)};
      s = "Weight?";
      locomotor.weight = string{fl_input(s, 0)};
      s = "Cost?";
      locomotor.cost = string{fl_input(s, 0)};
      s = "Max Speed?";
      locomotor.maxSpeed = string{fl_input(s, 0)};

      locomotor_list.push_back(locomotor);
      //cout <<"\n    YOU JUST CREATED:\n";
      //cout<< "      "<< locomotor.name << "   " << locomotor.partNumber<< endl;
    }
      break;
    case 5:
    {
      Battery battery;
      s = "Name?";
      battery.name = string{fl_input(s, 0)};
      s = "Part Number?";
      battery.partNumber = string{fl_input(s, 0)};
      s = "Weight?";
      battery.weight = string{fl_input(s, 0)};
      s = "Cost?";
      battery.cost = string{fl_input(s, 0)};
      s = "Energy?";
      battery.energy = string{fl_input(s, 0)};
      s = "Max Power?";
      battery.maxPower = string{fl_input(s, 0)};

      battery_list.push_back(battery);
    //  cout <<"\n    YOU JUST CREATED:\n";
    //  cout<< "      "<< battery.name << "   " << battery.partNumber<< endl;
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
