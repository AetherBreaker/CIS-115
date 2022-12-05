// Inherit4.cpp
// Example of Overriding a Base Function.

#include<iostream>

using namespace std;

class MileDistance
{
protected:
	float miles;
public:
	void setDistance(float d)
	{
		cout << "(now in MileDist::SetDist)... " << endl;
		miles = d;
	}
	float getDist()
	{
		return miles;
	}
};

class FtDistance : public MileDistance
{
protected:
	float feet;
public:
	void setDistance(float);					
	float getDistance()
	{
		return feet;
	}
	float setMiles()
	{
		return miles;
	}
	float getMiles()
	{
		return miles;
	}
};

// This function accepts an argument which is stored in the member variable feet.
// The expression (feet / 5280) is passed to the base class version of the setDist
// function.   

void FtDistance::setDistance(float ft)
{
	cout << "(in FtDist::setDist)..." << endl;
	feet = ft;
	cout << "(calling MileDist in Base...)" << endl;
	MileDistance::setDistance(feet / 5280);
}

int main()
{
	FtDistance feet;
	float ft;

	cout << "Enter a distance in feet and I will convert it to miles: " ;
	cin  >> ft;

	feet.setDistance(ft);

	cout << feet.getDistance() << " feet equals " ;
	cout << feet.getMiles() << " miles. " << endl;
	
	return 0;
}
