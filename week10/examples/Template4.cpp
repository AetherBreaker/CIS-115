// Template4.cpp  - An example of Overloading Function Templates.

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

template <class T1>				
T1 max(T1 &var1, T1 &var2, T1 &var3)
{
	T1 temp = max(var1,var2);
	return max(var3, temp);
//	return(max(max(var1,var2), var3) );					// this works too (a bit more complicated!)
}

int main()
{

	char char1, char2;
	int  num1, num2;
	float f1, f2, f3;

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

	cout << "Enter THREE floats: ";
	cin >> f1 >> f2 >> f3;
	cout << "The max is: " << max(f1, f2, f3) << endl;


	cout << endl;
	
	return 0;
}

