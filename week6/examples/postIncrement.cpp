// postIncrement.cpp
// example using the post-increment operator

#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	int y = 0;
	
	cout << "For Loop:  x starts at 0 - post-increment operator is used..." << endl;
	for(int x = 0; x < 5; x++)
		cout << x << "  " ;
	
	cout << endl;
	
	cout << "While Loop:  x starts at 0 - post-increment operator is used..." << endl;
	while(y < 5)
	{
		cout << y++ << "  ";
	}
		
	
	
	return 0;
}