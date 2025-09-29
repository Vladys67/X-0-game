#include "Board.hpp"

Board::Board() { Clear(); }

bool Board::PlaceSymbol(int row, int col, Symbol symbol) { _grid[row][col] = symbol; return true; }
Symbol Board::GetCell(int row, int col) const { return _grid[row][col]; }
bool Board::IsFull() const { return false; }
void Board::Clear() {}
