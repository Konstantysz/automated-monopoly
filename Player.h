#include <iostream>

#ifndef AUTOMATED_MONOPOLY_PLAYER_H
#define AUTOMATED_MONOPOLY_PLAYER_H

class Field;

class Player {
private:
    std::string color;
    int balance;

public:
    Player(std::string, int = 0);
    ~Player();
};


#endif //AUTOMATED_MONOPOLY_PLAYER_H
