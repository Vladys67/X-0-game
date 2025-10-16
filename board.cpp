#include "Board.hpp"

Board::Board() { Clear(); }

Board::Board(const Board& o) { *this = o; }

Board::Board(Symbol g[3][3]) {
    for (int i=0;i<3;i++) for (int j=0;j<3;j++) _grid[i][j]=g[i][j];
}

Board& Board::operator=(const Board& o) {
    if (this != &o)
        for (int i=0;i<3;i++) for (int j=0;j<3;j++) _grid[i][j]=o._grid[i][j];
    return *this;
}

bool Board::operator==(const Board& o) const {
    for (int i=0;i<3;i++) for (int j=0;j<3;j++)
        if (_grid[i][j]!=o._grid[i][j]) return false;
    return true;
}

bool Board::PlaceSymbol(int r,int c,Symbol s){ _grid[r][c]=s; return true; }

Symbol Board::GetCell(int r,int c) const { return _grid[r][c]; }

bool Board::IsFull() const {
    for (int i=0;i<3;i++) for (int j=0;j<3;j++)
        if (_grid[i][j]==Symbol::Empty) return false;
    return true;
}

void Board::Clear() {
    for (auto& row:_grid)
        for (auto& cell:row)
            cell=Symbol::Empty;
}

std::istream& operator>>(std::istream& in, Board& b) {
    int val;
    for (auto& row:b._grid)
        for (auto& cell:row)
            if (in >> val) cell = static_cast<Symbol>(val);
    return in;
}

std::ostream& operator<<(std::ostream& out, const Board& b) {
    for (auto& row:b._grid) {
        for (auto cell:row) out << static_cast<int>(cell) << " ";
        out << "\n";
    }
    return out;
}

