#include <iostream>
#include <stdlib.h>

using namespace std;

void displayBoard(char gameBoard[10])
{
    system("CLS");
    cout << gameBoard[1] << '|' << gameBoard[2] << '|' << gameBoard[3] << endl;
    cout << "-+-+-" << endl;
    cout << gameBoard[4] << '|' << gameBoard[5] << '|' << gameBoard[6] << endl;
    cout << "-+-+-" << endl;
    cout << gameBoard[7] << '|' << gameBoard[8] << '|' << gameBoard[9] << endl;
}



int main()
{
    char gameboard[] = { '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', };
    displayBoard(gameboard);


    return 0;
}