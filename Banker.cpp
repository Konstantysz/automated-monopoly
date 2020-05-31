#include <iostream>
#include "Banker.h"

Banker::Banker(){}

Banker::~Banker(){}

void Banker::changeBalance(Player &p, int m){
    if(p.balance < m){std::cout << "Not enough money!" << std::endl;}
    else{
        p.balance += m;
        std::cout << "Transfer completed!"<< std::endl;
        if(m<0){
            std::cout << "Taken " << abs(m) << " from " << p.color << " account" <<std::endl;
        } else {
            std::cout << "Given " << m << " to " << p.color << " account" <<std::endl;
        }
    }
    std::cout << std::endl;
}

void Banker::giveFieldToPlayer(Field &f, Player &p){
    this->changeBalance(p, -f.price);
    p.owned_fields.push_back(f);
    f.owner = p.color;
}