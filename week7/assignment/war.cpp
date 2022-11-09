// war.cpp
// Jacob Ogden
#include <iostream>
#include <string>
#include <array>
#include <format>
#include <fcntl.h>
#include <io.h>
#include <deque>
#include <map>

using std::wstring;
using std::wcout;
using std::endl;
using std::array;
using std::deque;
using std::map;
using std::format;


class War {
    public:
    struct Card {
        wstring face;
        wstring suit;
    };
    deque<Card> deck;
    deque<Card> player1, player2;
    struct MatchData {
        Card pl1;
        Card pl2;
    };

    const map<wstring, int> cardValues{
        {L"Ace", 14},
        {L"2", 2},
        {L"3", 3},
        {L"4", 4},
        {L"5", 5},
        {L"6", 6},
        {L"7", 7},
        {L"8", 8},
        {L"9", 9},
        {L"10", 10},
        {L"Jack", 11},
        {L"Queen", 12},
        {L"King", 13}
    };
    const array<wstring, 4> suit = {L"Hearts", L"Diamonds", L"Clubs", L"Spades"};

    War() {
        int i = 0;
        for (wstring s : suit) {
            for (const auto &[f, v] : cardValues) {
                deck.push_back({f,s});
                i++;
            }
        }
        War::displayDeck();
        War::shuffle();
        War::displayDeck();
    }

    bool winCondition() {
        if (player1.size() <= 0 || player2.size() <= 0) {
            return false;
        }
        return true;
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
        wcout << endl << endl;
    }

    void displayDeck() {
        wcout << format(
            L"\u250C{:\u2500<23}\u252C{:\u2500<23}\u252C{:\u2500<23}\u252C{:\u2500<23}\u2510",
            L"",
            L"",
            L"",
            L""
        ) << endl;

        for (int i = 0; i < 12; i++) {
            wcout << L"\u2502 ";
            for (int y = 0; y < (13 * 4); y += 13) {
                wcout << format(
                    L"{:>3} {:>5} of {:<8} \u2502 ",
                    std::to_wstring(i + y + 1) + L":",
                    deck[i + y].face, deck[i + y].suit
                );
            }
            wcout << endl;
        }

        wcout << format(
            L"\u2514{:\u2500<23}\u2534{:\u2500<23}\u2534{:\u2500<23}\u2534{:\u2500<23}\u2518",
            L"",
            L"",
            L"",
            L""
        ) << endl;
        wcout << endl << endl;
    }

    void displayPlayerDecks() {
        wcout << format(L"\u250C{:\u2500<23}\u252C{:\u2500<23}\u2510", L"", L"") << endl << format(L"\u2502{: ^23}\u2502{: ^23}\u2502", L"Player 1", L"Player 2") << endl << format(L"\u251C{:\u2500<23}\u253C{:\u2500<23}\u2524", L"", L"") << endl;

        for (int i = 0; i < (std::max(player1.size(), player2.size())); i++) {
            wcout << L"\u2502 ";
            if (i < player1.size()) {
                wcout << format(L"{:>3} {:>5} of {:<8} \u2502 ", std::to_wstring(i + 1) + L":", player1[i].face, player1[i].suit);
            }
            else {
                wcout << format(L"{:>22}\u2502 ", L"");
            }
            if (i < player2.size()) {
                wcout << format(L"{:>3} {:>5} of {:<8} \u2502 ", std::to_wstring(i + 1) + L":", player2[i].face, player2[i].suit);
            }
            else {
                wcout << format(L"{:>22}\u2502 ", L"");
            }
            wcout << endl;
        }
        wcout << format(L"\u2514{:\u2500<23}\u2534{:\u2500<23}\u2518", L"", L"") << endl;
    }

    void deal() {
        wcout << "Dealing the Deck..." << endl;
        int i = 0;
        for (Card card : deck) {
            if (i % 2 == 0) {
                player1.push_back(card);
                deck.pop_front();
            }
            else {
                player2.push_back(card);
                deck.pop_front();
            }
            i++;
        }
        displayPlayerDecks();
    }

