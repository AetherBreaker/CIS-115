// rand2.cpp  version 2
// Example of the rand function that sets a seed for the random function
// Improved with a seed function  & a loop
// But what happens when you select the same seed number?

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
       srand(seed);
       cout << rand() << endl;
    }
    
    return 0;
}

     
