#include <iostream>
#include "Player.h"

Player::Player(std::string col, int bal, int pos, int l_pos){
    this->color = col;
    this->balance = bal;
    this->current_position = pos;
    this->last_turn_position = l_pos;
}

Player::~Player(){}

void Player::showBalance(){
    std::cout << color << " player balance: " << balance << std::endl;
}

void Player::showFields(){
    std::cout << "Fields indices owned by player " << color << ": ";
    if(owned_fields.size() != 0){
        for(int i = 0; i< owned_fields.size(); i++)
        {
            std::cout << owned_fields[i].id << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "None" << std::endl;
    }
}

void Player::movePlayer(int index){
    if((index < 0)&&(index>16)) {std::cout << "Wrong index" << std::endl;}
    last_turn_position = current_position;
    current_position = index;
    std::cout << "Player " << color << " moved from " << last_turn_position << " to " << current_position << std::endl;
}