#ifndef __STORE_H
#define __STORE_H 2016


#include "std_lib_facilities.h"
//#include "media.h"

//vector<Media> publication_list;
//Media media;

void print_directions(int path)
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
    cout << "1  (O)rder" << endl;
    cout << "2  (C)ustomer" << endl;
    cout << "3  (S)ales Associate" << endl;
    cout << "4  Robot (M)odel" << endl;
    cout << "5  Robot (C)omponent" << endl;
    cout << "6  (Q)uit to Main Menu" << endl;
    cin>>path;
    cout<< "\n\n" << path <<"\n\n";
    cout << endl;
  }
  else if(path == 2)
  {
    cout << endl;
    cout<< "Report" << endl;
    cout << "--------" << endl;
    cout << "1  (O)rders" << endl;
    cout << "2  (C)ustomers" << endl;
    cout << "3  (S)ales Associates" << endl;
    cout << "4  Robot (M)odels" << endl;
    cout << "5  Robot (P)arts" << endl;
    cout << "6  (Q)uit to Main Menu" << endl;
    cin>>path;
    cout<< "\n\n" << path <<"\n\n";
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

void test_input(int input)
{

  if ((input==1) || (input==2) || (input==3) || (input==4)){} //makes sure that the input is a valid key number

  else
  {
    cout <<"That is an invalid operation\n"<< endl;
    exit(0);
  }

}

void execute(int input)
{
    print_directions(input);
}


 #endif
