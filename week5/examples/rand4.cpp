// rand4.cpp  version 4
// Example of the rand function
// Improved with a seed function

#include <iostream>
#include <ctime>                // <ctime> lib for random functions

int seed;

using namespace std;

int main()
{    
    for(int x = 0; x < 10; x++)
    {
        srand(time(0));
        cout << rand() << endl;
    }
    
    return 0;
}

     
