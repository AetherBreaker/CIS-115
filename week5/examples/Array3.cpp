//Array3 - Implicit Array Initialization
#include<iostream>

using namespace std;

int main()
{

	int x[] = {2, 3, 4, 5, 6};
	int ctr;

	for(ctr = 0; ctr < 5; ctr++)
	{
		cout << "Array " << ctr << "   " << x[ctr]  << endl;
	}

	cout << "Size of Array x is " << sizeof(x) << " bytes" << endl;
	
	return 0;
}
