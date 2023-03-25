//cpp
#include "tic_tac_toe.h"

using std::string;
using std::cout;
using std::cin;


bool Game::game_over()
{
    bool condition = false;

    condition = check_board_full();
    if(condition == true)
    {
        cout<<"Game Over\n";
    }

    return condition;
}

void Game::start_game(string first_player)
{
    if(first_player == "X" || first_player == "x")
    {
        player = first_player;
    }
    else if (first_player == "O" || first_player == "o")
    {
        player = first_player;
    }
    else
    {
        cout<<"Invalid letter";
    }
    clear_board();

    int position;

    while(!game_over())
	{
		cout<<"Enter position from 1 to 9: ";
        cin>>position;
        mark_board(position);
	}

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
    return player;
}

void Game::display_board() const
{
    for (int i = 0; i < 9; i += 3) 
    {
        cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2];

        if (i + 1 != 9) 
        {
            cout << "\n";
        }
    }
}