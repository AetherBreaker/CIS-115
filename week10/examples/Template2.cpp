// Template2.cpp 
// 2 abitrary variables swapped

#include<iostream>

using namespace std;

template <class T1, class T2>			
void swap(T1 &var1, T2 &var2)
{
	T1 temp;									// create a temp variable of type T1.
	temp = var1;								// put var1 into temp
	var1 = (T1)var2;							// put var2 into temp (casting it to type T1)
	var2 = (T2)temp;							// put temp into var2 (casting it to type T2)
}

int main()
{

	char character;
	int intNum;
	float floatNum;

	cout << "Enter a character and an int: ";
	cin >> character >> intNum;

	swap(character, intNum);

	cout << character << "  " << intNum << endl;

	cout << endl;

	cout << "Now Enter a Float and an int: ";

	cin >> floatNum >> intNum;

	swap(floatNum, intNum);

	cout << floatNum << "  " << intNum << endl;

	return 0;
}

