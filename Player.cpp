#include <iostream>
#include "Player.h"

Player::Player(std::string c, int b){
    this->color = c;
    this->balance = b;
}

Player::~Player(){}

void Player::showBalance(){
    std::cout << color << " player balance: " << balance << std::endl;
    std::cout << std::endl;
}

void Player::showFields(){
    for(int i; i<owned_fields.size(); i++)
    {
        std::cout << owned_fields[i].id << " " << std::endl;
    }
    std::cout << std::endl;
}
