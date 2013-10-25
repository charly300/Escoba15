#ifndef CARD_H
#define CARD_H

class Card
{
public:
    Card();
    int getValue(void);
private:
    int suit;
    int num;
    int value;
};

#endif // CARD_H
