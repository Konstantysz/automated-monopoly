#include <vector>

#include "singleTurn.h"
#include "Banker.h"
#include "Field.h"

std::vector<Field> board;
Banker Bank;

void singleTurn(Player &p_m, int id, Player &p_o){
    p_m.movePlayer(id);
    std::cout << std::endl;

    board[id].displyFieldData();
    std::cout << std::endl;

    Bank.payDay(board[id], p_m, p_o);
    std::cout << std::endl;

    Bank.giveFieldToPlayer(board[id], p_m);
    std::cout << std::endl;

    board[id].displyFieldData();
    std::cout << std::endl;
}