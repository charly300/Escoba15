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
    DeckSpanish *aDeck = NULL;
    Card *aCard = NULL;
    Player *aPlayer = NULL;

    aDeck = new DeckSpanish;

    aDeck->shuffle();
    aDeck->printAll();

    cout << Hearts << endl;

    aCard = aDeck->getACard();
    aCard->print();

    aCard = aDeck->getACard();
    aCard->print();

    aPlayer = new Player;

    cout << "Score: " << aPlayer->getScore() << endl;

    return 0;
}

