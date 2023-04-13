//cpp
#include "tic_tac_toe_manager.h"

using std::string;
using std::cout;
using std::unique_ptr;
using std::move;
using std::make_unique;

Manager manage;

void Manager::save_game(unique_ptr<Game> game)
{
    update_winner_count(game->get_winner());
    games.push_back(move(game));
    
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
    cout<<"Ties: "<<ties<<"\n";
    cout<<"Total games played: "<<total<<"\n";*/
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