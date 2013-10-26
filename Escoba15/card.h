#ifndef CARD_H
#define CARD_H

class Card
{
public:
    Card();
    int getValue(void);
    void setValue(int);
    int getNum(void);
    void setNum(int);
    int getSuit(void);
    void setSuit(int);
private:
    int suit;
    int num;
    int value;
};

#endif // CARD_H
