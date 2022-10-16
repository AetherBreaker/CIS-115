// This program demonstrates that an array element is passed
// to a function like any other variable.

#include <iostream>

using namespace std;

void showValue(int num);	// Function prototype

int p = 0;      

int main()
{
	int collection[8] = {5, 10, 15, 20, 25, 30, 35, 40};

	showValue(collection[3]);
	showValue(collection[1]);
   	showValue(collection[0]);	

	p = 7;
    
   	showValue(collection[p]);       		
	return 0;
}

//**********************************************
// Definition of function showValue.           *
// This function accepts an integer argument.  *
// The value of the argument is displayed.     *
//**********************************************

void showValue(int num)
{
	cout << num << " ";
}

