//Array2 - Array Initialization at Declaration
#include<iostream>

using namespace std;

int main()
{

	int x[10] = {2, 3, 4, 5};				// partial initialization
	int ctr;

	for(ctr = 0; ctr < 10; ctr++)
	{
		cout << "Array " << ctr << "   " << x[ctr]  << endl;
	}

	return 0;
}
