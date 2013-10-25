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
    int cant;
    Card *deck;
};

#endif // DECK_H
