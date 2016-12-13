#ifndef __CUSTOMER_H
#define __CUSTOMER_H 2016

#include "std_lib_facilities.h"



class Customer
{
public:
  Customer(){};
  string name;

};

class Salesman
{
public:
  Salesman(){};
  string name;
};

extern vector<Customer> customer_list;
extern vector<Salesman> salesman_list;

 #endif
