#pragma once
#include "../core/Board.hpp"
#include <string>

class AbstractUI {
public:
    virtual ~AbstractUI() = default;
    virtual void ShowBoard(const Board& b) = 0;
    virtual void ShowMessage(const std::string& m) = 0;
};