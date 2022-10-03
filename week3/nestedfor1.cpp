// Program nestedfor1.cpp
// Example using nexting for statements

// for-statement consists of 3 parts...
// 1-The Loop Variable
// 2-The Terminating Condition
// 3-The Expression that Updates the Loop Variable

#include <iostream>

using namespace std;

int main()
{
    cout << "xxxxxxxxxxx" << endl;
    for (int x = 0; x < 5; x++) // outer loop
    {

        for (int y = 0; y < 10; y++) // inner loop
        {
            if ((y == 0) || (y == 9))
            {
                cout << 'x';
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "xxxxxxxxxxx" << endl;

    return 0;
}
