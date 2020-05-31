#include <iostream>
#include <vector>

#include "Field.h"

#ifndef AUTOMATED_MONOPOLY_PLAYER_H
#define AUTOMATED_MONOPOLY_PLAYER_H

class Player {
private:
    std::string color;
    int balance;
    std::vector<Field> owned_fields;
    int last_turn_position;
    int current_position;

public:
    Player(std::string, int = 0, int = 0);
    ~Player();
    void showBalance();
    void showFields();
    void movePlayer(int);

    friend class Banker;
};


#endif //AUTOMATED_MONOPOLY_PLAYER_H
