//
// Created by cjgam on 3/22/2025.
//

#include <vector>

#define SUIT_LIST \
X(Spade)      \
X(Club)       \
X(Heart)      \
X(Diamond)

enum Suit {
#define X(name) name,
    SUIT_LIST
    #undef X
};

inline const std::vector<Suit> allSuits = {
#define X(name) name,
    SUIT_LIST
    #undef X
};

#define RANK_LIST \
X(One, 1)      \
X(Two, 2)      \
X(Three, 3)    \
X(Four, 4)     \
X(Five, 5)     \
X(Six, 6)      \
X(Seven, 7)    \
X(Eight, 8)    \
X(Nine, 9)     \
X(Ten, 10)     \
X(Jack, 10)    \
X(Queen, 10)   \
X(King, 10)    \
X(Ace, 11)

enum Rank {
#define X(name, val) name = val,
    RANK_LIST
    #undef X
};

inline const std::vector<Rank> allRanks = {
#define X(name, val) name,
    RANK_LIST
    #undef X
};


enum Chip {
    Blue = 1,
    Green = 5,
    Red = 10,
    Black = 20
};