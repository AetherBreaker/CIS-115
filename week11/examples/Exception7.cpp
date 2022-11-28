// Exception7.cpp
// The C++ standard library provides a set of exception classes, 
// which is used by the C++ library functions.

#include <iostream>
#include <stdexcept>

using namespace std;

void foo() {
  if(0)
    throw invalid_argument("I am an invalid_argument error");
  else
    throw out_of_range("I am an out_of_range error");
}

int main() {
  try 
  {
    foo();
  }
 
  catch(const logic_error &error) 
  {
    cout << "exception caught: " << error.what() << endl;
  }

  return 0;
}
