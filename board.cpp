#include "Board.hpp"

std::istream& operator>>(std::istream& in, Board& b) {
    int val;
    for (auto& row : b._grid)
        for (auto& cell : row)
            if (in >> val) cell = static_cast<Symbol>(val);
    return in;
}

std::ostream& operator<<(std::ostream& out, const Board& b) {
    for (const auto& row : b._grid) {
        for (Symbol cell : row)
            out << static_cast<int>(cell) << " ";
        out << "\n";
    }
    return out;
}