// level2.cpp
// another example of levels of indirection

#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
	int x = 5;
	int *ptr1 = &x;				// pointer to an int.	
	int **ptr2 = &ptr1;				// pointer to a pointer to an int.
	int ***ptr3 = &ptr2;			// pointer to a pointer to a pointer to an int.
	
	cout <<  x << endl;
	cout << *ptr1 << endl;
	cout << **ptr2 << endl;
	cout << ***ptr3 << endl;
	
	return 0;
	
}