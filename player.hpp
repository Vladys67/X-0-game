#pragma once
#include <string>
#include "symbol.hpp"

class Player {
    std::string _name;
    Symbol _symbol;   
public:
    Player(const std::string& name, Symbol symbol);

    std::string GetName() const;
    Symbol GetSymbol() const;
};
