// class2.cpp  Example of a simple class.
// using constructors and destructors.
// constructors are run automatically when the class object is created.
// destructors are run automatically when the class object is destroyed.

#include<iostream>

using namespace std;
class dog
{
public:

	dog(int times = 1)                     			// class constructor
	{									// Note: a constructor has
		for(int x = 0; x < times; x++)		// the same name as the class 
		cout << "bark! ";					// and no return type
		cout << endl;
	}

	~dog()                                 			// class destructor
	{									// Note: a class destructor has
		cout << "wag! wag!" << endl;		// the same name as the class, preceeded with 
	}									// a tilde "~".  Also, no parameters are 
										// passed to a destructor
};											

int main()
{

	dog Spot(5);
	dog Trapper(1);
	
	return 0;
}

	
