#include "Player.hpp"

Player::Player(const std::string& name, Symbol symbol)
    : _name(name), _symbol(symbol) {}

std::string Player::GetName() const { return _name; }
Symbol Player::GetSymbol() const { return _symbol; }
