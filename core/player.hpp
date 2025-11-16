#pragma once
#include <string>
#include "Symbol.hpp"

class Player {
    std::string _name;
    Symbol _symbol;
public:
    Player() : _name("Default"), _symbol(Symbol::Empty) {}
    Player(const std::string& name, Symbol symbol) : _name(name), _symbol(symbol) {}
    Player(const Player& o) : _name(o._name), _symbol(o._symbol) {}
    ~Player() = default;
    Player& operator=(const Player& o) {
        if (this != &o) {
            _name = o._name;
            _symbol = o._symbol;
        }
        return *this;
    }
    bool operator==(const Player& o) const;
    std::string GetName() const { return _name; }
    Symbol GetSymbol() const { return _symbol; }
    friend std::istream& operator>>(std::istream& in, Player& p);
    friend std::ostream& operator<<(std::ostream& out, const Player& p);
};