#ifndef GAME_BOARD_H
#define GAME_BOARD_H

#include <iostream>
#include <string>

class Gameboard{
private:
    char board[4][4];
    std::string xName,yName;
    bool horizontalCheck();
    bool verticalCheck();
    bool diagonalCheck();
    bool inputCheck(int i, int j);
    void getInput(char turnIn);
    void getNames();
    bool turn(char turnIn);
    bool boardCheck();
    bool isFull();
public:
    Gameboard();
    void showBoard();
    void startGame();
};

#endif