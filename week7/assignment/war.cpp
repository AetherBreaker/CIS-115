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

class Deck {
    public:
    array<Card, 52> deck;
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

    void display(array<Card, 53>& wDeck)
    {
        cout << "Display the Deck..." << endl;
        for (int i = 0; i < 12; i++)
        {
            cout << '|';
            for (int y = 0; y < (13 * 4); y += 13)
            {
                cout << std::format(
                    "{:>3} {:>5} of {:<8} | ",
                    std::to_string(i + y + 1) + ":",
                    wDeck[i + y].face, wDeck[i + y].suit
                );
            }
            cout << endl;
        }
        cout << endl << endl;
        return;
    }

    void deal(array<Card, 53>& wDeck)
    {
        cout << "The Deal..." << endl;
        for (int i = 0; i < 12; i++)
        {
            cout << '|';
            for (int y = 0; y < (13 * 4); y += 13)
            {
                cout << std::format(
                    "{:>3} {:>5} of {:<8} | ",
                    std::to_string(i + y + 1) + ":",
                    wDeck[i + y].face, wDeck[i + y].suit
                );
            }
            cout << endl;
        }
        cout << endl << endl;
    }
}


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