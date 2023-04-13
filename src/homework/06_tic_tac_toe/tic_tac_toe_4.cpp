#include "tic_tac_toe_4.h"

using std::cout;
using std::string;

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false*/
bool Board4::check_column_win() const
{
    string opp = "O";
    if(get_player()== "O")
    {
        opp = "X";
    }


    if (pegs[0] == opp && pegs[4] == opp && pegs[8] == opp && pegs[12] == opp)
    {
        cout<<opp<<" has won with a column win!\n";
        return true;
    }
    else if (pegs[1] == opp && pegs[5] == opp && pegs[9] == opp && pegs[13] == opp)
    {
        cout<<opp<<" has won with a column win!\n";
        return true;
    }
    else if (pegs[2] == opp && pegs[6] == opp && pegs[10] == opp && pegs[14] == opp)
    {
        cout<<opp<<" has won with a column win!\n";
        return true;
    }
    else if (pegs[3] == opp && pegs[7] == opp && pegs[11] == opp && pegs[15] == opp)
    {
        cout<<opp<<" has won with a column win!\n";
        return true;
    }
    else
    {
        return false;
    }
}
/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/
bool Board4::check_row_win() const
{
    string opp = "O";
    if(get_player() == "O")
    {
        opp = "X";
    }
    if (pegs[0] == opp && pegs[1] == opp && pegs[2] == opp && pegs[3] == opp)
    {
        cout<<opp<<" has won with a row win!\n";
        return true;
    }
    else if (pegs[4] == opp && pegs[5] == opp && pegs[6] == opp && pegs[7] == opp)
    {
        cout<<opp<<" has won with a row win!\n";
        return true;
    }
    else if (pegs[8] == opp && pegs[9] == opp && pegs[10] == opp && pegs[11] == opp)
    {
        cout<<opp<<" has won with a row win!\n";
        return true;
    }
    else if (pegs[12] == opp && pegs[13] == opp && pegs[14] == opp && pegs[15] == opp)
    {
        cout<<opp<<" has won with a row win!\n";
        return true;
    }
    else
    {
        return false;
    }
}
/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15*/
bool Board4::check_diagonal_win() const
{
    string opp = "O";
    if(get_player() == "O")
    {
        opp = "X";
    }
    if (pegs[0] == opp && pegs[5] == opp && pegs[10] == opp && pegs[15] == opp)
    {
        cout<<opp<<" has won with a diagonal win!\n";
        return true;
    }
    else if (pegs[6] == opp && pegs[3] == opp && pegs[9] == opp && pegs[12] == opp)
    {
        cout<<opp<<" has won with a diagonal win!\n";
        return true;
    }
    else
    {
        return false;
    }
    
}
