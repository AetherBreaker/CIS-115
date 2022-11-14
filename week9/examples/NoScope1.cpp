// NoScope1.cpp
// Example of dynamic allocation 
// Dynamically allocated objects have no scope (or outside of scope)
// They have to be manually deleted.
// If not deleted, they can cause a memory leak.

#include <iostream>

using namespace std;

class foo
{
private:
	
	char *className;
	
public:

	foo(char *cName)
	{
		cout << cName << " Created";
		cout << endl;
		className = cName;
	}
	
	~foo()
	{
		cout << className <<  " Destructor" << endl;
	}
};


int main(int argc, char *argv[]) {
	
	foo a("local-a");
	
	foo *d1  = new foo("dynamic1");
	foo *d2  = new foo("dynamic2");
	
	delete d2;							// why can't you use *d2 here?
	
	return 0;
	
}