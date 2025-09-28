#pragma once
#include "board.hpp"
#include "player.hpp"

class Game {
    Board _board;
    Player _player1;
    Player _player2;
    Symbol _currentTurn;
public:
    Game(const Player& p1, const Player& p2);

    void Start();
    bool MakeMove(int row, int col);
    bool CheckWin(Symbol symbol) const;
    bool IsDraw() const;
    void SwitchTurn();
    Symbol GetTurn() const;
    const Board& GetBoard() const;
};
