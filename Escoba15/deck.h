#ifndef DECK_H
#define DECK_H

#include "card.h"
#define CANT_TOTAL  52

class Deck
{
public:
    Deck();
    ~Deck();
    void printAll(void);
    void shuffle(void);
    Card* getACard(void);
protected:
    Card *deck;
    int cantTotal;
    int cantNum;
    int pos;
    void fill(void);
};

#endif // DECK_H
