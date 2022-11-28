// Exception6.cpp
// A nested try block which will catch the exception that is thrown 
// before it reaches the outer try block, and another way to use 
// the throw  instruction that allows us to re-throw exceptions 
// inside a catch block: If you write throw; without any arguments in 
// an exception handler, the exception that was caught will be re-thrown.
// Comment out the throw statement and see what happens. 

#include <iostream>

using namespace std;


int main() {
  try 
  {
    try 
    {
      throw 123;
      cout << "leaving inner try block normally" << endl;
    }
    catch(int) {
      cout << "exception caught from inner try block" << endl;
      throw;
    }

    cout << "leaving outer try block normally" << endl;
  }
  catch(int) {
    cout << "exception caught in outer try block" << endl;
  }

  return 0;
}
