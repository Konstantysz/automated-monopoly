#include <iostream>
#include <vector>

#include "Player.h"
#include "Field.h"

#ifndef AUTOMATED_MONOPOLY_BANKER_H
#define AUTOMATED_MONOPOLY_BANKER_H

class Banker {
private:
    std::vector<Field> all_fields;

public:
    Banker();
    ~Banker();
    void changeBalance(Player &, int);
    void giveFieldToPlayer(Field &, Player &);
    void payDay(Field &, Player &, Player &);
};


#endif //AUTOMATED_MONOPOLY_BANKER_H
