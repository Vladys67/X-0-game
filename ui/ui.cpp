#include "UI.hpp"
#include "../core/Board.hpp"
#include <iostream>

void UI::ShowBoard(const Board& b) {
    std::cout << b;
}

void UI::ShowMessage(const std::string& m) {
    std::cout << m << std::endl;
}