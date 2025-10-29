#include "Engine.hpp"
#include "Player.hpp"
#include <string>

int main() {
    Player p1("Player 1", Symbol::X);
    Player p2("Player 2", Symbol::O);
    Engine e(p1, p2);
    e.Start();
    return 0;
}