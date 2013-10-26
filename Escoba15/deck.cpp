#include "deck.h"
#include "card.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

Deck::Deck()
{
    cant = 52;
    deck = new Card[cant];
    this->fill();
}

Deck::~Deck()
{
    delete [] deck;
}
//////////////

void Deck::printAll(void)
{
    for(int i = 0; i < cant; i++){
        cout << i << ") " << deck[i].getSuit() << " - " << deck[i].getNum() << endl;
    }
}
///////////////////////

void Deck::fill(void)
{
    for(int i = 0; i < cant; i++)
    {
        deck[i].setNum(i % 13);
        deck[i].setSuit(i / 13);
    }
}

void Deck::shuffle(void)
{
    int j;
    Card aCardTmp;

    srand(time(NULL));

    for(int i = 0; i < cant; i++){
        j = rand() % 52;
        aCardTmp = deck[i];
        deck[i] = deck[j];
        deck[j] = aCardTmp;
    }
}
