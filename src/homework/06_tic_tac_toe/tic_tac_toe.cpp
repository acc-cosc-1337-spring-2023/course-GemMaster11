//cpp
#include "tic_tac_toe.h"

using std::string;
using std::cout;
using std::vector;


bool Game::game_over()
{
    bool condition = false;
    
    if (check_column_win() == true || check_diagonal_win() == true || check_row_win() == true)
    {
        set_winner();
        return true;
    }
    condition = check_board_full();
    if(condition == true)
    {
        
        winner = "C";
        cout<<"Tie\n";
        cout<<"Game Over\n";
    }
    return condition;
}

void Game::start_game(string first_player)
{
    if(first_player == "X")
    {
        player = first_player;
    }
    else if (first_player == "O")
    {
        player = first_player;
    }
    else
    {
        cout<<"Invalid letter";
    }
    clear_board();
}

void Game::mark_board(int position)
{
    auto mark = position - 1;
    pegs[mark] = player;
    cout<<*this;
    //display_board();
    set_next_player();
}

void Game::set_next_player()
{
    if(player == "X" || player == "x")
    {
        player = "O";
    }
    else if(player == "O" || player == "o")
    {
        player = "X";
    }
}

bool Game::check_board_full()
{
    bool condition;
    for(auto i = 0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            condition = false;
            break;
        } 
        else
        {
            condition = true;
        }
    }

    return condition;
}

void Game::clear_board()
{
    for(auto i = 0; i < pegs.size(); i++)
        pegs[i] = " ";
}

string Game::get_player() const
{
    string opp = "X";
    if(player == "O")
    {
        opp = "X";
    }

    if(player == "X")
    {
        opp = "O";
    }
    return player;
}

/*void Game::display_board() const
{
    for (int i = 0; i < 9; i += 3) 
    {
        cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2];

        if (i + 1 != 9) 
        {
            cout << "\n";
        }
    }
}*/

string Game::get_winner() const
{
    string opp = "X";
    if(winner == "O")
    {
        opp = "X";
    }

    if(winner == "X")
    {
        opp = "O";
    }

    return winner;
}

bool Game::check_column_win() const
{
    return false; 
}

bool Game::check_row_win() const
{
    return false;
}

bool Game::check_diagonal_win() const
{
    return false; 
}

void Game::set_winner()
{
    winner = "O";
    if(player == "O")
    {
        winner = "X";
    }

}

vector<string> Game::get_pegs() const
{
    return pegs;
}
