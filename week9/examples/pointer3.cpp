//pointer3.cpp -  Using subscript notation with a pointer in arrays

#include<iostream>

using namespace std;

int main()
{
	int a[] = {1, 2, 3, 4, 5, 6};

	int *ptr;

	int count;

	ptr = a;
	
	cout << "Displaying Array Contents Directly... " << endl;

	for (count = 0; count < 5; count++)
		cout << a[count] << "   ";

	cout << endl;
	
	cout << "Displaying Array Contents Indirectly, using a Pointer... " << endl;

	for (count = 0; count < 5; count++)
	{
		cout << *ptr << "   ";
		*ptr++;
	}	
	

	return 0;
}





