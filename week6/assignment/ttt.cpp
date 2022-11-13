// Tic Tac Toe
// Jacob Ogden


#include <conio.h>
#include <iostream>
#include <sstream>
#include <string>
#include <array>

using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define ENTER 13

int pointerpos = 1;
char gameboard[] = {'0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',};
bool player = false;
int turn = 0;           // counts number of turns taken
int result;             // 0 = draw
// 1 = X wins
// 2 = O wins

void displayBoard() {
    stringstream ss;

    ss << "Navigate the board using the arrow keys!\n";
    ss << "Place an X or O with the enter key!\n";

    if (player) {
        ss << "X's " << "Turn:\n";
    }
    else {
        ss << "O's " << "Turn:\n";
    }

    if (pointerpos == 1) {
        ss << "\033[4m";
    }
    ss << gameboard[1] << "\033[0m" << '|';
    if (pointerpos == 2) {
        ss << "\033[4m";
    }
    ss << gameboard[2] << "\033[0m" << '|';
    if (pointerpos == 3) {
        ss << "\033[4m";
    }
    ss << gameboard[3] << "\033[0m\n";

    ss << "-+-+-\n";

    if (pointerpos == 4) {
        ss << "\033[4m";
    }
    ss << gameboard[4] << "\033[0m" << '|';
    if (pointerpos == 5) {
        ss << "\033[4m";
    }
    ss << gameboard[5] << "\033[0m" << '|';
    if (pointerpos == 6) {
        ss << "\033[4m";
    }
    ss << gameboard[6] << "\033[0m\n";

    ss << "-+-+-\n";

    if (pointerpos == 7) {
        ss << "\033[4m";
    }
    ss << gameboard[7] << "\033[0m" << '|';
    if (pointerpos == 8) {
        ss << "\033[4m";
    }
    ss << gameboard[8] << "\033[0m" << '|';
    if (pointerpos == 9) {
        ss << "\033[4m";
    }
    ss << gameboard[9] << "\033[0m\n";
    ss << "\n\n Made by Jacob Ogden\n";

    string s = ss.str();
    system("CLS");
    cout << s;
}

void input_processor() {
    int c = 0;
    while (1) {
        c = 0;

        switch (c = getch()) {
            case KEY_UP:
                if (pointerpos < 4) {
                    continue;
                }
                else {
                    pointerpos -= 3;
                }
                displayBoard();
                continue;
            case KEY_DOWN:
                if (pointerpos > 6) {
                    continue;
                }
                else {
                    pointerpos += 3;
                }
                displayBoard();
                continue;
            case KEY_LEFT:
                if (pointerpos == 1 || pointerpos == 4 || pointerpos == 7) {
                    continue;
                }
                else {
                    pointerpos -= 1;
                }
                displayBoard();
                continue;
            case KEY_RIGHT:
                if (pointerpos == 3 || pointerpos == 6 || pointerpos == 9) {
                    continue;
                }
                else {
                    pointerpos += 1;
                }
                displayBoard();
                continue;
            case ENTER:
                if (gameboard[pointerpos] != ' ') {
                    continue;
                }
                else {
                    break;
                }
            default:
                continue;
        }
        break;
    }
}

bool contains(int element, array<int, 3> arr) {
    if (std::find(std::begin(arr), std::end(arr), element) != std::end(arr)) {
        return true;
    }
    else {
        return false;
    }
}

bool threeinline(array<int, 3> arr, char check) {
    int checkvar = 0;
    for (int x : arr) {
        if (gameboard[x] == check) {
            checkvar += 1;
        }
    }
    return (checkvar >= 3) ? false : true;
}

bool win_condition() {
    char check = (player) ? 'X' : 'O';
    bool holdbool = true;

    array<int, 3> rone = {1,2,3};
    array<int, 3> rtwo = {4,5,6};
    array<int, 3> rthree = {7,8,9};
    array<int, 3> cone = {1,4,7};
    array<int, 3> ctwo = {2,5,8};
    array<int, 3> cthree = {3,6,9};
    array<int, 3> done = {1,5,9};
    array<int, 3> dtwo = {3,5,7};

    if (turn >= 9) {
        result = 0;
        return false;
    }
    if (contains(pointerpos, rone) && holdbool) {
        holdbool = threeinline(rone, check);
        if (!holdbool) {
            result = (player) ? 1 : 2;
        }
    }
    if (contains(pointerpos, rtwo) && holdbool) {
        holdbool = threeinline(rtwo, check);
        if (!holdbool) {
            result = (player) ? 1 : 2;
        }
    }
    if (contains(pointerpos, rthree) && holdbool) {
        holdbool = threeinline(rthree, check);
        if (!holdbool) {
            result = (player) ? 1 : 2;
        }
    }
    if (contains(pointerpos, cone) && holdbool) {
        holdbool = threeinline(cone, check);
        if (!holdbool) {
            result = (player) ? 1 : 2;
        }
    }
    if (contains(pointerpos, ctwo) && holdbool) {
        holdbool = threeinline(ctwo, check);
        if (!holdbool) {
            result = (player) ? 1 : 2;
        }
    }
    if (contains(pointerpos, cthree) && holdbool) {
        holdbool = threeinline(cthree, check);
        if (!holdbool) {
            result = (player) ? 1 : 2;
        }
    }
    if (contains(pointerpos, done) && holdbool) {
        holdbool = threeinline(done, check);
        if (!holdbool) {
            result = (player) ? 1 : 2;
        }
    }
    if (contains(pointerpos, dtwo) && holdbool) {
        holdbool = threeinline(dtwo, check);
        if (!holdbool) {
            result = (player) ? 1 : 2;
        }
    }

    return holdbool;
}



int main() {
    displayBoard();
    while (win_condition()) {
        player = (player) ? false : true;
        turn++;
        displayBoard();
        input_processor();

        if (player) {
            gameboard[pointerpos] = 'X';
        }
        else {
            gameboard[pointerpos] = 'O';
        }
        displayBoard();
    }
    switch (result) {
        case 0:
            {
                cout << endl << "Game ended in a draw!" << endl;
                break;
            }
        case 1:
            {
                cout << endl << "Player X won!" << endl;
                break;
            }
        case 2:
            {
                cout << endl << "Player O won!" << endl;
                break;
            }
    }

    system("pause");
    return 0;
}