//Overload1.cpp - an example using Function Overloading

#include<iostream>

using namespace std;

int split(int);
double split(double);

int x = 8;							
double y = 6.3;

int main()
{

	cout << "Half of 8 is: " << split(x) << endl;			// the compiler knows what function
													// to use in these calls by the 
	cout << "Half of 6.3 is: " << split(y) << endl;			// type (and/or number) of the parameter in the call. 
	

	return 0;
}

int split(int a)
{
	return(a / 2);
}

double split(double a)
{
	return(a / 2);
}
