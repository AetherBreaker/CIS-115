// This program has three functions: main, First, and Second.
// An example of using Function Prototypes.

#include <iostream>

using namespace std;

// Function Prototypes
void first();
void second();

int main()
{
	cout << "I am starting in function main." << endl;
	first();	// Call function first
	second();	// Call function second
	cout << "Back in function main again. " << endl;
	

	return 0;
}

//*************************************
// Definition of function first.      *
// This function displays a message.  *
//*************************************

void first()
{
	cout << "I am now inside the function first. " << endl;
}

//*************************************
// Definition of function second.     *
// This function displays a message.  *
//*************************************

void second()
{
	cout << "I am now inside the function second. " << endl;
}
