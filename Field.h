#include <iostream>

#ifndef AUTOMATED_MONOPOLY_FIELD_H
#define AUTOMATED_MONOPOLY_FIELD_H

class Field {
private:
    int id;
    int price;
    std::string owner;
    bool on_sale;
public:
    Field(int, bool=false, int = 1, std::string = "None");
    ~Field();
    void displyFieldData();
    friend class Player;
    friend class Banker;
};


#endif //AUTOMATED_MONOPOLY_FIELD_H
