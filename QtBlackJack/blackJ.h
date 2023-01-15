#pragma once
#include "card.h"
#include "deck.h"

class BlackJack
{
private:
    const int MAX_HAND_VALUE;
    std::vector<Card> cards;
public:
    bool hit;
    BlackJack();
    int get_score();
    std::vector<Card> get_Cards();
    void AddCard(Card); 
    void ShowFirstCard(); 
    void ShowAllCards();
    void HitOrNot(Deck);
    void Print();
};