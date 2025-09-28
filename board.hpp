#pragma once
#include "symbol.hpp"

class Board {
    Symbol _grid[3][3]; 
public:
    Board();

    bool PlaceSymbol(int row, int col, Symbol symbol);
    Symbol GetCell(int row, int col) const;
    bool IsFull() const;
    void Clear();
};
