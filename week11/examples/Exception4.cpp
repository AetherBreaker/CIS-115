// Exception4.cpp
// What will happen here?
// foo() will be called from within main(). 
// Then, an exception will be thrown by foo(), 
// travel upwards to the caller and possibly further.

#include <iostream>

using namespace std;

void foo() 
{
  throw 123;
}

int main() 
{
    foo();

    cout << "here " <<  endl;

  return 0;
}
