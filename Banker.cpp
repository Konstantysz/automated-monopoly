#include <iostream>
#include "Banker.h"

Banker::Banker(){}

Banker::~Banker(){}

void Banker::changeBalance(Player &p, int m){
    p.balance += m;
    std::cout << "Transfer completed!" << std::endl;
    std::cout << std::endl;
}

void Banker::giveFieldToPlayer(Field &f, Player &p){
    this->changeBalance(p, f.price);
    p.owned_fields.push_back(f);
    f.owner = p.color;
}