//h
#include <iostream>
#include <string>
#include <vector>
#include<stdlib.h>
#include<memory>
#include<math.h>
#ifndef TIC_H
#define TIC_H

class Game
{
    friend std::ostream& operator<<(std::ostream& out, const Game& game)
    {
        int size = game.pegs.size();

        for (int i = 0; i < size; i += std::sqrt(size)) 
        {
            out << game.pegs[i]; //<< "|" << game.pegs[i + 1] << "|" << game.pegs[i + 2];

            for(int j = 1; j<std::sqrt(size); j++)
            {
                out<<"|"<<game.pegs[i+j];
            }

            if (i + 1 != size) 
            {
                out << "\n";
            }
        }

        return out;
    }
    friend std::istream& operator>>(std::istream& in, Game& game)
    {
        int position;

        std::cout<<"Enter position from 1 to "<<game.pegs.size()<<": \n";
        in>>position;

        game.mark_board(position);

        return in;
    }


public:
    Game(){};
    Game(const int SIZE) : pegs(SIZE*SIZE, " "){};
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
    void set_winner();

    std::string winner;
    std::string player;

protected:
    virtual bool check_column_win()const;
    virtual bool check_row_win()const;
    virtual bool check_diagonal_win()const;
    std::vector<std::string> pegs;

    
};


#endif TIC_H