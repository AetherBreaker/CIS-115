// file3.cpp
// Example of testing for open file errors

#include<iostream>
#include<fstream>


using namespace std;

int main()
{
	fstream dataFile("names.dat", ios::in | ios::out);

	if(!dataFile)
	{
		cout << "Error opening File..." << endl;
	}
	return 0;
}
