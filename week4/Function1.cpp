//Function1 - This program has two Functions
// main and displayMessage.

#include<iostream>

using namespace std;

void displayMessage()
{
	cout << "Hello from the function DisplayMessage" << endl;
}


int main()
{
	cout << "Hello from Main" << endl;
	displayMessage();
	cout << "Back in the function main again." << endl;
	
	
    return 0;
}
