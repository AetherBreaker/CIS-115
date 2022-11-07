// file2.cpp
// Example of opening a file at its declaration

#include<iostream>
#include<fstream>


using namespace std;

int main()
{
	ofstream dataFile("names.dat", ios::out);

	return 0;
}
