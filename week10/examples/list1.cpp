// list1.cpp 
// Demonstration the STL List Container.
// an STL list container is a doublely linked list of elements

#include <iostream>
#include <list>				// include the list library

using namespace std;

list<int> myList;				//instantiate object myList of STL int List.
list<int>::iterator iter;			//instantiate iterator named iter of STL int List.  

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

	for (int x = 0; x < 100; x++)
	{
		myList.push_back(x);
	}

	// Now Display the Values

	Display();

	// Reverse the Order and Display again

	myList.reverse();

	Display();

	return 0 ;
}
