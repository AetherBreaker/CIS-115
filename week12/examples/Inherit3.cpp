// Inherit3.cpp
// Demonstration of Passing Arguments to the base class constructor.

#include<iostream>

using namespace std;

// Rectangle class has two constructors
// 1.  Default constructor simply initializes width, length, and area to 0.
// 2.  The second constructor takes two arguments and calculates the area.

class Rectangle
{
	protected:
		float width, length, area;
	public:
		Rectangle()
		{
			width = length = area = 0.0;
			cout << "Base class constructor called and variables set to zero" << endl;
	       }	
		Rectangle(float, float);
		
		float getArea()
		{
			return area;
	       }	
		
		float getLen()
		{
			return length;
	       }

		float getWidth()
		{
			return width;
		}	
};

Rectangle::Rectangle(float w, float l)
{
	width = w;
	length = l;
	area = width * length;
	cout << "Base class constructor called and variables initialized" << endl;
};

// The derived class is designed to hold info about cubes, which not 
// only has the length and width, but a height and volume as well.

class Cube : public Rectangle
{
protected:
	float height, volume;
public:
	Cube(float, float, float);
	float getHeight()
	{
		return height;
	}
	float getVol()
	{
		return volume;
	}
};

// The Cube constructor takes three arguments.
// Note the extra notation - a colon is placed after the parameter
// list for the derived class constructor, followed by a function call
// to the base class constructor.  This notation not only causes 
// information to be based to the base class constructor, but also 
// determines which base class constructor to call if there is more than 
// one constructor.

Cube::Cube(float wide, float length, float high) : Rectangle(wide, length)
{
	height = high;
	volume = area * high;
	cout << "Cube class constructor called and variable initialized" << endl;
}

int main()
{
	float cubeWide, cubeLong, cubeHigh;

	cout << "Enter the dimensions of the cube..." << endl;

	cout << "Width: ";
	cin  >> cubeWide;
	cout << endl;

	cout << "Length: ";
	cin  >> cubeLong;
	cout << endl;

	cout << "Height: ";
	cin  >> cubeHigh;
	cout << endl;

	Cube c(cubeWide, cubeLong, cubeHigh);

	cout << "Cube Properties.. " << endl;

	cout << "Width:  " << c.getWidth() << endl;
	cout << "Length: " << c.getLen() << endl;
	cout << "Height: " << c.getHeight() << endl;
	cout << "Base Area: " << c.getArea() << endl;
	cout << "Volume:    " << c.getVol() << endl;

	return 0;
}
