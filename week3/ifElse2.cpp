// Program ifElse2.cpp
// Example using nested if/else statements

#include <iostream>
using namespace std;

int x;

int main()
{
    cout << "Enter a Number between 1 and 3: ";
    cin >> x;

    if (x == 3)
        cout << "You entered a 3" << endl;
    else if (x == 2)
        cout << "You entered a 2" << endl;
    else if (x == 1)
        cout << "You entered a 1" << endl;
    else
        cout << "Wrong Number... Try Again!" << endl; // always include a default if none
                                                      // of the above statements are true

    return 0;
}
