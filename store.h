#ifndef __STORE_H
#define __STORE_H 2016


#include "std_lib_facilities.h"
//#include "media.h"

//vector<Media> publication_list;
//Media media;

void print_directions()
{

  cout << endl;
  cout << "1  (C)reate" << endl;
  cout << "2  (R)eport" << endl;
  cout << "3  (S)ave" << endl;
  cout << "4  (Q)uit" << endl;
  cout << endl;
}

void test_input(int input)
{

  if ((input==1) || (input==2) || (input==3) || (input==4) || (input=='C')|| (input=='R') || (input=='S') || (input=='Q')){} //makes sure that the input is a valid key number

  else
  {
    cout <<"That is an invalid operation\n"<< endl;
    exit(0);
  }

}

void execute(int input)
{

}


 #endif
