#pragma once
#include "rank.h"
#include <QString>


class Card
{
private:
    bool faceUp;
    int blackJackValue;
public:
    Rank rank;
    Suit suit;
    Card(Rank, Suit);
    QString get_rank();
    QString get_suit();
    bool get_faceUp();
    int get_blackJackValue();
    QString get_card_image();
    void FlipOver();
    void Print();
    Card& operator = (Card b) {
        this->rank = b.rank;
        this->suit = b.suit;
        return *this;
    }
};