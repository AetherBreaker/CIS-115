// const.cpp	Const example
#include <iostream>

using namespace std;

int const SALES_TAX = 3;					// must be initialized with a value at initialization

int main() 
{
//	SALES_TAX = 6;							// a const value cannot be changed,
	cout << SALES_TAX << endl;				// uncomment line #10 and recompile to see.
	
	return 0;
}