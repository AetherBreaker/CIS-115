// file1.cpp
// Opens a file...

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char fileName[8];
	fstream dataFile;  					// Declare a file stream object

	cout << "Enter the file name you wish to open or create: " << endl;

	cin  >> fileName;

	dataFile.open(fileName,ios::out);  		//note file mode flag
	
	// the file is created in the same folder as this source code is in.
	// (assuming you have the proper permissions)

	return 0;
}
