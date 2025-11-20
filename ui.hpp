#pragma once
#include "Board.hpp"
#include <string>

class AbstractUI {
public:
    virtual void ShowBoard(const Board& board) = 0;
    virtual void ShowMessage(const std::string& msg) = 0;
    virtual ~AbstractUI() = default;
};
