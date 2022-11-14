// dynamic2.cpp
// Arrays can be created and destroyed
// while a program was executing.

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int *intPtr;
  
  int dim;
  
  cout << "Enter array dimension: ";
  
  cin  >> dim;
  
  intPtr = new int[dim];  
  
  for(int count = 0; count < dim; count++)
    intPtr[count] = count;

  for(int count = 0; count < dim; count++)
    cout << intPtr[count] << ' ';
    
  delete intPtr;
  
  return 0;
}
