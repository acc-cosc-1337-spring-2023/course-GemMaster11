#include "tic_tac_toe.h"
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
 
	do 
	{
		int position;

		cout<<"(Capitals only)\n";
		cout<<"Input X or O: ";
		cin>>user;
		game->start_game(user);
		while(!game->game_over())
		{
			cout<<"Enter position from 1 to 9: ";
        	cin>>position;
        	game->mark_board(position);
		}
		cout<<"Continue? Y/N: ";
		cin>>cont;

	} while (cont == "Y" || cont == "y");
	
	return 0;
}