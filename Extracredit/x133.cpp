// Write a program like ‘‘Hello, world!’’ that takes a name as a command-line
// argument and writes ‘‘Hello, name !’’. Modify this program to take any number
// of names as arguments and to say hello to each. Name your program
// “x133.cpp”

// Jacob Ogden

#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        cout << "Hello, " << argv[i] << "!" << endl;
    }

    return 0;
}
