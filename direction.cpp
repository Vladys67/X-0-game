#include "Direction.hpp"
std::ostream& operator<<(std::ostream& out, const Direction& d) {
    switch(d) { case Direction::Horizontal: out << "Horizontal"; 
        break; case Direction::Vertical: out << "Vertical"; 
        break; case Direction::DiagonalMain: out << "DiagonalMain"; 
        break; case Direction::DiagonalSecondary: out << "DiagonalSecondary"; break; }
    return out;
}