//
// Created by cjgam on 3/22/2025.
//

#include <vector>
#include <algorithm>
#include <random>
#include "Card.h"

std::vector<Card> getDeckOfCards() {
    std::vector<Card> deckToReturn;

    for (const Suit& suit : allSuits) {
        for (const Rank& rank : allRanks) {
            deckToReturn.emplace_back(rank, suit);
        }
    }

    auto rd = std::random_device {};
    auto rng = std::default_random_engine {rd()};
    std::ranges::shuffle(deckToReturn.begin(), deckToReturn.end(), rng);

    return deckToReturn;
};