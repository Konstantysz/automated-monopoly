#include <iostream>
#include <vector>

#include "Player.h"
#include "Banker.h"
#include "Field.h"
#include "boardCreator.h"

int initial_balance = 200;

int main() {

    std::vector<Field> board = boardCreator();

    Player p1("Red", initial_balance);
    Player p2("Green", initial_balance);

    Banker B;

    p1.showFields();
    board[1].displyFieldData();
    B.giveFieldToPlayer(board[1],p1);
    B.giveFieldToPlayer(board[3],p1);
    p1.showFields();
    board[1].displyFieldData();

    return 0;
}
