// VirtualFunction2.cpp

#include <iostream>
using namespace std;

class Base {
public:
	virtual void NameOf();   // Virtual function.
	void InvokingClass();   // Nonvirtual function.
};

// Implement the two functions.
void Base::NameOf() {
	cout << "Base::NameOf - ";
}

void Base::InvokingClass() {
	cout << "Invoked by Base  ";
}

class Derived : public Base {
public:
	void NameOf();   // Virtual function.
	void InvokingClass();   // Nonvirtual function.
};

// Implement the two functions.
void Derived::NameOf() {
	cout << "Derived::NameOf - ";
}

void Derived::InvokingClass() {
	cout << "Invoked by Derived  ";
}

int main() {
	// Declare an object of type Derived.
	Derived aDerived;

	// Declare two pointers, one of type Derived * and the other
	//  of type Base *, and initialize them to point to aDerived.
	Derived *pDerived = &aDerived;
	Base    *pBase    = &aDerived;

	// Call the functions.
	pBase->NameOf();           // Call virtual function.
	pBase->InvokingClass();    // Call nonvirtual function.
	cout << endl;
	pDerived->NameOf();        // Call virtual function.
	pDerived->InvokingClass(); // Call nonvirtual function.
}