    void swabTheDeques() {
        for (deque<Card>::iterator it = player1.begin(); it != player1.end(); it++) {
            if (it->face.empty()) {
                player1.erase(it);
            }
        }
        for (deque<Card>::iterator it = player2.begin(); it != player2.end(); it++) {
            if (it->face.empty()) {
                player2.erase(it);
            }
        }
        for (deque<Card>::iterator it = player1.begin(); it != player1.end(); it++) {
            if (it->face.empty()) {
                player1.erase(it);
            }
        }
        for (deque<Card>::iterator it = player2.begin(); it != player2.end(); it++) {
            if (it->face.empty()) {
                player2.erase(it);
            }
        }
    }

    void battle() {
        wcout << format(
            L"\u250C{:\u2500<49}\u2510",
            L""
        ) << endl;
        wcout << format(
            L"\u2502{: ^49}\u2502",
            L"Battle!"
        ) << endl;
        wcout << format(
            L"\u251C{:\u2500<49}\u2524",
            L""
        ) << endl;

        int round = 1;
        while (winCondition()) {
            player1.shrink_to_fit();
            player2.shrink_to_fit();
            wcout << format(
                L"\u2502{: ^49}\u2502",
                format(
                L"Round {:>2}",
                round
            )
            ) << endl;
            wcout << format(
                L"\u251C{:\u2500<19}\u252C{:\u2500^9}\u252C{:\u2500<19}\u2524",
                L"",
                L"",
                L"",
                L""
            ) << endl;
            wcout << format(
                L"\u2502{:^19}\u2502{:^9}\u2502{:^19}\u2502",
                L"Player 1",
                L"",
                L"Player 2"
            ) << endl;
            round++;

            MatchData match = {player1.front(), player2.front()};
            player1.pop_front();
            player2.pop_front();
            if (cardValues.at(match.pl1.face) > cardValues.at(match.pl2.face)) {
                wcout << format(
                    L"\u251C{:\u2500<19}\u2524<-Winner \u251C{:\u2500<19}\u2524",
                    L"",
                    L"",
                    L"",
                    L""
                ) << endl;
                wcout << format(
                    L"\u2502 {:>5} of {:<8} \u2502{:^9}\u2502 {:>5} of {:<8} \u2502",
                    match.pl1.face,
                    match.pl1.suit,
                    L"",
                    match.pl2.face,
                    match.pl2.suit
                ) << endl;
                wcout << format(
                L"\u251C{:\u2500<19}\u2534{:\u2500^9}\u2534{:\u2500<19}\u2524",
                L"",
                L"",
                L"",
                L""
                ) << endl;
                player1.push_back(match.pl1);
                player1.push_back(match.pl2);
            }
            else if (cardValues.at(match.pl1.face) < cardValues.at(match.pl2.face)) {
                wcout << format(
                    L"\u251C{:\u2500<19}\u2524 Winner->\u251C{:\u2500<19}\u2524",
                    L"",
                    L"",
                    L"",
                    L""
                ) << endl;
                wcout << format(
                    L"\u2502 {:>5} of {:<8} \u2502{:^9}\u2502 {:>5} of {:<8} \u2502",
                    match.pl1.face,
                    match.pl1.suit,
                    L"",
                    match.pl2.face,
                    match.pl2.suit
                ) << endl;
                wcout << format(
                L"\u251C{:\u2500<19}\u2534{:\u2500^9}\u2534{:\u2500<19}\u2524",
                L"",
                L"",
                L"",
                L""
                ) << endl;
                player2.push_back(match.pl1);
                player2.push_back(match.pl2);
            }
            else {
                wcout << format(
                    L"\u251C{:\u2500<19}\u2524 ->---<- \u251C{:\u2500<19}\u2524",
                    L"",
                    L"",
                    L"",
                    L""
                ) << endl;
                wcout << format(
                    L"\u2502 {:>5} of {:<8} \u2502{:^9}\u2502 {:>5} of {:<8} \u2502",
                    match.pl1.face,
                    match.pl1.suit,
                    L"",
                    match.pl2.face,
                    match.pl2.suit
                ) << endl;
                wcout << format(
                L"\u251C{:\u2500<19}\u2534{:\u2500^9}\u2534{:\u2500<19}\u2524",
                L"",
                L"",
                L"",
                L""
                ) << endl;
                wcout << format(
                    L"\u2502{: ^49}\u2502",
                    L"WAR!"
                ) << endl;
                wcout << format(
                    L"\u251C{:\u2500<49}\u2524",
                    L""
                ) << endl;
                war();
            }
            if (round % 10 == 0) {
                wcout << endl << endl;
                swabTheDeques();
                displayPlayerDecks();
                system("pause");
                wcout << endl << endl;
            }
        }
    }

