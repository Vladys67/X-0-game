#pragma once
#include <string>
#include "cell.hpp"

class Player {
    std::string _name;
    Cell _symbol;   // X sau O
public:
    Player(const std::string& name, Cell symbol);

    std::string GetName() const;
    Cell GetSymbol() const;
};
