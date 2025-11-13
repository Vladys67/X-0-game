#pragma once
#include <iostream>

enum class Direction { Horizontal, Vertical, DiagonalMain, DiagonalSecondary };
std::ostream& operator<<(std::ostream& out, const Direction& d);
