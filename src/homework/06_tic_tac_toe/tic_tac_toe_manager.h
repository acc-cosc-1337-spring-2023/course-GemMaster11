//h
#include "tic_tac_toe.h"
#ifndef TICMAN_H
#define TICMAN_H

class Manager
{
public:
void save_game(Game b);
//std::ostream& operator<<(std::ostream& out, const Manager& manager);
void get_winner_total(int& o, int& w, int& t);


private:
std::vector <int> games;
int x_win = 0;
int o_win = 0;
int ties = 0;

void update_winner_count(std::string winner);
};



#endif TICMAN_H