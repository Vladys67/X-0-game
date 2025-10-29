#pragma once
#include "AbstractUI.hpp"

class UI : public AbstractUI {
public:
    void ShowBoard(const Board& b) override;
    void ShowMessage(const std::string& m) override;
};