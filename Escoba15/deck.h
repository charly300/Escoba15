#ifndef DECK_H
#define DECK_H

#include "card.h"

class Deck
{
public:
    Deck();
    ~Deck();
protected:
    Card *deck;
    int cant;
public:
    void printAll(void);
};

#endif // DECK_H
