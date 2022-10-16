// dice.cpp  version 4
// Example of computerizing rolling of dice.
// This pass includes the dice roll in a for loop.
// with a delay usleep() function

#include <iostream>
#include <ctime>                                         // <ctime> lib for random functions
#include <unistd.h>                                      //required for usleep()

using namespace std;

void diceRoll();

int main()
{
    for(int x = 0; x < 10; x++)
    {
        usleep(1000);                                   //delay # microseconds (1 million micro/second)
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
     
