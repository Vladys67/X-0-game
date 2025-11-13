#pragma once
#include <iostream>

enum class Symbol { Empty, X, O };

bool operator==(Symbol lhs, Symbol rhs);
bool operator!=(Symbol lhs, Symbol rhs);

std::ostream& operator<<(std::ostream& out, const Symbol& s);