// Write a loop that prints out the values 4, 5, 9, 17, 12 without using an array or
// a vector. Name your program “x713.cpp”

// Jacob Ogden

#include <iostream>

using std::cout;
using std::endl;

int main() {
    for (int i = 4; i < 13; i++) {
        if (i == 4) {
            cout << i << endl;
        }
        else if (i == 5) {
            cout << i << endl;
        }
        else if (i == 9) {
            cout << i << endl;
        }
        else if (i == 10) {
            cout << i + 7 << endl;
        }
        else if (i == 12) {
            cout << i << endl;
        }
    }

    return 0;
}