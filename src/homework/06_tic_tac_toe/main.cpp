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
		cout<<"Input X or O: ";
		cin>>user;
		game->start_game(user);
		cout<<"Continue? Y/N: ";
		cin>>cont;

	} while (cont == "Y" || cont == "y");
	
	return 0;
}