// rand5.cpp  version 5
// Example of the rand function
// Improved with a seed function again with a true randomized loop

#include <iostream>
#include <ctime>                // <ctime> lib for random functions

int seed;

using namespace std;

int main()
{    
    for(int x = 0; x < 10; x++)
    {
        srand(time(0) + (rand() % 500));
        cout << rand() << endl;
    }
    
    return 0;
}

     
