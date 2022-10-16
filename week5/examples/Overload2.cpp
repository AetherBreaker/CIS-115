//Overload1.cpp - an example using Function Overloading
// (different number of parameters)

#include<iostream>

using namespace std;

int exp(int, int);
int exp(int, int, int);

int a = 8;		
int b = 3;
int c = 6;


int main()
{

	cout << "8 * 3 = " << exp(a, b) << endl;			// the compiler knows what function
													// to use in these calls by the 
	cout << "8 * 3 * 6 = " << exp(a, b, c) << endl;			// type (and/or number) of the parameter in the call. 
	

	return 0;
}

int exp(int x, int y)
{
	return(x * y);
}

int exp(int x, int y, int z)
{
	return(x * y * z);
}
