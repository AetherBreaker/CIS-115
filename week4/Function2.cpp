//Function2 - This program has three Functions
// main, first, and second

#include<iostream>

using namespace std;

void first()
{
	cout << "I am now in the function first." << endl;
}

void second()
{
	cout << "I am now in the function second." << endl;
}

int main()
{
	cout << "I starting in function main." << endl;
	first();
	second();
	cout << "Back in function main again." << endl;
	
	return 0;
}
