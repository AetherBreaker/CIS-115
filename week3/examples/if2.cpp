// if2.cpp
// Examples using the if statement

#include <iostream>

using namespace std;

int main()
{
    if (true)
        cout << "This statement is true!" << endl;

    if (false)
        cout << "This line will never run!" << endl;

    if (0)
        cout << "This statement equates to zero (false) and will never run!" << endl;

    if (1)
        cout << "This statement equates to non-zero (true) and will always run!" << endl;

    if (!1)
        cout << "This statement (!1, ! = not) equates to false and will never run! " << endl;

    if (!0)
        cout << "This statement (!0, ! = not) equates to true and will always run! " << endl;

    int x = 1;
    int y = 1;
    int z = 2;

    cout << endl
         << "x = 1, y = 1, z = 2" << endl;

    if (x == y)
        cout << "x == y is true! " << endl;

    if (y != z)
        cout << "x != z is true! " << endl;

    if (x <= y)
        cout << "x <= y is true! " << endl;

    if (x < z)
        cout << "x < z is true! " << endl;

    if (x = z) // This is a common error
        cout << "x = z is true! " << endl;

    if (x > z)
        cout << "x > z is false! " << endl;

    return 0;
}
