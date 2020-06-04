#include <iostream>
#include "Banker.h"

Banker::Banker(){}

Banker::~Banker(){}

void Banker::changeBalance(Player &p, int m){
    if(p.balance < m){std::cout << "Not enough money!" << std::endl;}
    else{
        p.balance += m;
        if(m<0){
            std::cout << "Taken " << abs(m) << " from " << p.color << " account" <<std::endl;
        } else {
            std::cout << "Given " << m << " to " << p.color << " account" <<std::endl;
        }
    }
}

void Banker::giveFieldToPlayer(Field &f, Player &p){
    if(f.on_sale) {
        this->changeBalance(p, -f.price);
        p.owned_fields.push_back(f);
        f.owner = p.color;
        f.on_sale = false;
        std::cout << "Player " << p.color << " now owns field: " << f.id << std::endl;
    } else {
        std::cout << "This field is not on sale!" << std::endl;
    }
}

void Banker::payDay(Field &f, Player &p_m, Player &p_o){
    if(f.owner == p_o.color){
        this->changeBalance(p_m,-f.price*0.4);
        this->changeBalance(p_o,f.price*0.4);
    }
}