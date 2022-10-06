// Value2.cpp - an example of a Boolean Function.

#include<iostream>

using namespace std;

bool isEven(int);

int main()
{
	int y;

	cout << "Enter a Number: ";
	cin  >> y;

    if(isEven(y))
		cout << y << " is Even" << endl;
	else
		cout << y << " is Odd"<< endl;
    
	return 0;
}

bool isEven(int num)
{
	if((num % 2) == 0)
		return(true);
	else
		return(false);
}
