// C++ program for Hybrid Inheritance 
// reference link:  https://www.geeksforgeeks.org/inheritance-in-c/

#include <iostream> 
using namespace std; 

// base class 
class Vehicle 
{ 
public: 
	Vehicle() 
	{ 
	cout << "This is a Vehicle" << endl; 
	} 
}; 

//base class 
class Fare 
{ 
	public: 
	Fare() 
	{ 
		cout<<"This vehicle requires a Fare\n"; 
	} 
}; 

// first sub class 
class Car: public Vehicle 
{ 

}; 

// second sub class 
class Bus: public Vehicle, public Fare 
{ 
public:
	Bus()
	{
		cout<<"a Bus is created! \n"; 
	}
	
}; 

// main function 
int main() 
{ 
	// creating object of sub class will 
	// invoke the constructor of base class 
	Bus obj2; 
	return 0; 
} 
