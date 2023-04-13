#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>
#include <string>


using std::string;
using std::cout;
using std::cin;
using std::make_unique;
using std::unique_ptr;

int main() 
{
	string user;
	string cont;
	Manager manage;
	
	
	int boardType;
 
	do 
	{
		unique_ptr<Game> game;
		cout<<"3x3 Board? (3) or 4x4 Board? (4)\n";
		cin>>boardType;
		if(boardType == 3)
		{
			game = make_unique<Board3>();
		}
		else if (boardType == 4)
		{
			game = make_unique<Board4>();
		}
		else
		{
			cout<<"Invalid number";
			exit(1);
		}	

		cout<<"(Capitals only)\n";
		cout<<"Input X or O: ";
		cin>>user;
		game->start_game(user);
		while(!game->game_over())
		{
			cin>>*game;
		}
		cout<<"Continue? Y/N: ";
		cin>>cont;
		manage.save_game(move(game));
		
	} while (cont == "Y" || cont == "y");

	if(cont == "N" || cont =="n")
	{
		cout<<manage;
	}
	
	return 0;
}