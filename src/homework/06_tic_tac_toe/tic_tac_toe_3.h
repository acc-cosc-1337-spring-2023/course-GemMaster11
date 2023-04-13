//h
#include"tic_tac_toe.h"
#include<string>
#include<iostream>

#ifndef BOARD_3X3_H
#define BOARD_3X3_H

class Board3 : public Game

{
public:
    Board3() : Game(3){};

private:
    bool check_column_win() const override;
    bool check_row_win() const override;
    bool check_diagonal_win() const override;


};

#endif