// dynamic4.cpp
// When finished with dynamically allocated memory, it should be 
// released for future use.  
// The delete operator is used to free memory that was allocated with new.  

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int *iPtr;
  
  iPtr = new int (1);                  // dynamically instantiate a new int and set it to 1.
  
  cout << *iPtr << endl;
  
  *iPtr = 25;
  
  cout << *iPtr << endl;
  
  delete iPtr;
  
  cout << *iPtr << endl;          // dangling pointer - undefined behavoir
                                              // A dangling pointer is a pointer that points to invalid data 
                                             // or to data which is not valid anymore,
  return 0;
}
