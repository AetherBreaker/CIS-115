// Inherit1.cpp
// A simple example of inheritance

#include<iostream>
using namespace std;

class Base
{
	//private:
	public:
		int x = 9;

	public:
		int a;
		void seta();
};

void Base::seta()
{
	a = 5;
}

class Child : public Base						// Child Class inherits Class Base
{
	public:
		void Adda();
};

void Child::Adda()
{
		a = a + x;
}

int main()
{
	Child NewClass;
	NewClass.seta();           //setX() inherited from Base class,
	
	cout << NewClass.a << endl;	
	
	NewClass.Adda();
	
	cout << NewClass.a<< endl;
	
	//  NOTE:  private members of the base class ARE NOT accessible to the derived class...
	
	//   cout << NewClass.x<< endl;		

	
	return 0;
}

