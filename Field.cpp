#include <iostream>
#include "Field.h"

Field::Field(int i, bool os, int p, std::string o){
    this->id=i;
    this->on_sale=os;
    this->price=p;
    this->owner=o;
}

Field::~Field(){}

void Field::displyFieldData() {
    std::cout << "Field id: " << id << std::endl;
    std::cout << "Price: " << price << std::endl;
    std::cout << "Owner: " << owner << std::endl;
    std::string on_sale_bool = (on_sale) ? "Yes" : "No";
    std::cout << "Is it on sale?: " << on_sale_bool;
}
