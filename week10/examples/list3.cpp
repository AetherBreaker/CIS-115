// list3.cpp 
// Demonstration the STL List Container.
// Writing list to a file.

#include <iostream>
#include <list>
#include <fstream>

using namespace std;

list<int> myList;
list<int>::iterator iter;

        // Create outfile stream...
       
    ofstream outFile("ListFile.dat");


void Display()
{
	for (iter = myList.begin(); iter != myList.end(); iter++)
	{
		cout << *iter << " ";
	}

	for (int x = 0; x < 4; x++)
		cout << endl;
}

void WriteFile()
{
	for (iter = myList.begin(); iter != myList.end(); iter++)
	{
		outFile << *iter << " ";
	}
        outFile << endl;

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
	
	WriteFile();

	// Reverse the Order and Display again

	myList.reverse();

	Display();
	
    WriteFile();

	return 0 ;
}
