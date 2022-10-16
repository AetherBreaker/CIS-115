// dice.cpp  version 3
// Example of computerizing rolling of dice.
// This pass includes the dice roll in a for loop.
// Now, with an improved srand function.

#include <iostream>
#include <ctime>                                         // <ctime> lib for random functions

using namespace std;

void diceRoll();

int main()
{
    for(int x = 0; x < 10; x++)
    {
        srand(time(0) + rand() % 100);            //seeds the random number generator 
                                                                  //with current time plus a random int between 1 & 100.
        diceRoll(); 
    }
    return 0;
}

void diceRoll()
{
     int x;
     x = 1 + rand() % 6;
     cout << "Dice Roll: " << x << endl;
}
     
