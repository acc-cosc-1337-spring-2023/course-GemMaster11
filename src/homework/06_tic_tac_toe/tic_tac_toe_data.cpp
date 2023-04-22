//cpp
#include "tic_tac_toe_data.h"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::vector;
using std::cout;
using std::unique_ptr;
using std::ofstream;
using std::string;
using std::ifstream;
using std::make_unique;


TicData data;

void TicData::save_games(const vector<unique_ptr<Game>>& games)
{
    ofstream gameData;
    gameData.open("./tictactoe.dat", ofstream::app);
    for (int j = 0; j<games.size(); j++)
    {
        vector<string> line = games[j]->get_pegs();

        for(int i=0; i<line.size(); i++)
        {
            gameData<<line[i];
        }
        gameData<<games[j]->get_winner() << "\n";
    }
    gameData.close();
}

vector<unique_ptr<Game>> TicData::get_games()
{
    vector<unique_ptr<Game>> boards;
    ifstream gameData("./tictactoe.dat");
    gameData.open("./tictactoe.dat");
    string line;
    vector<string> pegs;
    unique_ptr<Game> board;
    string winnerCh;
    string ch;

    if(gameData.is_open())
    {
        while(getline(gameData, line))
        { 
            for(char i: line)
            {
                if(line.length() == 10)
                {
                    string ch(line, 9);
                    string winnerCh[line.length() - 1];
                    pegs.push_back(ch);
                }
                else if(line.length() == 17)
                {
                    string ch(line, 16);
                    string winnerCh[line.length() - 1];
                    pegs.push_back(ch);
                }

                if(pegs.size() == 9)
                {
                    board = make_unique<Board3>(pegs, winnerCh);
                    boards.push_back(move(board));
                }
                else if(pegs.size() == 16)
                {
                    board = make_unique<Board4>(pegs, winnerCh);
                    boards.push_back(move(board));
                }
            }

        }
        
    }
    else
    {
        cout<<"Cannot open file...\n";
    }

    gameData.close();
    
    return boards;
}