#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <string>

using std::move;
using std::string;
using std::unique_ptr;
using std::make_unique;


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify tie and winner is C")
{
	unique_ptr<Game> game = make_unique<Board3>();
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
}

TEST_CASE("Verify get player X")
{
	unique_ptr<Game> game = make_unique<Board3>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
}

TEST_CASE("Verify get player O")
{
	unique_ptr<Game> game = make_unique<Board3>();
	game->start_game("O");
	REQUIRE(game->get_player() == "O");
}

TEST_CASE("Verify get first column win")
{
	unique_ptr<Game> game = make_unique<Board3>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(7); //X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}
TEST_CASE("Verify get second column win")
{
	unique_ptr<Game> game = make_unique<Board3>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(8); //X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Verify get third column win")
{
	unique_ptr<Game> game = make_unique<Board3>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Verify get first row win")
{
	unique_ptr<Game> game = make_unique<Board3>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Verify get second row win")
{
	unique_ptr<Game> game = make_unique<Board3>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Verify get third row win")
{
	unique_ptr<Game> game = make_unique<Board3>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(7); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(8); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Verify get top left diagonal")
{
	unique_ptr<Game> game = make_unique<Board3>();
	game->start_game("O");
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //O
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}
TEST_CASE("Verify get bottom left win")
{
	unique_ptr<Game> game = make_unique<Board3>();
	game->start_game("O");
	REQUIRE(game->game_over() == false);
	game->mark_board(7); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //O
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}

TEST_CASE("Verify get winner totals")
{
	unique_ptr<Game> game = make_unique<Board3>();
	Manager manage;

	game->start_game("O");
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(7); //O
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
	manage.save_game(move(game));

	game = make_unique<Board3>();

	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(7); //O
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	manage.save_game(move(game));

	game = make_unique<Board3>();

	game->start_game("O");
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(8); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(7); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //O
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
	manage.save_game(move(game));

	game = make_unique<Board3>();

	int o = 0;
	int x = 0;
	int t = 0;

	manage.get_winner_total(o, x, t);
	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 1);

}

TEST_CASE("Verify get first column win 4")
{
	unique_ptr<Game> game = make_unique<Board4>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(13); //X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}
TEST_CASE("Verify get second column win 4")
{
	unique_ptr<Game> game = make_unique<Board4>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(7); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(10); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(14); //X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Verify get third column win 4")
{
	unique_ptr<Game> game = make_unique<Board4>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(7); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(8); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(11); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(12); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(15); //X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Verify get fourth column win 4")
{
	unique_ptr<Game> game = make_unique<Board4>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(8); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(12); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(10); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(16); //X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Verify get first row win 4")
{
	unique_ptr<Game> game = make_unique<Board4>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(16); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Verify get second row win 4")
{
	unique_ptr<Game> game = make_unique<Board4>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(7); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(16); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(8); //X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Verify get third row win 4")
{
	unique_ptr<Game> game = make_unique<Board4>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(10); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(11); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(16); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(12); //X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Verify get fourth row win 4")
{
	unique_ptr<Game> game = make_unique<Board4>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(13); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(14); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(15); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(16); //X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Verify get top left diagonal 4")
{
	unique_ptr<Game> game = make_unique<Board4>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(11); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(16); //X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Verify get bottom left win 4")
{
	unique_ptr<Game> game = make_unique<Board4>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(13); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(10); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(7); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Verify board 4")
{
	unique_ptr<Game> game = make_unique<Board4>();
	Manager manage;

	game->start_game("O");
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(11); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(13); //O
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
	manage.save_game(move(game));

	game = make_unique<Board4>();

	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(13); //X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	manage.save_game(move(game));

	game = make_unique<Board4>();

	game->start_game("O");
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(7); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(8); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(10); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(11); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(12); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(14); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(13); //X
	REQUIRE(game->game_over() == false);
	game->mark_board(16); //O
	REQUIRE(game->game_over() == false);
	game->mark_board(15); //X
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
	manage.save_game(move(game));

	game = make_unique<Board4>();

	int o = 0;
	int x = 0;
	int t = 0;

	manage.get_winner_total(o, x, t);
	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 1);
}