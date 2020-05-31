#include <iostream>
#include "Player.h"
#include "Banker.h"
#include "Field.h"

int initial_balance = 200;

int main() {
    Field f1(1, true);
    Field f2(2, true);
    Field f3(3, true);
    Field f4(4, true);

    Player p1("Red", initial_balance);
    Player p2("Green", initial_balance);

    Banker B;

    p1.showFields();
    f2.displyFieldData();
    B.giveFieldToPlayer(f2,p1);
    B.giveFieldToPlayer(f4,p1);
    p1.showFields();
    f2.displyFieldData();

    return 0;
}
