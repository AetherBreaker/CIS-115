// floatingPt.cpp
// Type float can represent only the first 6 or 7 in the number.
// Changing the 8th digit will have no effect on the value.   

#include<iostream>

using namespace std;

int main()
{
    float a = 2.34123567;
    float b = a + 0.00000005;
    
    cout << "a = " << a << endl;
    cout << "b = " << a << endl;
    cout << "b - a = " << b - a << endl;
    
    return 0;
}
