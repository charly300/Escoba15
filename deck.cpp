#include "deck.h"
#include <iostream>

using namespace std;

Deck::Deck()
{
    cant = 10;
    deck = new Card[cant];
}

Deck::~Deck()
{
    delete [] deck;
}

////////////////////

void Deck::printAll(void)
{
    for(int i = 0; i < cant; i++)
    {
        cout << i << ") " << deck[i].getValue() << endl;
    }
}
