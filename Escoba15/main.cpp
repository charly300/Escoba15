#include <iostream>
#include "card.h"
#include "deck.h"

using namespace std;

int main()
{
    Deck *aDeck = NULL;

    aDeck = new Deck;

    aDeck->printAll();

    delete aDeck;

    return 0;
}

