//pointer2.cpp  -  Example using Pointer Indirection

#include<iostream>

using namespace std;

int main()
{

	int x = 25;
	int *ptr;

	ptr = &x;									//store the address of x in ptr

	cout << "Here is the value of x, printed twice..." << endl;

	cout << "Displaying x directly: " << x << endl;

	cout << "Now, display the value of x indirectly, through *ptr: " << *ptr << endl << endl;;

	*ptr += 100;								//assign 100 to x, via indirection

	cout << "Here are the values of x again (after adding 100)..." << endl;
	
	cout << "Displaying the new value of x directly: " << x << endl;

	cout << "Now, displaying the new value of x indirectly, through *ptr: " << *ptr << endl;


	return 0;
}
