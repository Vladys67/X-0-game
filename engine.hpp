#pragma once
#include "board.hpp"
#include "player.hpp"

class Game {
    Board _board;
    Player _player1;
    Player _player2;
    Cell _currentTurn;
public:
    Game(const Player& p1, const Player& p2);

    void Start();
    bool MakeMove(int row, int col);
    bool CheckWin(Cell symbol) const;
    bool IsDraw() const;
    void SwitchTurn();
    Cell GetTurn() const;
    const Board& GetBoard() const;
};
