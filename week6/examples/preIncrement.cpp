// preIncrement.cpp
// example using the pre-increment operator

#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	int y = 0;
	
	cout << "x starts at 0 - pre-increment operator is used..." << endl;
	for(int x = 0; x < 5; ++x)
		cout << x << "  " ;
	
	cout << endl;
	
	cout << "While Loop:  x starts at 0 - pre-increment operator is used..." << endl;
	while(y < 5)
		{
			cout << ++y << "  ";
		}

	
	return 0;
}