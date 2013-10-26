#include "player.h"
#include "card.h"
#include <iostream>

using namespace std;

Player::Player()
{
    score = 0;
}

//SET  Y GETS
int Player::getScore(void)
{
    return score;
}

void Player::orderCards(Deck *aDeck)
{
    for(int i = 0; i < 3; i++)
    {
        hand[i] = aDeck->getACard();
    }
}

Card* Player::getHandAt(int pos)
{
    return hand[pos];
}
