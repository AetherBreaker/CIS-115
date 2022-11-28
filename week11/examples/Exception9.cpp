// Exception9.cpp
// Exception on File Open


#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    try
    {
    	fstream dataFile("name3.dat", ios::in | ios::out);
        if(!dataFile)
           throw (string("The file could not be opened"));
    }       
        
    catch(string error)
    {
        cout << "Error Loading File: " << error << endl;        
    }
        
   cout << endl << "Program Continues...." << endl;
    
  
  return 0;  
}
