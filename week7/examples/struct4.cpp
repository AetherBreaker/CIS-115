// struct4.cpp
// structs can hold more than just variables...
// this example shows a struct with a function
// called showInfo.

#include<iostream>

using namespace std;

struct Info
{
	int x;
	int y;

	void showInfo()
	{
		cout << "Inside ShowInfo:  " << x << " " << y << endl;
	}
};


int main()
{
	Info sample;

	sample.x = 1;
	sample.y = 2;

	sample.showInfo();

	return 0;
}
