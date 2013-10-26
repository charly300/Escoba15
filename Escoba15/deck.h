#ifndef DECK_H
#define DECK_H

#include "card.h"

class Deck
{
public:
    Deck();
    ~Deck();
    void printAll(void);
protected:
    Card *deck;
    int cant;
    void fill(void);
};

#endif // DECK_H
