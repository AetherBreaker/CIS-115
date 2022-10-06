//Function3 - This program has three Functions
// main, deep, and deeper.
// In this example, main calls a function, which in turn, 
// calls another function.

#include<iostream>

// Function Prototypes...

void deep();
void deeper();

using namespace std;



int main()
{
	cout << "I starting in function main." << endl;
	deep();
	cout << "Back in function main again." << endl;
	
	
	return 0;
}

void deep()
{
	cout << "I am now in function deep." << endl;
	deeper();
	cout << "I am now back in function deep." << endl;
}

void deeper()
{
	cout << "I am now in function deeper." << endl;
}

