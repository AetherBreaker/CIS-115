// exception2.cpop
// a simple example of exception handling, using catch and throw.
// when a throw statement is executed, control is passed to another 
// part of the program known as an exception handler.  

#include <iostream>
using namespace std;

int main () {
  try                                  // code here calls functions or objects member 
                                        // functions that might throw an exception.
  {
    throw 20;                     // this is a throw point                  
  }
  catch (int e)                   // this is an exception handler
                                        // code here handles the exception
  {
    cout << "Exception #: " << e <<  " Occurred " << endl;
  }
  return 0;
}
