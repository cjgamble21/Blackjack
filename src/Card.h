//
// Created by cjgam on 3/22/2025.
//

#ifndef CARD_H
#define CARD_H

#include "enums.cpp"

struct Card {
    Rank rank;
    Suit suit;

    Card(Rank rank, Suit suit);
};



#endif //CARD_H
