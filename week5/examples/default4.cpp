// Default4cpp
// Using some default arguments.
// (with a prototype)

#include<iostream>

using namespace std;

//default arguments can only be the rightmost ones.
//cannot skip arguments (eg, (int t1, int t2 = 3, int t3;);

void foo(int t1, int t2 = 3);


int main()
{
    foo(2, 4);
    foo(6, 7);
    foo(1);
    
    return 0;
}

void foo(int t1, int t2)         
{
    cout << "t1 = " << t1 << endl;
    cout << "t2 = " << t2 << endl;    
}
