#pragma once
#include <iostream>
#include "Symbol.hpp"

class Board {
    Symbol _grid[3][3];
public:
    Board();                               
    Board(const Board& other);             
    Board(Symbol grid[3][3]);              
    ~Board() = default;

    Board& operator=(const Board& other);  
    bool operator==(const Board& other) const; 

    bool PlaceSymbol(int r, int c, Symbol s);
    Symbol GetCell(int r, int c) const;
    bool IsFull() const;
    void Clear();

    friend std::istream& operator>>(std::istream& in, Board& b);
    friend std::ostream& operator<<(std::ostream& out, const Board& b);
};
