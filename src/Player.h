//
// Created by cjgam on 3/22/2025.
//

#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"
#include "Pot.h"

class Player {
    std::vector<Card> hand;
    Pot chips;

    Player();
};



#endif //PLAYER_H
