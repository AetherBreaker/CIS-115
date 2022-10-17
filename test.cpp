#include <iostream>

using namespace std;

int main()
{
    int product;

    for (
        int x = 1;
        x < 16;
        x += 2
        )
    {
        product *= x;
        cout << product << endl;
    }
    cout << product << endl;

    return 0
}
