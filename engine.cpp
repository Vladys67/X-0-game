#include "Engine.hpp"

Engine::Game(const Player& p1, const Player& p2)
    : _player1(p1), _player2(p2), _currentTurn(p1.GetSymbol()) {}

void Engine::Start()
bool Engine::MakeMove(int row, int col) { return true; } 
bool Engine::CheckWin(Symbol symbol) const { return false; }
bool Engine::IsDraw() const { return false; }
void Engine::SwitchTurn() {}
Symbol Engine::GetTurn() const { return _currentTurn; }
const Board& Engine::GetBoard() const { return _board; }
