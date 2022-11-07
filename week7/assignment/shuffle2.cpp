// shuffle2.cpp  Version 2 of Shuffle...

#include <iostream>
#include <iomanip>				// for setw

using namespace std;

struct Card 
{
	char f;
	char s;
};

void filldeck(Card [], char [], char []);
void shuffle(Card []);
void deal(Card []);
void display(Card []);


int main()
{
	Card deck[52];

	char face[13] =
		{'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
		
	char suit[4] = {'H', 'D', 'C', 'S'};

	filldeck(deck, face, suit);
	display ( deck );
	
	shuffle( deck );
	
	display ( deck );
	
	deal( deck );
	
	return 0;
}

void filldeck(Card wDeck[], char wFace[], char wSuit[])
{
	for (int i = 0; i < 52; i++)
	{
		wDeck[i].f = wFace[ i % 13 ];
		wDeck[i].s = wSuit[ i / 13 ];
	}
}
void shuffle(Card wDeck [])
{
	cout << "Shuffle the Deck..." << endl;
	srand( time(0) );
	for (int i = 0; i < 52; i++)
	{
		int j = rand() % 52;
		Card temp = wDeck[ i ];
		wDeck[ i ] = wDeck[ j ];
		wDeck[ j ] = temp;
	}
	cout << endl << "  - - - - - " << endl;
}	

void deal(Card wDeck [] )
{
	cout << "The Deal..." << endl;
	
	for(int i = 0; i < 52; i++)
	{
		cout <<  setw(2) << wDeck[ i ].f << " of " << wDeck[i].s << " - ";
		
		if((i == 4) ||  (i == 9) || (i == 14) || (i == 19) || (i == 24) || (i == 29) ||
			(i == 34) || (i == 39) || (i == 44) || (i == 49) || (i == 52))
			cout << endl;
	}

	cout << endl << "  - - - - - " << endl;
}

void display(Card wDeck [ ] )
{
	cout << "Display the Deck..." << endl;
	for(int i = 0; i < 52; i++)
	{
		cout <<  setw(2) << wDeck[ i ].f << " of " << wDeck[i].s << " - ";
		
		if((i == 12) || (i == 25) || (i == 38))
			cout << endl;
	}
	cout << endl << "  - - - - - " << endl;
	return;
}
