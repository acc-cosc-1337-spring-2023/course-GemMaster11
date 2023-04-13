//h
#include "tic_tac_toe.h"
#include<string>
#include<iostream>

#ifndef BOARD_4X4_H
#define BOARD_4X4_H

class Board4: public Game
{

public:
    Board4() : Game(4){};


private:
    bool check_column_win() const override;
    bool check_row_win() const override;
    bool check_diagonal_win() const override;


};

#endif