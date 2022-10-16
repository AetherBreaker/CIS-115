//Array6 - Passing Arrays as parameters
//
//Note: The Name of the Array is the Address of the Array.

#include<iostream>

using namespace std;

void nameChange(char[]);
void nameChange(char c);

int main()
{

	char x[] = {"Paul"};

	cout << "Before Function Call: " << x << endl;
	nameChange(x);

	cout << "After Function Call: " << x << endl;
	
	nameChange(x[3]);

	return 0;
}

void nameChange(char name[])
{
	int x = 0;
	name[x] = 'S';

}
void nameChange(char c1)
{
	cout << c1 << endl;
	c1 = 'z';
}
