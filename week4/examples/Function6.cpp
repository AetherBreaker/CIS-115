
//Function6 - This program demonstrates a 
// function with three parameters.

#include<iostream>

using namespace std;


void showSum(int num1, int num2, int num3)
{
	cout << "The Sum is " << (num1 + num2 + num3) << endl;
}

int main()
{
	int value1;
	int value2;
	int value3;

	cout << "Enter three integers and I will display their sum " << endl;

	cin >> value1 >> value2 >> value3;

	showSum(value1, value2, value3);

	
	cout << "Back in function main again." << endl;


  	return 0; 
}
