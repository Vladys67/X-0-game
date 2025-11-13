#include "Symbol.hpp"  // Include header-ul cu declarațiile

std::ostream& operator<<(std::ostream& out, const Symbol& s) {
    switch(s) {
        case Symbol::Empty: out << " "; break;
        case Symbol::X: out << "X"; break;
        case Symbol::O: out << "O"; break;
    }
    return out;
}

bool operator==(Symbol lhs, Symbol rhs) {
    return static_cast<int>(lhs) == static_cast<int>(rhs);
}

bool operator!=(Symbol lhs, Symbol rhs) {
    return !(lhs == rhs);  
}