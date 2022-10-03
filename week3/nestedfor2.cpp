// Program nestedfor2.cpp
// Example using nexting for statements to display a square.

// for-statement consists of 3 parts...
// 1-The Loop Variable
// 2-The Terminating Condition
// 3-The Expression that Updates the Loop Variable

#include <iostream>

using namespace std;

int size = 1;

int main()
{
    cout << "Enter the size of the square: ";
    cin >> size;

    for (int x = 0; x < size; x++) // outer loop
    {
        for (int y = 0; y < size; y++) // inner loop
        {
            cout << 'X';
        }
        cout << endl;
    }

    cin.get();

    return 0;
}
