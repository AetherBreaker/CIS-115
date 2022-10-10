
// while1.cpp
// An example of a while loop

#include<iostream>
using namespace std;

int main()
{
	int number = 0;

	cout << "This program will let you enter number " << endl;
	cout << "after number.  Entering a 99 exit the program." << endl;

	while (number != 99)
	{
		cin >> number;
	}
	
	
	return 0;
}
