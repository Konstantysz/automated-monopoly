#include <vector>

#include "singleTurn.h"
#include "Banker.h"
#include "Field.h"

void singleTurn(Player &p_m, int id, Player &p_o, Banker ba, std::vector<Field> bo){
    p_m.movePlayer(id);
    std::cout << std::endl;

    bo[id].displyFieldData();
    std::cout << std::endl;

    ba.payDay(bo[id], p_m, p_o);
    std::cout << std::endl;

    ba.giveFieldToPlayer(bo[id], p_m);
    std::cout << std::endl;

    bo[id].displyFieldData();
    std::cout << std::endl;
}

void titleDraw(){
    std::cout << std::endl;
    std::cout << "___  ___                              _       " << std::endl;
    std::cout << "|  \\/  |                             | |      " << std::endl;
    std::cout << "| .  . | ___  _ __   ___  _ __   ___ | |_   _ " << std::endl;
    std::cout << "| |\\/| |/ _ \\| '_ \\ / _ \\| '_ \\ / _ \\| | | | |" << std::endl;
    std::cout << "| |  | | (_) | | | | (_) | |_) | (_) | | |_| |" << std::endl;
    std::cout << "\\_|  |_/\\___/|_| |_|\\___/| .__/ \\___/|_|\\__, |" << std::endl;
    std::cout << "                         | |             __/ |" << std::endl;
    std::cout << "                         |_|            |___/ " << std::endl;
    std::cout << std::endl;
}