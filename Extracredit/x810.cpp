// Define an array of strings in which the strings contain the names of the
// months. Cout those strings. Pass the array to a function that couts those
// strings. Name your program “x810.cpp

// Jacob Ogden

#include <iostream>
#include <string>
#include <array>

using std::cout;
using std::endl;
using std::string;
using std::array;

void printMonths(array<string, 12> months) {
    for (string month : months) {
        cout << month << endl;
    }
}

int main() {
    array<string, 12> months = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    for (int i = 0; i < 12; i++) {
        cout << months[i] << endl;
    }

    printMonths(months);

    return 0;
}