//h
#include<iostream>
#include<memory>
#include"tic_tac_toe.h"
#include<fstream>
#include<string>

#ifndef TICDATA_H
#define TICDATA_H

class TicData
{
public:
    void save_games(const std::vector<std::unique_ptr<Game>>& games);
    std::vector<std::unique_ptr<Game>> get_games();


};

#endif