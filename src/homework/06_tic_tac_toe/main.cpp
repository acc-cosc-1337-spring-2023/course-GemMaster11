#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;


int main() 
{
	string user;
	string cont;
	Game* game = new Game();
	Manager manage;
 
	do 
	{

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
		manage.save_game(*game);

	} while (cont == "Y" || cont == "y");

	if(cont == "N" || cont =="n")
	{
		int o;
		int x;
		int t;
		int total = o + x + t;

		manage.get_winner_total(o, x, t);

		cout<<"\n";
    	cout<<"X wins: "<<x<<"\n";
    	cout<<"O wins: "<<o<<"\n";
		cout<<"Ties: "<<t<<"\n";
		cout<<"Total games played: "<<total<<"\n";
	}
	
	return 0;
}