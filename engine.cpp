#include "Engine.hpp"

Engine::Engine() : _player1(), _player2(), _currentTurn(Symbol::X) {}

Engine::Engine(const Player& p1, const Player& p2)
    : _player1(p1), _player2(p2), _currentTurn(p1.GetSymbol()) {}

Engine::Engine(const Engine& other)
    : _board(other._board), _player1(other._player1),
      _player2(other._player2), _currentTurn(other._currentTurn) {}

Engine& Engine::operator=(const Engine& other) {
    if (this != &other) {
        _board = other._board;
        _player1 = other._player1;
        _player2 = other._player2;
        _currentTurn = other._currentTurn;
    }
    return *this;
}

bool Engine::operator==(const Engine& other) const {
    return _board == other._board &&
           _player1 == other._player1 &&
           _player2 == other._player2 &&
           _currentTurn == other._currentTurn;
}

void Engine::Start() {}
bool Engine::MakeMove(int row, int col) { return true; }
bool Engine::CheckWin(Symbol symbol) const { return false; }
bool Engine::IsDraw() const { return false; }
void Engine::SwitchTurn() {}
Symbol Engine::GetTurn() const { return _currentTurn; }
const Board& Engine::GetBoard() const { return _board; }

std::ostream& operator<<(std::ostream& out, const Engine& engine) {
    out << engine._player1 << " vs " << engine._player2
        << "\nTurn: " << static_cast<int>(engine._currentTurn) << "\n"
        << engine._board;
    return out;
}
