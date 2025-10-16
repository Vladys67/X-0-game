#pragma once
#include <iostream>
#include "Board.hpp"
#include "Player.hpp"

class Engine {
    Board _board;
    Player _player1;
    Player _player2;
    Symbol _currentTurn;
public:

    Engine();
    Engine(const Player& p1, const Player& p2);
    Engine(const Engine& other);
    ~Engine() = default;

 
    Engine& operator=(const Engine& other);
    bool operator==(const Engine& other) const;


    void Start();
    bool MakeMove(int row, int col);
    bool CheckWin(Symbol symbol) const;
    bool IsDraw() const;
    void SwitchTurn();

    Symbol GetTurn() const;
    const Board& GetBoard() const;

    friend std::ostream& operator<<(std::ostream& out, const Engine& engine);
};
