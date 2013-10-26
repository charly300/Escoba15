#include "deck.h"
#include "card.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

Deck::Deck()
{
    cantNum = 13;
    cantTotal = 52;
    pos = 0;
    deck = new Card[cantTotal];
    this->fill();
}

Deck::~Deck()
{
    delete [] deck;
}
//////////////

void Deck::printAll(void)
{
    for(int i = 0; i < cantTotal; i++){
        cout << i << ") " << deck[i].getSuit() << " - " << deck[i].getNum() << endl;
    }
}
///////////////////////

void Deck::fill(void)
{
    for(int i = 0; i < cantTotal; i++)
    {
        deck[i].setNum(i % cantNum);
        deck[i].setSuit(i / cantNum);
    }
}

void Deck::shuffle(void)
{
    int j;
    Card aCardTmp;

    srand(time(NULL));

    for(int i = 0; i < cantTotal; i++){
        j = rand() % cantTotal;
        aCardTmp = deck[i];
        deck[i] = deck[j];
        deck[j] = aCardTmp;
    }
}
/////////////////////////////////////
Card* Deck::getACard(void)
{
    return &deck[pos++];
}
