//cpp
#include "tic_tac_toe.h"

using std::string;
using std::cout;


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

    /*int position;

    while(!game_over())
	{
		cout<<"Enter position from 1 to 9: "; //moved to main
        cin>>position;
        mark_board(position);
	}*/

}

void Game::mark_board(int position)
{
    auto mark = position - 1;
    pegs[mark] = player;
    display_board();
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

string Game::get_winner()
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

bool Game::check_column_win()
{
    string opp = "O";
    if(player == "O")
    {
        opp = "X";
    }


    if (pegs[0] == opp && pegs[3] == opp && pegs[6] == opp)
    {
        cout<<opp<<" has won with a column win!\n";
        return true;
    }
    else if (pegs[1] == opp && pegs[4] == opp && pegs[7] == opp)
    {
        cout<<opp<<" has won with a column win!\n";
        return true;
    }
    else if (pegs[2] == opp && pegs[5] == opp && pegs[8] == opp)
    {
        cout<<opp<<" has won with a column win!\n";
        return true;
    }

}

bool Game::check_row_win()
{
    string opp = "O";
    if(player == "O")
    {
        opp = "X";
    }
    if (pegs[0] == opp && pegs[1] == opp && pegs[2] == opp)
    {
        cout<<opp<<" has won with a row win!\n";
        return true;
    }
    else if (pegs[3] == opp && pegs[4] == opp && pegs[5] == opp)
    {
        cout<<opp<<" has won with a row win!\n";
        return true;
    }
    else if (pegs[6] == opp && pegs[7] == opp && pegs[8] == opp)
    {
        cout<<opp<<" has won with a row win!\n";
        return true;
    }
}

bool Game::check_diagonal_win()
{
    string opp = "O";
    if(player == "O")
    {
        opp = "X";
    }
    if (pegs[0] == opp && pegs[4] == opp && pegs[8] == opp)
    {
        cout<<opp<<" has won with a diagonal win!\n";
        return true;
    }
    else if (pegs[6] == opp && pegs[4] == opp && pegs[2] == opp)
    {
        cout<<opp<<" has won with a diagonal win!\n";
        return true;
    }
    
}

void Game::set_winner()
{
    winner = "O";
    if(player == "O")
    {
        winner = "X";
    }

}