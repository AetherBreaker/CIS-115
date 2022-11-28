// exception1.cpp
// Functions commonly signal error conditions by returning 
// a predetermined value.  This function returns a zero 
// when division by zero is attempted.  This is unreliable
// because zero can be a valid result of a division operation.


#include<iostream>

using namespace std;

float divide(int numerator, int denominator)
{
	if (denominator == 0)
	{
		cout << "ERROR: Cannot divide by zero." << endl;
		return 0;
	}
	else
		return float(numerator) / denominator;
}

int main()
{
	int x = 5;
	int y = 0;

// there is no way of the program knowing here if there
// was an error in the function.  

	cout << "5 / 0 equals " << divide(5, 0) << endl;

	return 0;
}