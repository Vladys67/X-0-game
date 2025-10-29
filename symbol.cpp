#include "Symbol.hpp"
std::ostream& operator<<(std::ostream& out, const Symbol& s) {
    switch(s) { case Symbol::Empty: out << " "; 
        break; case Symbol::X: out << "X"; 
        break; case Symbol::O: out << "O"; break; }
    return out;
}