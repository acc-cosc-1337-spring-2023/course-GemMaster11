//h
#include "tic_tac_toe.h"
#ifndef TICMAN_H
#define TICMAN_H

class Manager
{
friend std::ostream& operator<<(std::ostream& out, const Manager& manager)
{
    std::cout<<"Game Summary\n";
    for(auto& i : manager.games)
    {
        std::cout<<*i<<"\n";
    }

    std::cout<<"Game Stats\n";
    std::cout<<"X wins: "<<manager.x_win<<"\n";
    std::cout<<"O wins: "<<manager.o_win<<"\n";
    std::cout<<"Ties: "<<manager.ties<<"\n";
    std::cout<<"Total games played: "<<manager.games.size()<<"\n";
    return out;
}

public:
void save_game(std::unique_ptr<Game> game);
void get_winner_total(int& o, int& w, int& t);


private:
std::vector<std::unique_ptr<Game>> games;
int x_win = 0;
int o_win = 0;
int ties = 0;
void update_winner_count(std::string winner);

};



#endif TICMAN_H