// NoScope2.cpp
// same as NoScope1.cpp, except using auto_ptr  
// more on smart pointers later.

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
	auto_ptr<foo> d1(new foo("dynamic1"));
	auto_ptr<foo> d2 =d1;							// after this line executes...
												// d1 and d2 both point to same object
												// question:  who owns the object to delete it?
												// this code (as written) leads to undefined behavior.
												// we will discuss this later.  
}