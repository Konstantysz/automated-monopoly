#include <iostream>
#include <vector>

#include "Field.h"
#include "boardCreator.h"

std::vector<Field> boardCreator() {
    std::vector<Field> Board;

    for(int i = 0; i < 16; i++){
        int id = i;
        bool buyable = ((i == 0))||(i % 4 == 0) ? false : true;
        Board.push_back(Field(id, buyable));
    }

    return Board;
}