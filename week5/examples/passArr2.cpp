// This program demonstrates an array being passed to a function.

#include <iostream>

using namespace std;

void showValues(int []);	// Function prototype

int main()
{
	int collection[8] = {5, 10, 15, 20, 25, 30, 35, 40};

	showValues(collection);
	
	cout << endl;
	showValues(collection);
	return 0;
}

//*************************************************
// Definition of function showValue.              *
// This function accepts an array of 8 integers.  *
// as its argument. The contents of the array     * 
// is displayed.                                  *
//*************************************************

void showValues(int nums[])
{
	for (int index = 0; index < 8; index++)
	{
		cout << nums[index] << " ";
		nums[index]++;
	}
}

