//pointer1.cpp - Pointer Example #1

#include<iostream>

using namespace std;

int main()
{
	int *intPointer;						//declare pointer of type int

	int number;

	intPointer = &number;					//intPointer points to number

	cout << "Please enter a number: " << endl;

	cin >> number;

	cout << "The number is: " << number << endl;					// Direct Access

	cout << "Using the pointer: " << *intPointer << endl;				// Indirect Access

	cout << "The address of intPointer is: " << &intPointer << endl;		// Location of the pointer

	cout << "The address of number is: " << &number << endl;			// Location of the variable
	
	cout << "The contents of intPointer is: " << intPointer << endl;	// Contents

	return 0;
}

