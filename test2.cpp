#include <algorithm>
#include <iostream>

char board[10] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };

int main()
{
    if (
        std::all_of(
            std::begin(board),
            std::end(board),
            [](char i) {return (i != 'X' && i != 'O');}
        )
        )
    {
        std::cout << "True\n";
    }
    else
    {
        std::cout << "False\n";
    }
}