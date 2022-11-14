// pointerTrap.cpp
// can you spot the problem here???

#include <iostream>

using namespace std;

int *pPointer = NULL;


void SomeFunction()
{
	int nNumber;

        nNumber = 25;    
        // make pPointer point to nNumber:
        pPointer = &nNumber;

        cout << "  Value of nNumber: " << nNumber   << endl;    
        cout << "  Indirectly accessing nNumber using *pPointer: "  << *pPointer << endl;
    
}

int main()
{
    cout << "  Value of *pPointer: " << *pPointer << endl;
    
    SomeFunction();                                                         // make pPointer point to something
    
    // what is wrong here?


    cout << "  Value of *pPointer: " << *pPointer << endl;
    
    return 0;
}