    bool war() {
        array<MatchData, 5> warData;
        warData[0] = {player1.front(), player2.front()};
        warData[1] = {player1.at(1), player2.at(1)};
        warData[2] = {player1.at(2), player2.at(2)};
        warData[3] = {player1.at(3), player2.at(3)};
        // 3 cards face down, 1 card face up

        for (int i = 0; i < 4; i++) {
            player1.pop_front();
            player2.pop_front();
        }

        for (MatchData match : warData) {
            if (cardValues.at(match.pl1.face) > cardValues.at(match.pl2.face)) {
                wcout << format(
                    L"\u251C{:\u2500<19}\u2524<-Winner \u251C{:\u2500<19}\u2524",
                    L"",
                    L"",
                    L"",
                    L""
                ) << endl;
                wcout << format(
                    L"\u2502 {:>5} of {:<8} \u2502{:^9}\u2502 {:>5} of {:<8} \u2502",
                    match.pl1.face,
                    match.pl1.suit,
                    L"",
                    match.pl2.face,
                    match.pl2.suit
                ) << endl;
                wcout << format(
                L"\u251C{:\u2500<19}\u2534{:\u2500^9}\u2534{:\u2500<19}\u2524",
                L"",
                L"",
                L"",
                L""
                ) << endl;
                for (MatchData item : warData) {
                    player1.push_back(item.pl1);
                    player1.push_back(item.pl2);
                }
                return true;
            }
            else if (cardValues.at(match.pl1.face) < cardValues.at(match.pl2.face)) {
                wcout << format(
                    L"\u251C{:\u2500<19}\u2524 Winner->\u251C{:\u2500<19}\u2524",
                    L"",
                    L"",
                    L"",
                    L""
                ) << endl;
                wcout << format(
                    L"\u2502 {:>5} of {:<8} \u2502{:^9}\u2502 {:>5} of {:<8} \u2502",
                    match.pl1.face,
                    match.pl1.suit,
                    L"",
                    match.pl2.face,
                    match.pl2.suit
                ) << endl;
                wcout << format(
                L"\u251C{:\u2500<19}\u2534{:\u2500^9}\u2534{:\u2500<19}\u2524",
                L"",
                L"",
                L"",
                L""
                ) << endl;
                for (MatchData item : warData) {
                    player2.push_back(item.pl1);
                    player2.push_back(item.pl2);
                }
                return true;
            }
            else {
                wcout << format(
                    L"\u251C{:\u2500<19}\u2524 ->---<- \u251C{:\u2500<19}\u2524",
                    L"",
                    L"",
                    L"",
                    L""
                ) << endl;
                wcout << format(
                    L"\u2502 {:>5} of {:<8} \u2502{:^9}\u2502 {:>5} of {:<8} \u2502",
                    match.pl1.face,
                    match.pl1.suit,
                    L"",
                    match.pl2.face,
                    match.pl2.suit
                ) << endl;
                wcout << format(
                L"\u251C{:\u2500<19}\u2534{:\u2500^9}\u2534{:\u2500<19}\u2524",
                L"",
                L"",
                L"",
                L""
                ) << endl;
            }
        }

        bool winner = war();
        if (winner) {
            for (MatchData item : warData) {
                player1.push_back(item.pl1);
                player1.push_back(item.pl2);
            }
        }
        else {
            for (MatchData item : warData) {
                player2.push_back(item.pl1);
                player2.push_back(item.pl2);
            }
        }
    }
};


int main() {
    _setmode(_fileno(stdout), _O_U16TEXT);

    War deck;
    deck.deal();
    deck.displayPlayerDecks();

    deck.battle();

    return 0;
}


