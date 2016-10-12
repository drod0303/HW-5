#ifndef __STORE_H
#define __STORE_H 2016


#include "std_lib_facilities.h"

void execute(double path)
{
  int switchValue = path*10;

  switch(switchValue)
  {
    case 11:
      break;
    case 12:
      break;
    case 13:
      break;
    case 14:
      break;
    case 15:
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

}
void print_directions(double path)
{
  if(path == 0)
  {
    cout << endl;
    cout << "1  (C)reate" << endl;
    cout << "2  (R)eport" << endl;
    cout << "3  (S)ave" << endl;
    cout << "4  (Q)uit" << endl;
    cout << endl;
  }
  else if(path ==1)
  {
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
    cout << endl;
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
    cout <<"That is an invalid operation. Goodbye!\n"<< endl;
    exit(0);
  }

}






 #endif
