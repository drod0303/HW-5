#include "std_lib_facilities.h"
//#include "media.h"
#include "store.h"



int main()
{

  int input = -1;



  cout << "\n\n MAIN MENU" << endl;
  cout << "------------------" << endl;

  while(true)
  {
  print_directions();
  cout << "input: ";
  cin >> input;
  test_input(input); //makes sure that the input the user gives is a valid instruction for the software
  execute(input);
}


}
