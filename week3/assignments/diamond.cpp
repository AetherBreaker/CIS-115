#include <iostream>

using namespace std;

int rows;
float halfway;

int main() {
    cout << "Enter a number between 3 and 15: " << endl;
    cin >> rows;
    while (rows < 3 || rows > 15) {
        if (rows < 3) {
            cout << "Please only input a number greater than or equal to 3:" << endl;
            cin >> rows;
        }
        if (rows > 15) {
            cout << "Please only input a number less than or equal to 15:" << endl;
            cin >> rows;
        }
    }
    halfway = rows / 2.0;

    for (
        int x = 1, linelen = 1;
        x < (rows + 1) && x < 16;
        (x != halfway) ? ((x < halfway) ? (x++, linelen++) : (x++, linelen--)) : (x++, linelen = linelen)
        )
    {
        for (
            int padding = 0;
            padding < (int(halfway) + 1 - linelen);
            padding++
            ) {
            cout << " ";
        }
        for (
            int y = 0;
            y < linelen;
            y++
            ) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}