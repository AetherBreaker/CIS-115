

// Template3.cpp 
// determine the maximum between 2 abitrary like variables
#include<iostream>

using namespace std;

template <class T1>				
T1 max(T1 &var1, T1 &var2)
{
	if(var1 < var2)
		return var2;
	else
		return var1;
}

int main()
{

	char char1, char2;
	int  num1, num2;
	float f1, f2;

	cout << "Enter two chars: " << endl;

	cin >> char1 >> char2;

	cout << "The max is: " << max(char1, char1) << endl;

	cout << endl;


	cout << "Enter two ints: ";
	cin >> num1 >> num2;

	cout << "The max is: " << max(num1, num2) << endl;

	cout << endl;


	cout << "Enter two floats: ";
	cin >> f1 >> f2;
	cout << "The max is: " << max(f1, f2) << endl;
	cout << endl;
	
	return 0;
}

