#include <iostream>
#include <vector>

#include "Field.h"
#include "boardCreator.h"

std::vector<Field> boardCreator() {
    std::vector<Field> Board;

    Field f0(0, false);
    Field f1(1, true);
    Field f2(2, true);
    Field f3(3, true);
    Field f4(4, false);
    Field f5(1, true);
    Field f6(2, true);
    Field f7(3, true);
    Field f8(4, false);
    Field f9(1, true);
    Field f10(2, true);
    Field f11(3, true);
    Field f12(4, false);
    Field f13(1, true);
    Field f14(2, true);
    Field f15(3, true);

    Board.push_back(f0);
    Board.push_back(f1);
    Board.push_back(f2);
    Board.push_back(f3);
    Board.push_back(f4);
    Board.push_back(f5);
    Board.push_back(f6);
    Board.push_back(f7);
    Board.push_back(f8);
    Board.push_back(f9);
    Board.push_back(f10);
    Board.push_back(f11);
    Board.push_back(f12);
    Board.push_back(f13);
    Board.push_back(f14);
    Board.push_back(f15);

    return Board;
}