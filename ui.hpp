#pragma once
#include "board.hpp"
#include <string>

class UI {
public:
    void ShowBoard(const Board& board);
    void ShowMessage(const std::string& msg);
};
