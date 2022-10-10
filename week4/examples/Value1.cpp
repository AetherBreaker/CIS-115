// Value1.cpp - an example of pass by value...
// x is declared twice - 1) in main and, 2) in printline.

#include<iostream>

using namespace std;

void printline(int numlines)
{
    int x;
	cout << "At the beginning of printline(), x = " << x << endl;
	for (x = 1; x <= numlines; x++)
		cout << "Line #: " << x << endl;
	cout << "At the end of printline(), x = " << x << endl;
}

int main()
{
	int x = 0;
	int y = 10;

	cout << "Before printline() is called, x = " << x << endl;

	printline(y);

	cout << "After printline() is called, x = " <<x << endl;
	
    
	return 0;
}
