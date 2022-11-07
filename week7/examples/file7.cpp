// file7.cpp
// Example of the use of a structure variable to store a record
// of information to a file.

#include<iostream>
#include<fstream>
#include<cctype>			// for the toupper function

using namespace std;

// Declare a structure
struct Info
{
	char name[51];
	int empID;
};

int main()
{

	//The following line opens the stream.  ios::binary is used because
	//the struct has mixed data types.

	fstream peopleFile("people.dat", ios::out | ios::binary);

	Info people;
	char again;

	if (!peopleFile)
	{
		cout << "Error opening File..." << endl;
		return 0;
	}

	do
	{
		cout << "Enter the following information about a person..." << endl;
		cout << "Name: ";
		cin.getline(people.name,51);

		cout << "EmpID: ";
		cin >> people.empID;

		cin.ignore();				//skip over remaining newline...

		// The following line actually writes out the record to the file.
		// The first argument is the address of the person variable.  
		// The (char *) cast operator is necessary because write expects
		// the first argument to be a pointer to a char.
		// The second argument is the sizeof operation so the function knows
		// how many bytes to write.  

		peopleFile.write((char *)&people, sizeof(people));

		cout << "Do you wish to enter another record (Y/N)? ";

		cin >> again;

		cin.ignore();

	} while (toupper(again) == 'Y');

	peopleFile.close();
	
	
	return 0;
}

