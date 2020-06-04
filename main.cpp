#include <iostream>
#include <vector>

#include "Player.h"
#include "Banker.h"
#include "Field.h"

#include "boardCreator.h"
#include "singleTurn.h"

const int initial_balance = 150;



int main() {
    std::vector<Field> board = boardCreator();
    Banker Bank;

    Player p1("Red", initial_balance);
    Player p2("Green", initial_balance);

    titleDraw();
    singleTurn(p1, 3, p2, Bank, board);

    return 0;
}
