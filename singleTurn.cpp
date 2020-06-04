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