#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <string>

using std::string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify tie and winner is C")
{
	Game game;
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Verify get player X")
{
	Game game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Verify get player O")
{
	Game game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Verify get first column win")
{
	Game game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(7); //X
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");

}
TEST_CASE("Verify get second column win")
{
	Game game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(8); //X
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");

}

TEST_CASE("Verify get third column win")
{
	Game game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(6); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //X
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify get first row win")
{
	Game game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(6); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //X
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify get second row win")
{
	Game game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(6); //X
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify get third row win")
{
	Game game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(7); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(8); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //X
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Verify get top left diagonal")
{
	Game game;
	game.start_game("O");
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //O
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "O");
}
TEST_CASE("Verify get bottom left win")
{
	Game game;
	game.start_game("O");
	REQUIRE(game.game_over() == false);
	game.mark_board(7); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //O
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "O");
}

TEST_CASE("Verify get winner totals")
{
	Game game;
	Manager manage;

	game.start_game("O");
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(6); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(7); //O
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "O");
	manage.save_game(game);

	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(6); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(7); //O
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
	manage.save_game(game);

	game.start_game("O");
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(8); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(7); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(6); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //O
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");
	manage.save_game(game);

	int o = 0;
	int x = 0;
	int t = 0;

	manage.get_winner_total(o, x, t);
	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 1);

}