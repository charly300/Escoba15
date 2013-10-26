#include <iostream>
#include "card.h"
#include "deck.h"
#include "deckSpanish.h"

using namespace std;

int main()
{
    DeckSpanish *aDeck = NULL;

    aDeck = new DeckSpanish;

    aDeck->shuffle();
    aDeck->printAll();

    return 0;
}

