#include "engine.hpp"
#include "player.hpp"
#include "ui.hpp"

int main() {
    Player p1(Symbol::X); 
    Player p2(Symbol::O); 
    Engine engine(p1, p2); 
    engine.Start(); 
    return 0;
}