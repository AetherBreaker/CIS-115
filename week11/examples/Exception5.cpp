// Exception5.cpp 
// This program will not crash. 
// The exception thrown is going to be caught within main(), 
// display the message contained in the catch block, 
// and then normally continue execution after the catch block. 
// Try commenting out the throw instruction and look what changes 
// when the program is run. 

#include <iostream>

using namespace std;

void foo() 
{
  throw 123;
}

int main() 
{
  try 
  {
      foo();
  }
  catch(int number) 
 {
    cout << "exception caught: " << number << endl;
  }
  
  return 0;
}
