// CompoundIfs.cpp
// Examples using compound if statements

#include <iostream>

using namespace std;

int main()
{
    if ((true) && (true))
        cout << "This (true) && (true) statement is true!" << endl;

    if ((false) && (false))
        cout << "This line will never run!" << endl;

    if ((false) && (true))
        cout << "This line will never run!" << endl;

    if ((true) && (false))                           // this statment will take a bit longer
        cout << "This line will never run!" << endl; // to evaluate than the one above.   Why?

    if ((true) || (true))
        cout << "This (true) || (true) statement is true!" << endl;

    if ((false) || (false))
        cout << "This line will never run!" << endl;

    if ((false) || (true))
        cout << "This (false) || (true) statement is true!" << endl;

    if ((true) || (false))
        cout << "This (true) || (false) statement is true!" << endl;

    if (((true) || (false)) && ((true) && (true))) // you can have multiple compound statements
        cout << "This compound statement: (((true) || (false)) && ((true) && (true))) is true!" << endl;

    return 0;
}
