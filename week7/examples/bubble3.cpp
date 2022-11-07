//bubble3.cpp Example of Bubble Sort - Descending Order
//cout of array after each pass to visualize the sort.

#include<iostream>
#include<iomanip>						// for setw

using namespace std;

int a[] = {6, 4, 88, 10, 98, 3, 12, 8, 68, 45};

int i, hold, x;

void printarray()
{
		for ( i = 0; i < 10; i++)
		cout << setw(4) << a[i];
		cout << endl;
}

int main()
{
	cout << "Items in Original Order" << endl;

	printarray();

	cout << endl;

	for( int pass = 0; pass < 9; pass++)			//each pass through
	{
		
		for( i = 0; i < 9; i++)
		{

			if( a[i] < a[i + 1])					//one pass through the array
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}
		}
		cout << "Pass #: " << (pass + 1) << " -> ";
		printarray();

}

	cout << endl;

	cout << "Data Items in DESCENDING Order" << endl;

	printarray();

	return 0;

}
