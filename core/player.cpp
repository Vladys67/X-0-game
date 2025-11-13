#include "Player.hpp"
#include <iostream>  

std::istream& operator>>(std::istream& in, Player& p) {
    std::string n; int s;
    if (in >> n >> s) p = {n, static_cast<Symbol>(s)};
    return in;
}

std::ostream& operator<<(std::ostream& out, const Player& p) {
    out << p._name << " (" << static_cast<int>(p._symbol) << ")";
    return out;
}

bool Player::operator==(const Player& o) const {
    return _name == o._name && _symbol == o._symbol;
}