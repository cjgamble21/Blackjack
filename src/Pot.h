//
// Created by cjgam on 3/22/2025.
//

#ifndef POT_H
#define POT_H

#include <vector>
#include "enums.cpp"

class Pot {
    std::vector<Chip> chips;
    unsigned int total;
public:
    explicit Pot(const std::vector<Chip>& chips);
    void addChips(const Chip&... chips);
    unsigned int getTotal();
};



#endif //POT_H
