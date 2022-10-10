// if1.cpp
// Example using the if statement

#include <iostream>

using namespace std;

int x;

int main()
{
    cout << "Enter a Number: ";
    cin >> x;

    if ((x % 2) == 0)                      // note there is no semicolon at the end of this line.
        cout << x << " is even. " << endl; // as this is one continuous statment.
                                           // put a semicolon at the end of the if statment,
                                           // compile, and run it.   What happens?

    if ((x % 2) != 0)                     // an if statement will run the next line, or
    {                                     // lines enclosed in brackets, if the statement
        cout << x << " is odd. " << endl; // is true.   I recommend using the enclosed brackets.
    }

    return 0;
}
