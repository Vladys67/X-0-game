#pragma once
#include <iostream>
#include <string>
#include "Symbol.hpp"

class Player {
    std::string _name;
    Symbol _symbol;  
public:

    Player();                                    
    Player(const std::string& name, Symbol symbol); 
    Player(const Player& other);                 
    ~Player() = default;
    Player& operator=(const Player& other);
    bool operator==(const Player& other) const;
    std::string GetName() const;
    Symbol GetSymbol() const;
    friend std::istream& operator>>(std::istream& in, Player& player);
    friend std::ostream& operator<<(std::ostream& out, const Player& player);
};
