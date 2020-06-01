#include <iostream>
#include <vector>

#include "Player.h"
#include "Banker.h"
#include "Field.h"
#include "boardCreator.h"

int initial_balance = 150;

int main() {

    std::vector<Field> board = boardCreator();

    Player p1("Red", initial_balance);
    Player p2("Green", initial_balance);

    Banker Bank;

// Move Simulation
    p1.movePlayer(3);
    std::cout << std::endl;

    board[3].displyFieldData();
    std::cout << std::endl;

    Bank.payDay(board[3], p1, p2);
    std::cout << std::endl;

    Bank.giveFieldToPlayer(board[3],p1);
    std::cout << std::endl;

    board[3].displyFieldData();
    std::cout << std::endl;


    p2.movePlayer(4);
    std::cout << std::endl;
    board[4].displyFieldData();
    std::cout << std::endl;
    Bank.payDay(board[4], p2, p1);
    std::cout << std::endl;


    p1.showBalance();
    p2.showBalance();
    std::cout << std::endl;

    p1.showFields();
    p2.showFields();
    std::cout << std::endl;

    return 0;
}
