// What is the size of the array str in the following example: char str[] = "a short
// string"; What is the length of the string "a short string"? Prove your answer
// with code. Name your program “x8.cpp”

// Jacob Ogden

#include <iostream>

using std::cout;
using std::endl;

int main() {
    char str[] = "a short string";

    // The size of the array is 15 because it includes the null terminator
    cout << "The size of the array is " << sizeof(str) << endl;

    int length = 0;

    // loop until the null terminator is found incrementing the length variable each time
    for (int i = 0; str[i] != NULL; i++) {
        length++;
    }

    // The length of the string is 14
    cout << "The length of the string is " << length << endl;

    return 0;
}