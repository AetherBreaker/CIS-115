// struct3.cpp
//
// This program uses a function to return a structure. 

#include <iostream>
#include <iomanip>
#include <cmath>					// For the pow function

using namespace std;

struct Circle							// Circle structure declaration
{
	float radius;
	float diameter;
	double area;
};

// Function prototype
Circle getInfo();						// notice this function returns a Circle object

// Constant definition for pi
const float pi = 3.14159;

int main()
{
	Circle c;

	c = getInfo();
	c.area = pi * (c.radius * c.radius);
	cout << "The radius and area of the circle are:\n";
	cout.precision(2);									
	cout.setf(ios::fixed | ios::showpoint);					// format flags: set fixed precision & show decimal
	cout << "Radius: " << c.radius << endl;				// these are functions in <iostream>
	cout << "Area: " << c.area << endl;					// see:  https://en.cppreference.com/w/cpp/io/basic_iostream
	
	return 0;
}

//**************************************************************
// Definition of function getInfo. This function uses a        *
// local variable, Round, which is a circle structure.         *
// The user enters the diameter of thecircle, which is         *
// stored in Round.diameter. The function then calculates      *
// the radius, which is stored in Round.radius. Round is then  *
// returned from the function.                                 *
//**************************************************************

Circle getInfo()
{
	Circle Round;

	cout << "Enter the diameter of a circle: ";
	cin >> Round.diameter;
	Round.radius = Round.diameter / 2;
	return Round;
}
