//Shuffle.cpp  
//Example of Card Shuffling and Dealing (Version 1.0)

#include <iostream>
#include <iomanip>						// for getw

using namespace std;


int ctr = 0;		           // iteration counter

void shuffle( int[] [13] );

void deal(const int[] [13], const char [], const char []);

void display(int[] [13]);

int main()
{
	const char suit[4] =
	{'H', 'D', 'C', 'S'};								// 4 suits

	const char face[13] =
	{'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};	//13 faces

	int deck [4] [13] = {0};							//the Deck, 4x13

	display( deck );
	
	shuffle( deck);
	
	display( deck );
	
	deal(deck, face, suit);
	
	display( deck );
	
	cout << "# Interations:  " << ctr << endl;

	return 0;
}

void shuffle( int wDeck[] [13] )
{
	cout << "Shuffle Deck.." << endl;
	int row, column;
	
	srand( time(0) );

	for ( int card = 1; card <= 52; card++) {
		do {
			ctr++;
			row = rand() % 4;
			column = rand() % 13;
		}while( wDeck[row] [column] != 0);

		wDeck[row] [column] = card;
	}
}	

void deal(const int wDeck[] [13], const char wFace[],
		  const char wSuit[])
{
	cout << "Deal Deck.." << endl;
	for (int card = 1;card <= 52; card++)
		for (int row = 0; row <=3; row++)
			for (int column = 0; column <= 12; column++)

				if (wDeck[row] [column] == card)
				{
					cout << setw(5) << setiosflags(ios::right)
					<< wFace[column] << " of " << wSuit[row] << "  ";
					if (card % 2 == 0) 
						cout << endl;
				}
	cout << endl;
}

void display(int wdeck[] [13])
{
	cout << "Display  Deck.." << endl;
	for(int x = 0; x < 4; x++)
	{
		for(int y = 0; y < 13; y++)
		{
			cout << wdeck[x] [y] << "  ";
		}
		cout << endl;
	}
	cout << endl  << endl;
	return;
}
