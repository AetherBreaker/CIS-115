// Write a function to invert a two-dimensional array. Hint: §7.4.2.
// Name your program “x139.cpp”

// Jacob Ogden

#include <iostream>
#include <array>

using std::cout;
using std::endl;
using std::array;

void invertArray(array<array<int, 3>, 3> &arr) {
    array<array<int, 3>, 3> temp = arr;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = temp[j][i];
        }
    }
}

int main() {
    array<array<int, 3>, 3> arr = {{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }};

    invertArray(arr);

    for (array<int, 3> i : arr) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}