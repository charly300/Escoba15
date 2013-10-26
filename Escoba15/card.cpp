#include "card.h"
#include <iostream>

using namespace std;

Card::Card()
{
}

//SETS Y GETS
int Card::getValue(void)
{
    return value;
}

void Card::setValue(const int value)
{
    this->value = value;
}
////////////////////////////////////

int Card::getNum()
{
    return this->num;
}
void Card::setNum(const int num)
{
    this->num = num;
}
///////////////////////////////////
int Card::getSuit()
{
    return this->suit;
}
void Card::setSuit(const int suit)
{
    this->suit = suit;
}
/////////////////////////////////////
void Card::print(void)
{
    cout << suit << " - " << num << endl;
}
