//modulo.cpp
//Example of modulo arithmetic and the modulo operator.

#include<iostream>

float r;

using namespace std;

int main()
{
    
    cout << "modulo arithmetic only concerns itself with the remainder..." << endl;
    
    r = 22 % 7;
    
    cout << "22 % 7 = " << r << endl;
    
    r = 6 % 2;
    
    cout << "6 % 2 = " << r << endl;
    
    r = 9 % 5;
    
    cout << "9 % 5 = " << r << endl;
    
    cout << "Why would this be useful?" << endl;
    
    return 0;
}
