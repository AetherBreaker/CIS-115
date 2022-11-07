// class5.cpp  Example of copying class objects.


#include<iostream>
#include<string>

using namespace std;

class dog
{
private:

	string dogName;

public:

	dog(string dName)
	{
		cout << "woof! " << dName << " Created";
		cout << endl;
		dogName = dName;
	}

string getname()
	{
		return dogName;
	}

	~dog()
	{
		cout << "Bye Bye  " << dogName << endl;
	}
};


int main()
{

	dog Spot("Spot");
	

	dog Farley = Spot;					//Farley's name is still Spot
										//the name didn't change in the copy

	dog Trapper("Trapper");
	
	cout << Spot.getname() << endl;
	cout << Farley.getname() << endl; 

	return 0;

}


