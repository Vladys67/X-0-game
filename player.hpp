#pragma once
#include <iostream>
#include <string>
#include "Symbol.hpp"

class Player {
    std::string _name{"Anonim"};
    Symbol _symbol{Symbol::Empty};
public:
    Player() = default;
    Player(const std::string& name, Symbol symbol) : _name(name), _symbol(symbol) {}
    Player(const Player&) = default;
    ~Player() = default;
    Player& operator=(const Player&) = default;
    bool operator==(const Player& o) const = default;
    std::string GetName() const { return _name; }
    Symbol GetSymbol() const { return _symbol; }
    friend std::istream& operator>>(std::istream& in, Player& p);
    friend std::ostream& operator<<(std::ostream& out, const Player& p);
};