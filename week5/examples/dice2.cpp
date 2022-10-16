// dice.cpp  version 2
// Example of computerizing rolling of dice.
// This pass includes the dice roll in a for loop.

#include <iostream>
#include <ctime>                // <ctime> lib for random functions

using namespace std;

void diceRoll();

int main()
{
    for(int x = 0; x < 10; x++)
    {
        srand(time(0));  //seeds the random number generator with current time.
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
     
