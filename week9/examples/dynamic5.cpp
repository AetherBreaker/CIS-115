// memory5.cpp
// An example of not releasing dynamically allocated memory.
// CTL-ALT_DEL > Task Manager > Performance

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  float *iPtr;
  
  for(float x = 10000; x < 10000000; x++)
  {
    cout << x << endl;
    iPtr = new float[1000];
    if (iPtr == NULL)
       cout << x << " Error!" << endl;
       
  }
  
  return 0;
}
