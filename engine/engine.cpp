#include "Engine.hpp"
#include "../ui/UI.hpp"
#include <iostream>

// Constructor explicit, fără delegating
Engine::Engine()
    : _player1(Player()), _player2(Player()), _currentTurn(_player1.GetSymbol()), _ui(std::make_unique<UI>()) {}

Engine::Engine(const Player& p1, const Player& p2)
    : _player1(p1), _player2(p2), _currentTurn(p1.GetSymbol()), _ui(std::make_unique<UI>()) {}

Engine::Engine(const Engine& o)
    : _board(o._board), _player1(o._player1), _player2(o._player2),
      _currentTurn(o._currentTurn), _ui(std::make_unique<UI>()) {}

Engine& Engine::operator=(const Engine& o) {
    if (this != &o) {
        _board = o._board;
        _player1 = o._player1;
        _player2 = o._player2;
        _currentTurn = o._currentTurn;
        _ui = std::make_unique<UI>();
    }
    return *this;
}

bool Engine::operator==(const Engine& o) const {
    return _board == o._board && _player1 == o._player1 && _player2 == o._player2 && _currentTurn == o._currentTurn;
}

bool Engine::MakeMove(int r, int c) { return _board.PlaceSymbol(r, c, _currentTurn); }

void Engine::SwitchTurn() { _currentTurn = (_currentTurn == Symbol::X ? Symbol::O : Symbol::X); }

bool Engine::IsDraw() const { return _board.IsFull() && !CheckWin(_currentTurn); }

bool Engine::CheckWin(Symbol s) const {
    auto same = [s](auto a, auto b, auto c){ return a==s && b==s && c==s; };
    for (int i=0;i<3;++i)
        if (same(_board.GetCell(i,0),_board.GetCell(i,1),_board.GetCell(i,2)) ||
            same(_board.GetCell(0,i),_board.GetCell(1,i),_board.GetCell(2,i))) return true;
    return same(_board.GetCell(0,0),_board.GetCell(1,1),_board.GetCell(2,2)) ||
           same(_board.GetCell(0,2),_board.GetCell(1,1),_board.GetCell(2,0));
}

void Engine::Start() {
    _ui->ShowMessage("X-O: " + _player1.GetName() + " vs " + _player2.GetName());
    while (true) {
        _ui->ShowBoard(_board);
        _ui->ShowMessage("Tura " + std::string(_currentTurn==Symbol::X?"X":"O") + ": r c (0-2)");
        int r,c; if (!(std::cin>>r>>c)) break;
        if (!MakeMove(r,c)) { _ui->ShowMessage("Invalid!"); continue; }
        if (CheckWin(_currentTurn)) {
            _ui->ShowBoard(_board);
            _ui->ShowMessage("Win: "+(_currentTurn==Symbol::X?_player1.GetName():_player2.GetName()));
            break;
        }
        if (IsDraw()) {
            _ui->ShowBoard(_board);
            _ui->ShowMessage("Egal!");
            break;
        }
        SwitchTurn();
    }
}

std::ostream& operator<<(std::ostream& out, const Engine& e) {
    return out << e._player1 << " vs " << e._player2 << "\nTură: "
               << static_cast<int>(e._currentTurn) << "\n" << e._board;
}
