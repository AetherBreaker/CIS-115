// dynamic3.cpp
// if there is not enough memory to allocate, 
// the new operator returns the address 0, or NULL.
// NULL is a named constant, defined in iostream.

#include <iostream>


using namespace std;

int main(int argc, char *argv[])
{
    int *iPtr;
    iPtr = new int;
     
    if(iPtr == NULL)
       cout << "Error!"  << endl;
    else
       cout << iPtr << endl;
        
   return 0;
}
