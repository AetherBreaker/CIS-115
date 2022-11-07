// file5.cpp
// Example of writing to a file.

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream dataFile("names.txt", ios::out);

	if(dataFile.fail())
	{
		cout << "Error opening File..." << endl;
	}

	cout << "File opened successfully" << endl;
	dataFile << "Smith" << endl;
//	cout << "Smith Record Written" << endl;
	dataFile << "Jones" << endl;
//	cout << "Jones Record Written" << endl;
	dataFile << "Johnson" << endl;
//	cout << "Johnson Record Written" << endl;
	dataFile << "Cunningham" << endl;
//	cout << "Cunningham Record Written" << endl;

	dataFile.close();
    
	return 0;
}
