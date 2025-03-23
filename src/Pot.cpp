//
// Created by cjgam on 3/22/2025.
//

#include "Pot.h"

Pot::Pot(const std::vector<Chip>& chips) : chips(chips), total(0) {}

void Pot::addChips(const Chip&... chips) {
    this->chips.push_back(chips);
}
