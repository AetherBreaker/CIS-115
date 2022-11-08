// war.cpp
// Jacob Ogden

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include <sstream>
#include <string>
#include <array>
#include <format>
#include <Windows.h>
#include <cstdio>
#include <fcntl.h>
#include <io.h>
#include <stdio.h>

using std::wstring;
using std::wcout;
using std::endl;
using std::array;

struct Card {
    wstring face;
    wstring suit;
};

class Deck {
    public:
    array<Card, 52> deck;
    array<wstring, 13> face = {L"Ace", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", L"10", L"Jack", L"Queen", L"King"};
    array<wstring, 4> suit = {L"Hearts", L"Diamonds", L"Clubs", L"Spades"};

    Deck() {
        int i = 0;
        for (wstring s : suit) {
            for (wstring f : face) {
                deck[i].face = f;
                deck[i].suit = s;
                i++;
            }
        }
    }

    void shuffle() {
        wcout << "Shuffle the Deck..." << endl;
        srand(time(0));
        for (int i = 0; i < 52; i++) {
            int j = rand() % 52;
            Card temp = deck[i];
            deck[i] = deck[j];
            deck[j] = temp;
        }
        wcout << endl << "  - - - - - " << endl;
    }

    void display() {
        wcout << "Display the Deck..." << endl;
        wcout << L"\u250C";
        for (int i = 0; i < 94; i++) {
            wcout << L'\u2500';
        }
        wcout << L'\u2510' << endl;
        for (int i = 0; i < 12; i++) {
            wcout << L'\u2502';
            for (int y = 0; y < (13 * 4); y += 13) {
                wcout << std::format(
                    L"{:>3} {:>5} of {:<8} \u2502 ",
                    std::to_wstring(i + y + 1) + L":",
                    deck[i + y].face, deck[i + y].suit
                );
            }
            wcout << endl;
        }
        wcout << endl << endl;
        return;
    }

    void deal() {
        wcout << "The Deal..." << endl;
        for (int i = 0; i < 12; i++) {
            wcout << '|';
            for (int y = 0; y < (13 * 4); y += 13) {
                wcout << std::format(
                    L"{:>3} {:>5} of {:<8} | ",
                    std::to_wstring(i + y + 1) + L":",
                    deck[i + y].face, deck[i + y].suit
                );
            }
            wcout << endl;
        }
        wcout << endl << endl;
    }
};


int wmain() {
    _setmode(_fileno(stdout), _O_U16TEXT);
    Deck a;

    a.display();

    return 0;
}


