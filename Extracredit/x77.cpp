// Write a program that prints out the letters 'a'..'z' and the digits '0'..'9' and their
// integer values. Do the same for other printable characters. Do the same again
// but use hexadecimal notation. Name your program “x77.cpp”

// Jacob Ogden

#include <iostream>
#include <iomanip>
#include <ios>

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::setfill;
using std::hex;

int main() {
    // print out the letters 'a'..'z' and the digits '0'..'9' and their integer values
    cout << "Printing out the letters 'a'..'z' and the digits '0'..'9' and their integer values:" << endl;
    for (int i = 97; i < 123; i++) {
        cout << setw(3) << setfill(' ') << i << " = " << static_cast<char>(i) << endl;
    }
    for (int i = 48; i < 58; i++) {
        cout << setw(3) << setfill(' ') << i << " = " << static_cast<char>(i) << endl;
    }
    cout << endl;

    // print out other printable characters
    cout << "Printing out other printable characters:" << endl;
    for (int i = 33; i < 127; i++) {
        cout << setw(3) << setfill(' ') << i << " = " << static_cast<char>(i) << endl;
    }
    cout << endl;

    // print out the letters 'a'..'z' and the digits '0'..'9' and their integer values in hexadecimal
    cout << "Printing out the letters 'a'..'z' and the digits '0'..'9' and their integer values in hexadecimal:" << endl;
    for (int i = 97; i < 123; i++) {
        cout << setw(3) << setfill(' ') << hex << i << " = " << static_cast<char>(i) << endl;
    }
    for (int i = 48; i < 58; i++) {
        cout << setw(3) << setfill(' ') << hex << i << " = " << static_cast<char>(i) << endl;
    }
    cout << endl;

    // print out other printable characters in hexadecimal
    cout << "Printing out other printable characters in hexadecimal:" << endl;
    for (int i = 33; i < 127; i++) {
        cout << setw(3) << setfill(' ') << hex << i << " = " << static_cast<char>(i) << endl;
    }
    cout << endl;

    return 0;
}