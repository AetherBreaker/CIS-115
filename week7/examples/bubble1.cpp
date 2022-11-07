//bubble1.cpp Example of Bubble Sort 

#include<iostream>
#include<iomanip>						// for setw

using namespace std;

int main()
{
	int a[] = {4, 6, 89, 8, 12, 10, 3, 68, 45, 37};

	int i, hold;

	cout << "Items in Original Order" << endl;

	for ( i = 0; i < 10; i++)
		cout << setw(4) << a[i];

	cout << endl;

	for( int pass = 0; pass < 9; pass++)			//each pass through
		for( i = 0; i < 9; i++)

			if( a[i] > a[i + 1])					//one pass through the array
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}

	cout << "Data Items in Ascending Order" << endl;

	for ( i = 0; i < 10; i++)
		cout << setw(4) << a[i];

	cout << endl;

	return 0;

}
