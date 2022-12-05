// Inherit5.cpp
// Demonstration when a derived class function overrides
// a base class function, objects of the base class
// still call the base class version of the function.

#include<iostream>

using namespace std;

class Base
{
public:
	void showMsg()
	{
		cout << "This is the Base Class." << endl;
	}
};

class Derived : public Base				// class Derived inherits Base Class
{
public:
	void showMsg()
	{
		cout << "This is the Derived Class." << endl;
	}
};

int main()
{
	Base b;
	Derived d;

	b.showMsg();
	d.showMsg();
	
	return 0;
}
