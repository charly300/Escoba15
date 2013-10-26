#include <iostream>
#include "card.h"
#include "deck.h"
#include "deckSpanish.h"
#include "player.h"

using namespace std;

enum Suit{
    Hearts,
    Diamons,
    Clubs,
    Spades
};

int main()
{
    Deck *aDeck = NULL;
    Player *aPlayer = NULL;

    aDeck = new Deck;
    aDeck->shuffle();
    aPlayer = new Player;

    aPlayer->orderCards(aDeck);

    aDeck->printAll();

    aPlayer->getHandAt(2)->print();

    return 0;
}

