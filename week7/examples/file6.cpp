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

	if(dataFile.fail())
	{
		cout << "Error opening File..." << endl;
		return 0;
	}

	while(!dataFile.eof())
	{
		dataFile >> input;
		cout << input << endl;
	}

	dataFile.close();
	

	return 0;
}
