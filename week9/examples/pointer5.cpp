// pointer5.cpp
// This program uses two functions that accept addresses of
// variables as arguments.

#include <iostream>

using namespace std;

// Function prototypes
void getNumber(int *);				//* is required in the prototype
void doubleValue(int *);			//to indicate that it is a pointer

int main()
{
	int number;

	getNumber(&number);	  // Pass address of number to getNumber
	doubleValue(&number); // and doubleValue.
	cout << "That value doubled is " << number << endl;

	return 0;
}

//***************************************************************
// Definition of getNumber. The parameter, input, is a pointer. *
// This function asks the user for a number. The value entered  *
// is stored in the variable pointed to by input.               *
//***************************************************************

void getNumber(int *input)
{
	cout << "Enter an integer number: ";
	cin >> *input;							//MUST use * here
}

//***************************************************************
// Definition of doubleValue. The parameter, val, is a pointer. *
// This function multiplies the variable pointed to by val by   *
// two.                                                         *
//***************************************************************

void doubleValue(int *val)
{
	*val *= 2;
}
