//h
#include <iostream>
#include <string>
#include <vector>
#include<stdlib.h>
#ifndef TIC_H
#define TIC_H

class Game
{
    friend std::ostream& operator<<(std::ostream& out, const Game& game)
    {
        for (int i = 0; i < 9; i += 3) 
        {
            out << game.pegs[i] << "|" << game.pegs[i + 1] << "|" << game.pegs[i + 2];

            if (i + 1 != 9) 
            {
                out << "\n";
            }
        }

        return out;
    }
    friend std::istream& operator>>(std::istream& in, Game& game)
    {
        int position;

        std::cout<<"Enter position from 1 to 9: ";
        in>>position;

        game.mark_board(position);

        return in;
    }


public:

    bool game_over();
    virtual void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const;
    //void display_board() const;

    std::string get_winner();

private:
    void set_next_player();
    bool check_board_full();
    void clear_board();

    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();


    std::string winner;
    std::string player;
    std::vector<std::string> pegs {9, " "};
    
};


#endif TIC_H