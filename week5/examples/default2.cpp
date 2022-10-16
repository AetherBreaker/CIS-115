// Default2.cpp
// Using default arguments.
// (with a prototype)

#include<iostream>

using namespace std;

void foo(int times = 1);


int main()
{
    foo(2);
    foo(6);
    foo();
    
    return 0;
}

// note: the default value is given the 
// first time it is declared (or defined).

void foo(int times)         
{
    cout << "times = " << times << endl;
}
