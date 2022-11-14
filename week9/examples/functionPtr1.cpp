// functionPtr.cpp 
// an example of a pointer to a function without the right arrow operator...
// (see RightArrow.cpp)

#include<iostream>

using namespace std;

void someFunction()
{
    cout << "In someFunction!" << endl;
}

void (*pf)();                                   // pointer to a void function - no parameters (awkward!!)

int main()
{
    cout << "Direct call to someFunction..." << endl;
    
    someFunction();                     // direct call to someFunction()
    
    pf = someFunction;               // assign someFunction to pointer pf   
    
    cout << endl << "Indirect call to someFunction without using the -> operator..." << endl;
    
    pf();                                       // call someFunction indirectly with pointer pf.

    return 0;
}
