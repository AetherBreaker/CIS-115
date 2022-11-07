// file4.cpp
// Another Example of testing for open file errors

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream dataFile("names.dat", ios::in | ios::out);

	if(dataFile.fail())
	{
		cout << "Error opening File..." << endl;
	}
	
    return 0;
}
