// Inherit2.cpp
// Demonstration of the order in which base and derived class
// constructors and destructors are called.

#include<iostream>

using namespace std;

class Base
{
public:
	Base()
	{
		cout << "This is the Base Class Constructor. " << endl;
	}
	~Base()
	{
		cout << "This is the Base Class Destructor. " << endl;
	}
};

class Derived : public Base
{
public:
	Derived()
	{
		cout << "This is the Derived Class Constructor. " << endl;
	}
	~Derived()
	{
		cout << "This is the Derived Class Destructor. " << endl;
	}
};

int main()
{
	cout << "We will now declare a Derived Class Object..." << endl << endl;

	Derived Object;

	cout << endl << "Now, the program will end..." << endl << endl;

	return 0;
}
