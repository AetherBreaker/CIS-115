// dynamic1.cpp
// Variables can be created and destroyed
// while a program was executing.

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int var = 0;

  
  int *intPtr = new int;                        // keyword new
                                                          // allocate enough memory for a new int
                                                          // variable being created.  
  
  *intPtr = 25;
  
  cout << "Pointer Value: " << *intPtr << endl << endl;
  
  cout << "Enter an Integer Value: ";
  
  
  cin >> var;
  
  *intPtr = *intPtr + var; 
  
  cout << "intPtr + " << var  << " = "  << *intPtr << endl;
  
  return 0;
}
