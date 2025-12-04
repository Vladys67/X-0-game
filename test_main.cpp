#include "../core/Board.hpp"
#include "../core/Player.hpp"
#include "../core/Symbol.hpp"
#include <iostream>
#include <cassert>  // Pentru assert simplu

int main() {
    int failures = 0;

    // Teste Symbol
    std::cout << "Teste Symbol..." << std::endl;
    assert(Symbol::Empty == Symbol::Empty);
    assert(Symbol::X != Symbol::O);
    std::cout << "Symbol OK" << std::endl;

    // Teste Player
    std::cout << "Teste Player..." << std::endl;
    Player p1("TestX", Symbol::X);
    Player p2("TestO", Symbol::O);
    assert(p1.GetName() == "TestX");
    assert(p1.GetSymbol() == Symbol::X);
    assert(p1 == Player("TestX", Symbol::X));
    assert(p1 != p2);
    std::cout << "Player OK" << std::endl;

    // Teste Board
    std::cout << "Teste Board..." << std::endl;
    Board b;
    b.Clear();
    assert(b.GetCell(0,0) == Symbol::Empty);
    assert(b.IsFull() == false);
    assert(b.PlaceSymbol(0,0, Symbol::X) == true);
    assert(b.GetCell(0,0) == Symbol::X);
    assert(b.PlaceSymbol(0,0, Symbol::O) == false);  // Deja ocupat
    // Simulează plin
    for (int i=0; i<3; ++i) for (int j=0; j<3; ++j) if (i!=0 || j!=0) b.PlaceSymbol(i,j, Symbol::O);
    assert(b.IsFull() == true);
    std::cout << "Board OK" << std::endl;

    if (failures == 0) {
        std::cout << "Toate testele au trecut!" << std::endl;
        return 0;
    } else {
        std::cout << failures << " teste eșuate." << std::endl;
        return 1;
    }
}