// C++ program to implement Multilevel Inheritance 
// Reference Link:  https://www.geeksforgeeks.org/inheritance-in-c/
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
class fourWheeler: public Vehicle 
{ public: 
	fourWheeler() 
	{ 
	cout << "Objects with 4 wheels are vehicles"<<endl; 
	} 
}; 
// sub class derived from two base classes 
class Car: public fourWheeler{ 
public: 
	Car() 
	{ 
	cout<< "a Car has 4 Wheels" <<endl; 
	} 
}; 

// main function 
int main() 
{ 
	//creating object of sub class will 
	//invoke the constructor of base classes 
	Car obj; 
	return 0; 
} 
