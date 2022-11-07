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

using std::string;
using std::cout;
using std::endl;
using std::array;

struct Card
{
    string face;
    string suit;
};

void filldeck(array<Card, 53>&, array<string, 13>, array<string, 4>);
void shuffle(array<Card, 53>&);
void deal(array<Card, 53>&);
void display(array<Card, 53>&);


int main()
{
    array<Card, 53> deck;

    array<string, 13> face =
    { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };

    array<string, 4> suit = { "Hearts", "Diamonds", "Clubs", "Spades" };

    filldeck(deck, face, suit);
    display(deck);

    shuffle(deck);

    display(deck);

    deal(deck);

    return 0;
}

void filldeck(array<Card, 53>& wDeck, array<string, 13> wFace, array<string, 4> wSuit)
{
    for (int i = 0; i < 52; i++)
    {
        wDeck[i].face = wFace[i % 13];
        wDeck[i].suit = wSuit[i / 13];
    }
}
void shuffle(array<Card, 53>& wDeck)
{
    cout << "Shuffle the Deck..." << endl;
    srand(time(0));
    for (int i = 0; i < 52; i++)
    {
        int j = rand() % 52;
        Card temp = wDeck[i];
        wDeck[i] = wDeck[j];
        wDeck[j] = temp;
    }
    cout << endl << "  - - - - - " << endl;
}

void deal(array<Card, 53>& wDeck)
{
    std::stringstream ss;

    ss << "The Deal..." << endl;
    for (int i = 0; i < 52; i++)
    {
        ss << std::setw(5) << std::internal << wDeck[i].face << " of " << std::setw(8) << std::left << wDeck[i].suit << " - ";

        if ((i + 1) % 5 == 0)
            ss << endl;
    }

    cout << ss.str() << endl << "  - - - - - " << endl;
}

void display(array<Card, 53>& wDeck)
{
    std::stringstream ss;
    ss << "Display the Deck..." << endl;
    int x = 0;
    int y = 0;
    for (int i = 0; i < 52; i++)
    {
        string test = std::format("{:<3}: {:>5} of {:<8} | ", x + y + 1, wDeck[y + x].face, wDeck[y + x].suit);
        ss << test;
        x += 13;

        if ((i + 1) % 4 == 0) {
            x = 0;
            y++;
            ss << endl;
        }
    }
    cout << ss.str() << endl << "  - - - - - " << endl;
    return;
}
