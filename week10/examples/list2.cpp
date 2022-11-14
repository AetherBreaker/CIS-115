// list2.cpp
// Another example of the STL List Container...

#include <iostream>
#include <list>
#include <string>

using namespace std;

list<string> myList;
list<string>::iterator iter;		//an iterator (read the iterator section of lecture notes).
string EntryName;

void Display() 
{
	for (iter = myList.begin(); iter != myList.end(); iter++)
	{
		cout << *iter << " ";
	}

	for (int x = 0; x < 4; x++)
		cout << endl;
}

int main()
{
	// Add values to the list

	for (int x = 0; x < 4; x++)
	{
		cout << "Enter a Name: ";
		cin >> EntryName;
		myList.push_back(EntryName);
	}

	// Now Display the Values

	cout << "Display the List..." << endl;

	Display();

	// Reverse the Order and Display again

	myList.reverse();

	cout << "Reverse the List..." << endl;

	Display();

	// Sort the List

	myList.sort();

	cout << "Sort the List..." << endl;

	Display();

	// Now Remove any element that has the same value as the element before it.

	cout << "Removes Duplicates from the List..." << endl;

	myList.unique();

	Display();

	return 0;
}
