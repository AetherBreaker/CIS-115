// levels1.cpp		example of levels of indirection

#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
	int x = 1;
	int *p1 = &x;										//a pointer-to-int			
	int **p2 = &p1;									//a pointer-to-pointer-to-int
	
	cout << "address of x:  " << &x << endl;	
	cout << "address of p1: " << &p1 << endl;
	cout << "address of p2: " << &p2 << endl << endl;
	
	cout << "address of x:  " << &x << endl;	
	cout << "       *p1:  " << *p1 << "\t\t\t\t" <<  " 	<--- accessing the value/contents of x indirectly."  << endl;
	cout << "       *p2:  " << *p2 << '\t' << " 		<--- accessing the value/contents of p1 indirectly." << endl;
	cout << "      **p2:  " << **p2 << "\t\t\t\t" <<  " 	<--- accessing the value/contents of x via p1 indirectly." << endl;
	
	return 0;
	
}