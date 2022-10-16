// Default3.cpp
// Using multiple default arguments.
// (with a prototype)

#include<iostream>

using namespace std;

void foo(int t1 = 1, int t2 = 3);


int main()
{
    foo(2, 4);
    foo(6, 7);
    foo(1);
    foo();
    
    return 0;
}

void foo(int t1, int t2)         
{
    cout << "t1 = " << t1 << endl;
    cout << "t2 = " << t2 << endl;    
}
