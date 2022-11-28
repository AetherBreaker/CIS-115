// Write a program that reads 2 text files whose names are given as commandline arguments
// and writes them one after another to cout. Name your program “x134.cpp”

// Jacob Ogden

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;

int main(int argc, char *argv[]) {
    ifstream file1(argv[1]);
    ifstream file2(argv[2]);

    string line;

    while (getline(file1, line)) {
        cout << line << endl;
    }
    while (getline(file2, line)) {
        cout << line << endl;
    }

    return 0;
}
