// BaseClassPointers
// A Demonstration of the behavior of a base class pointer
// when it is pointing to a derived class that overrides members
// of the base class...

#include <iostream>
using namespace std;

class Base
{
	public:
		void show()
		{ cout << "This is from the Base Class." << endl; }
};

class Derived  :  public Base
{
	public:
		void show()
		{ cout << "This is from the Derived Class." << endl; }
};

int main()
{
	Base *bptr;				// pointer declared of type Base.

	Derived dobject;			// dobject instantiated of type Derived.

	bptr = &dobject;			// bptr set to the address of dobject.

	bptr->show();				// Base Class Pointer - Ignores Override.

	return 0;
}

				

