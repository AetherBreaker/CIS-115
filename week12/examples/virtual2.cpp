// Virtual2.cpp
// Example of an improperly overridden function in a Base Class.
// The square function makes a call to the getDist function.
// The square function belongs to the base class, it is the base
// class's version of getDist that gets called.  The base class
// version of getDist returns the number of miles, not the number
// of feet held in the derived class.
// (In other words, MileDist::getDist() is not set to virtual)

#include<iostream>

using namespace std;

class MileDist
{
protected:
	float miles;
public:
	void setDist(float d)
	{
		miles = d;
	}
	float getDist()
	{
		return miles;
	}
	float square() 
	{
		cout << "In MileDist::square() " << "getDist() = " << getDist() << endl;
		return getDist() * getDist();
	}
};

class FtDist : public MileDist
{
protected:
	float feet;
public:
	void setDist(float);					
	float getDist()
	{
		return feet;
	}

	float getMiles()
	{
		return miles;
	}
};

// This function accepts an argument which is stored in the member variable feet.
// The expression (feet / 5280) is passed to the base class version of the setDist
// function.   

void FtDist::setDist(float ft)
{
	feet = ft;
	MileDist::setDist(feet / 5280);
}

int main()
{
	FtDist distObject;
	float ft;

	cout << "Enter a distance in feet and I will convert it " << endl;
	cout << "to miles: " ;
	cin  >> ft;

	distObject.setDist(ft);

	cout << distObject.getDist() << " feet equals " ;
	cout << distObject.getMiles() << " miles. " << endl;

	cout << distObject.getDist() << " square feet equals " ;
	cout << distObject.square() << " total feet. " << endl;
		return 0;
}
