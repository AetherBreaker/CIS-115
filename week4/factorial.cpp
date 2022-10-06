//Recurse.cpp  An Example of using Recursion 
//to calculate Factoirials.

#include<iostream>

using namespace std;

double fac2(double);

int x = 5;							

int main()
{

	cout <<  x << " Factorial is: " << fac2(x) << endl;
 
	return 0;
}

double fac2(double b)
{
	if (b > 1)
	{
		return b*fac2(b-1);
    }
	else
		return 1;

	cout << "after return" << b << endl;		
		
}
