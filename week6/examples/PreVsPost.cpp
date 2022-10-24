// preVsPost.cpp
#include <iostream>
using namespace std;
 
int main()
{
    int x = 10, a;
    int z = 10, b;
 
    a = ++x;
    cout << "Pre Increment Operation..." << endl;
 
    // Value of a will change
    cout << "a = " << a << endl;
 
    // Value of x change before execution of a=++x;
    cout << "x = " << x << endl;
    
    cout << endl;
    
    b= z++;
    cout << "Post Increment Operation..." << endl;
    
    // Value of a will change
    cout << "b = " << b << endl;
    
    // Value of x change before execution of a=++x;
    cout << "z = " << z << endl; 
    return 0;
}