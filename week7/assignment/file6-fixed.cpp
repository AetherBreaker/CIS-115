// file6.cpp
// Example of reading from a file.

#include<iostream>
#include<fstream>
#include<string>


using namespace std;

int main()
{
    string input;
    fstream dataFile("names.txt", ios::in);

    if (dataFile.fail())
    {
        cout << "Error opening File..." << endl;
        return 0;
    }

    for (dataFile >> input; !dataFile.eof(); dataFile >> input)
    {
        cout << input << endl;
    }

    // eofbit flag isnt raised until the eof is actually requested via dataFile >> input;
    // so we need request the eof bit to get the eof flag raised

    // basically fstream.eof() doesnt look ahead to see if the next read will be eof

    dataFile.close();


    return 0;
}