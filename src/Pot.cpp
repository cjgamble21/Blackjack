//
// Created by cjgam on 3/22/2025.
//

#include "Pot.h"

#include <numeric>

Pot::Pot(const std::vector<Chip>& chips) : chips(chips), total(0) {}

void Pot::addChips(const Chip&... chips) {
    this->chips.push_back(chips);
}

unsigned int Pot::getTotal() {
    return std::accumulate(this->chips.begin(), this->chips.end(), 0);
}
