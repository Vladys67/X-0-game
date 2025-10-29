#pragma once
#include <iostream>
enum class Symbol { Empty, X, O };
std::ostream& operator<<(std::ostream& out, const Symbol& s);