// while2.cpp
// This program displays the numbers 1 through 10
// along with their squares.

#include<iostream>

using namespace std;

int main()
{
	int num = 1;
	cout << "Number       Squared" << endl;
	cout << "----------------------------" << endl;

	while (num <= 10)
	{
		cout << num << "\t\t\t\t" << (num * num) << endl;     //example of the tab control character
		num++;
	}
	

	return 0;
}
