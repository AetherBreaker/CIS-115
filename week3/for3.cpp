// Program for3.cpp
// Example using a for-statementm, by specific steps.

// for-statement consists of 3 parts...
// 1-The Loop Variable
// 2-The Terminating Condition
// 3-The Expression that Updates the Loop Variable

#include <iostream>

using namespace std;

int step = 1; // default

int main()
{
    cout << "Enter the step count: ";
    cin >> step;

    cout << "INCREMENT: for 0 to 100, step " << step << "...." << endl;

    for (int x = 0; x < 100; x = x + step)
    {
        cout << x << ' ';
    }
    cout << endl;
    cout << "= = = = = = = = = = = =" << endl;

    cout << "DECREMENT: for 100 to 0, step " << step << "...." << endl;

    for (int x = 100; x > 0; x = x - step)
    {
        cout << x << ' ';
    }

    cin.get();

    return 0;
}
