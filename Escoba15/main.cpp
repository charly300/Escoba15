#include <iostream>
#include "card.h"


using namespace std;

int main()
{
    Card *aCard = NULL;

    aCard = new Card;

    cout << aCard->getValue() << endl;

    delete aCard;

    return 0;
}

