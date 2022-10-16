// dice.cpp  version 1
// Example of computerizing rolling of dice.

#include <iostream>
#include <ctime>                // <ctime> lib for random functions

using namespace std;

void diceRoll();

int main()
{
    srand(time(0));  //seeds the random number generator with current time.
    diceRoll(); 

    return 0;
}

void diceRoll()
{
     int x;
     x = 1 + rand() % 6;
     cout << "Dice Roll: " << x << endl;
}
     
