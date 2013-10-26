#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"
#include "deck.h"

class Player
{
public:
    Player();
    int getScore(void);
    void orderCards(Deck *);
    Card* getHandAt(int);
private:
    int score;
    Card *cards;
    Card *hand[3];
};

#endif // PLAYER_H
