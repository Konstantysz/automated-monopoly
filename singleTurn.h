#include <vector>

#include "Field.h"
#include "Player.h"
#include "Banker.h"

#ifndef AUTOMATED_MONOPOLY_SINGLETURN_H
#define AUTOMATED_MONOPOLY_SINGLETURN_H

void singleTurn(Player &, int, Player &, Banker, std::vector<Field>);

void titleDraw();

#endif //AUTOMATED_MONOPOLY_SINGLETURN_H
