#ifndef CARD_H
#define CARD_H

class Card
{
public:
    Card();
    int getValue(void);
    void setValue(const int);
    int getNum(void);
    void setNum(const int);
    int getSuit(void);
    void setSuit(const int);
    /////////////////////
    void print(void);
private:
    int suit;
    int num;
    int value;
};

#endif // CARD_H
