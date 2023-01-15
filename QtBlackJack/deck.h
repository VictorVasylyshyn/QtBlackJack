#pragma once
#include "card.h"
#include <vector>
#include <algorithm>    
#include <vector>       
#include <ctime>       
#include <cstdlib>     

class Deck
{
private:
    std::vector<Card> cards;
public:
    Deck();
    void Shuffle(); 
    void Print(); 
    Card TakeTopCard();
};
