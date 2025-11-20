#pragma once
#include "abstract_ui.hpp"
#include <string>

class UI : public AbstractUI {
public:
    void ShowBoard(const Board& board) override;
    void ShowMessage(const std::string& msg) override;
};
