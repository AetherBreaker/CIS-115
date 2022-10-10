// Program ifElse1.cpp
// Example using the if/else statement

#include <iostream>
using namespace std;

int x;

int main()
{
    cout << "Enter a Number: ";
    cin >> x;

    if ((x % 2) == 0)
        cout << x << " is even. " << endl;
    else
        cout << x << " is odd. " << endl;

    return 0;
}
