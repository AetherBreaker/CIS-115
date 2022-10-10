//params.cpp - example of using the standard main parameters.
// argc is the number of arguments passed
// argv[] is an array of char pointers (more on this later).
// in short, argv[] contains the actual arguments


#include<iostream>

using namespace std;

int main(int argc, char *argv[])			
{									
	int y;							

	cout << "Number of Arguments: " << argc << endl;
	cout << endl;

	cout << "Program Name: " << argv[0] << endl;

	cout << endl;

	cout << "Parameters Passed..." << endl;

	for(int x = 1 ; x < argc ; x++)
		cout << argv[x] << endl;

	cout << endl;

	return 0;
}
