#include "tic_tac_toe_3.h"

using std::cout;
using std::string;


/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/
bool Board3::check_column_win() const
{
    string opp = "O";
    if(get_player() == "O")
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
/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/
bool Board3::check_row_win() const
{
    string opp = "O";
    if(get_player() == "O")
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

/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8
*/
bool Board3::check_diagonal_win() const
{
    string opp = "O";
    if(get_player() == "O")
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
