#include "Engine.hpp"

Game::Game(const Player& p1, const Player& p2)
    : _player1(p1), _player2(p2), _currentTurn(p1.GetSymbol()) {}

void Game::Start()
bool Game::MakeMove(int row, int col) { return true; } 
bool Game::CheckWin(Symbol symbol) const { return false; }
bool Game::IsDraw() const { return false; }
void Game::SwitchTurn() {}
Symbol Game::GetTurn() const { return _currentTurn; }
const Board& Game::GetBoard() const { return _board; }
