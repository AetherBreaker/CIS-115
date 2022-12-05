// Virtual1.cpp
// MileDist::getDist() function is set to virtual

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
	virtual float getDist()
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
