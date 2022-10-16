// rand3.cpp  version 3
// Example of the rand function
// Improved with a seed function  & a "sort of" randomized loop

#include <iostream>
#include <ctime>                // <ctime> lib for random functions

int seed;

using namespace std;

int main()
{
    cout << "Enter a Seed Value:" << endl;
    
    cin  >> seed;
    
    for(int x = 0; x < 10; x++)
    {
       srand(seed + x);
       cout << rand() << endl;
    }
    
    return 0;
}

     
