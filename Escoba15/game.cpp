#include "game.h"

Game::Game()
{
    aDeck = new Deck;
    players = new Player[2];
    actualPlayer = 0;
    aDeck->shuffle();
}

Game::~Game()
{
    delete aDeck;
    delete [] players;
}
