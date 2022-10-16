//Array1.cpp - Array Initialization
#include<iostream>

using namespace std;

int main()
{

	int x[10];						// declares a 10 element int array named x.
	int ctr;

	for(ctr = 0; ctr < 10; ctr++)
	{
		x[ctr] = ctr * 2;
	}


	for(ctr = 0; ctr < 20; ctr++)		// what happens when we do this?  					
	{
		cout << "Array " << ctr << "   " << x[ctr]  << endl;
	}

	
	return 0;
}
