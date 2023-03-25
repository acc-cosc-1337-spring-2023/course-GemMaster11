#include "tic_tac_toe.h"
#include<iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;


int main() 
{
	string user;
	cout<<"Input X or O: ";
	cin>>user;
	Game* game = new Game();
	game->start_game(user);

	return 0;
}