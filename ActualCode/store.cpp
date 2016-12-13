#include "std_lib_facilities.h"
#include "store.h"



int main()
{

  double input = -1;



  cout << "\n\n                  MAIN MENU" << endl;
  cout << "             ------------------" << endl;
  cout<< "  ****NO SPACES ALLOWED WHEN INPUTING DATA****" << endl;
  cout<<"      Ex: John Dowe.....should be John_Dowe" << endl;
  print_directions(0);
  while(true)
  {
  cout << "input: ";
  cin >> input;
  test_input(input);
  print_directions(input);

  }


}
