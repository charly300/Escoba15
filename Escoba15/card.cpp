#include "card.h"

Card::Card()
{
    value = 18;
}

//SETS Y GETS
int Card::getValue(void)
{
    return value;
}

void Card::setValue(int value)
{
    this->value = value;
}
////////////////////////////////////

int Card::getNum()
{
    return this->num;
}
void Card::setNum(int num)
{
    this->num = num;
}
///////////////////////////////////
int Card::getSuit()
{
    return this->suit;
}
void Card::setSuit(int suit)
{
    this->suit = suit;
}
