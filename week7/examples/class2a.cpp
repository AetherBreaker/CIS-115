// class2a.cpp  Same as example #2, except using a class header.

#include <iostream>
#include "dog.hpp"							// discuss difference between .h and .hpp

using namespace std;
								

int main()
{

	dog Spot(1);
	dog Trapper(2);
	
	return 0;
}

// these are the dog class method (function) definitions.
// note the global resolution operator "::" in the function header;
// it identifies the function with the class.  

dog::dog(int times)                     				// class constructor
{									   	
	for(int x = 0; x < times; x++)		 
	cout << "bark! ";					
	cout << endl;
}

dog::~dog()                             
{										
	cout << "wag! wag!" << endl;				// class destructor
}		

	
