#include "std_lib_facilities.h"
//#include "media.h"
#include "store.h"



int main()
{

  double input = -1;



  cout << "\n\n MAIN MENU" << endl;
  cout << "------------------" << endl;
  print_directions(0);
  while(true)
  {
  cout << "input: ";
  cin >> input;
  test_input(input); //makes sure that the input the user gives is a valid instruction for the software
  print_directions(input);
//  cout << "\n\n"<< battery.energy << "\n\n";
  }


}
