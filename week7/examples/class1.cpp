// class1.cpp  Example of a simple class.
// class is named "dog" and has one function, woof.
// This example show how to...
// 1) instantiate the dog object directly, and using dynamic allocation.
// 2) call an object function directly and indirectly, using pointers, 

#include<iostream>

using namespace std;

class dog							//class object declaration/definition
{
	public:							//class access specifier (in this case, public).  
	
	void woof(int times)				//class function (method)
	{
		for(int x = 0; x < times; x++)
			cout << "bark!" << endl;
	}
};									//the class definition ALWAYS ends with "};"!

int main()
{
	dog Spot;						//instantiate class object named Spot.

	Spot.woof(5);						//call function woof in object Spot

	return 0;
}
