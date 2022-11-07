// class3.cpp  Example of a simple class using parameter in the constructor.
// This is also demonstrates the order in which objects are destroyed.

#include<iostream>
#include<string>					// the string include is used here to pass the dog's names.
								// more on the string class later.
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

	dog Trapper("Trapper");
	
	return 0;				//which class object is destroyed first?  Why?
							//Note: you may have to run this from the command line
							//to see the order of destructors (depends on compiler).
}


