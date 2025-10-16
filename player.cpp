#include "Player.hpp"

Player::Player() : _name("Anonim"), _symbol(Symbol::Empty) {}

Player::Player(const std::string& name, Symbol symbol)
    : _name(name), _symbol(symbol) {}

Player::Player(const Player& other)
    : _name(other._name), _symbol(other._symbol) {}

Player& Player::operator=(const Player& other) {
    if (this != &other) {
        _name = other._name;
        _symbol = other._symbol;
    }
    return *this;
}
bool Player::operator==(const Player& other) const {
    return _name == other._name && _symbol == other._symbol;
}

std::string Player::GetName() const { return _name; }
Symbol Player::GetSymbol() const { return _symbol; }

std::istream& operator>>(std::istream& in, Player& player) {
    std::string name;
    int sym;
    in >> name >> sym;
    player = Player(name, static_cast<Symbol>(sym));
    return in;
}
std::ostream& operator<<(std::ostream& out, const Player& player) {
    out << player._name << " (" << static_cast<int>(player._symbol) << ")";
    return out;
}
