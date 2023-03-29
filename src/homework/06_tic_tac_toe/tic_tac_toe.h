//h
#include <iostream>
#include <string>
#include <vector>
#ifndef TIC_H
#define TIC_H

class Game
{
public:

    bool game_over();
    virtual void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const;
    void display_board() const;

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