#pragma once
#include <iostream>
#include <memory>
#include "Board.hpp"
#include "Player.hpp"
#include "Direction.hpp"

class AbstractUI {
public:
    virtual ~AbstractUI() = default;
    virtual void ShowBoard(const Board& b) = 0;
    virtual void ShowMessage(const std::string& m) = 0;
};

class Engine {
    Board _board;
    Player _player1, _player2;
    Symbol _currentTurn;
    std::unique_ptr<AbstractUI> _ui;
public:
    Engine();
    Engine(const Player& p1, const Player& p2);
    Engine(const Engine& o);
    ~Engine() = default;
    Engine& operator=(const Engine& o);
    bool operator==(const Engine& o) const;
    void Start();
    bool MakeMove(int r, int c);
    bool CheckWin(Symbol s) const;
    bool IsDraw() const;
    void SwitchTurn();
    Symbol GetTurn() const { return _currentTurn; }
    const Board& GetBoard() const { return _board; }
    friend std::ostream& operator<<(std::ostream& out, const Engine& e);
};