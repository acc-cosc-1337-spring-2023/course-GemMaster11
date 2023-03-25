#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include <string>

using std::string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

Game* game = new Game();
	string user = "X";

TEST_CASE("Verify game over for mark 1")
{
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
}
TEST_CASE("Verify game over for mark 2")
{
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
}
TEST_CASE("Verify game over for mark 3")
{
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
}
TEST_CASE("Verify game over for mark 4")
{
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
}
TEST_CASE("Verify game over for mark 5")
{
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
}
TEST_CASE("Verify game over for mark 7")
{
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
}
TEST_CASE("Verify game over for mark 6")
{
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
}
TEST_CASE("Verify game over for mark 9")
{
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
}
TEST_CASE("Verify game over for mark 8")
{
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
}



