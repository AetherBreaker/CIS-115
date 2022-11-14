//pointer4.cpp -  Traversing an array with a Pointer

#include<iostream>

using namespace std;

int main()
{
	int a[] = {1, 2, 3, 4, 5, 6};

	int *ptr;

	int count;

	ptr = a;								// note - "&" here, for arrays, the name  
										// is the address of array a.  

	for (count = 0; count < 6; count++)
	{
		cout << *ptr << "   ";
		*ptr++;
	}	

	cout << endl;


	for (count = 0; count < 6; count++)
	{
		cout << *ptr << "   ";
		*ptr--;							// why is the weird number displayed here?   
	}	
	
	return 0;
}
