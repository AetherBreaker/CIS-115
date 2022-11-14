//  newDelete.cpp
// Note that delete ptr does not delete the pointer ptr. 
// Instead it deletes ownership of that memory location.

#include <iostream>
using namespace std;

class circle
{
	
public:
	circle()
	{
		cout << "Circle class object created..." << endl;
	}
	
	
	~circle()
	{
		cout << "Circle class object destroyed..." << endl;
	}
};

int main(int argc, char *argv[]) {
	
	int *p = new int(1);
	
	cout << " *p after new: " << *p << endl;					
	delete(p);
	
	 //p = NULL;
	
	cout << " *p after delete: " << *p << " (UNDEFINED!)" << endl;				// pointer p still exists - undefined behavior
	
	circle *cPtr = new circle();
	delete(cPtr);										// cPtr destructor is called.
	
	int *aPtr = new int[5];
	cout << "aPtr contents... " << endl;
	for(int x = 0; x < 5; x++)
	{
		aPtr[x] = x;
		cout << aPtr[x] << "  " ;
	}
	cout << endl;
	
	delete[] aPtr;			// The [] instructs the CPU to delete multiple variables rather than one variable.
						// using  aPtr after this results in undefined behavior	
	
	cout << "aPtr [1] after delete... "  << aPtr[1] << " (UNDEFINED!)" << endl;			
	
	//aPtr = NULL;
		
	// cout << "aPtr [1] after delete... "  << aPtr[1];	
	
	int  *ptr = nullptr;
	
	cout << "The value of ptr is " << ptr ;
	
	return 0;
}