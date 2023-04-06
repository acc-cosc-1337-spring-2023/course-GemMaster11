//cpp
#include "tic_tac_toe_manager.h"

using std::string;
using std::cout;

Manager game;

void Manager::save_game(Game b)
{
    update_winner_count(b.get_winner());
    games.push_back(b);
    
    //get_winner_total(x_win, o_win, ties);
}

void Manager::get_winner_total(int& o, int& w, int& t)
{
    o = o_win;
    w = x_win;
    t = ties;


    /*cout<<"\n";
    cout<<"X wins: "<<x_win<<"\n";
    cout<<"O wins: "<<o_win<<"\n";
    cout<<"Ties: "<<ties<<"\n";*/
}

void Manager::update_winner_count(string winner)
{
    if(winner == "X")
    {
        x_win++;
    }
    else if(winner == "O")
    {
        o_win++;
    }
    else if (winner == "C")
    {
        ties++;
    }
}