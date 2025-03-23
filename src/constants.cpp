//
// Created by cjgam on 3/22/2025.
//

#include <vector>
#include <functional>
#include "Card.h"

const std::vector<Card> deckOfCards = std::invoke([]() {
    std::vector<Card> deckToReturn;

    for (const Suit& suit : allSuits) {
        for (const Rank& rank : allRanks) {
            deckToReturn.emplace_back(rank, suit);
        }
    }

    return deckToReturn;
});