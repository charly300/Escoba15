#ifndef GAME_H
#define GAME_H

#include "player.h"
#include "deck.h"

enum NumberPlayer{
    PLAYER_ONE,
    PLAYER_TWO
};

class Game
{
public:
    Game();
    ~Game();
private:
    Deck *aDeck;
    Player *players;
    int actualPlayer;

    void initialize(void);
};

#endif // GAME_H
