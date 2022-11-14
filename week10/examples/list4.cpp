// list3.cpp 
// Demonstration the STL List Container.
// Read a File into a List Container

#include <iostream>
#include <list>
#include <fstream>

using namespace std;

list<int> myList;
list<int>::iterator iter;

int tempVar;

        // Create inFile stream...
       
    ifstream inFile("ListFile.dat");


void Display()
{
	for (iter = myList.begin(); iter != myList.end(); iter++)
	{
		cout << *iter << " ";
	}

	for (int x = 0; x < 4; x++)
		cout << endl;
}

void ReadFile()
{
    for(int x = 0; x < 99; x++)
    {
        inFile >> tempVar;
        myList.push_back(tempVar);
    }
//    while(!inFile.eof())							//another way to do the same thing
//    {
//        inFile >> tempVar;
//        myList.push_back(tempVar);
//    }
     
}

int main()
{
  
    ReadFile();    

	Display();

	myList.reverse();

	Display();
	
	return 0 ;
}
