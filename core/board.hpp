#pragma once
#include <array>
#include <iostream>
#include <algorithm>
#include "Symbol.hpp"

class Board {
    std::array<std::array<Symbol, 3>, 3> _grid{};
public:
    Board() { Clear(); }
    Board(const Board& o) { std::copy(o._grid.begin(), o._grid.end(), _grid.begin()); }
    Board(Symbol g[3][3]) {
        for (int i=0; i<3; ++i)
            std::copy_n(g[i], 3, _grid[i].begin());
    }
    ~Board() = default;
    Board& operator=(const Board& o) {
        if (this != &o) std::copy(o._grid.begin(), o._grid.end(), _grid.begin());
        return *this;
    }
    bool operator==(const Board& o) const {
        return std::equal(_grid.begin(), _grid.end(), o._grid.begin());
    }
    bool PlaceSymbol(int r, int c, Symbol s) {
        if (_grid[r][c] == Symbol::Empty) { _grid[r][c] = s; return true; }
        return false;
    }
    Symbol GetCell(int r, int c) const { return _grid[r][c]; }
    bool IsFull() const {
        return std::all_of(_grid.begin(), _grid.end(),
            [](const auto& row) {
                return std::all_of(row.begin(), row.end(),
                    [](Symbol s) { return s != Symbol::Empty; });
            });
    }
    void Clear() {
        for (auto& row : _grid)
            std::fill(row.begin(), row.end(), Symbol::Empty);
    }
    friend std::istream& operator>>(std::istream& in, Board& b);
    friend std::ostream& operator<<(std::ostream& out, const Board& b);
};
