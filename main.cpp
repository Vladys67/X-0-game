#include "engine.hpp"
#include "player.hpp"
#include "ui.hpp"
#include <string>

int main() {
    Player p1("Player 1", Symbol::X); 
    Player p2("Player 2", Symbol::O); 
    Engine engine(p1, p2);
    engine.Start();
    return 0;
}