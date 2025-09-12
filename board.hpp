#pragma once
#include "cell.hpp"

class Board {
    Cell _grid[3][3]; // tabla 3x3
public:
    Board();

    bool PlaceSymbol(int row, int col, Cell symbol);
    Cell GetCell(int row, int col) const;
    bool IsFull() const;
    void Clear();
};
