//pointer6.cpp -  Using subscript notation with a pointer in arrays
//				With an example of redirecting a pointer

#include<iostream>

using namespace std;

int main()
{
	int a[] = {1, 2, 3, 4, 5, 6};
	int b[] = {10, 20, 30, 40, 50, 60};

	int count;

	int *ptr;

	ptr = a;

	cout << "Displaying array a with ptr pointing to a " << endl;
	for (count = 0; count < 6; count++)
	{
		cout << *ptr << "   ";
		*ptr++;
	}	

	cout << endl;

	ptr = b;
	cout << "Displaying array b with ptr now pointing to b " << endl;
	for (count = 0; count < 6; count++)
	{
		cout << *ptr << "   ";
		*ptr++;
	}	

	cout << endl;


	return 0;
}
