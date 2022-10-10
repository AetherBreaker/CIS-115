//Function5 - This program demonstrates a 
// function with a parameter.

#include<iostream>

using namespace std;

void displayValue(int num)
{
	cout << "The Value is " << num << "." << endl;
}

int main()
{
	cout << "I passing 5 to displayValue." << endl;
	displayValue(5);
	cout << "Back in function main again." << endl;

	return 0;
}
