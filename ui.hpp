#pragma once
#include "AbstractRenderer.hpp"

class UI : public AbstractRenderer {
public:
    void DrawBoard(const Board& board) override;
    void ShowMessage(const std::string& msg) override;
};
