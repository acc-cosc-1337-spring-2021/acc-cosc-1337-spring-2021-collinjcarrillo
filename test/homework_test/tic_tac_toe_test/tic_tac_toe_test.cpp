#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <string>
#include <memory>
using namespace std;


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify if player choice sets player to X")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe3>();
	match->start_game("X");
	REQUIRE(match->get_player() == "X");


}

TEST_CASE("Verify if player choice sets player to O")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe3>();
	match->start_game("O");
	REQUIRE(match->get_player() == "O");

}

TEST_CASE("Verify if game ends when board is full")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe3>();
	string player = "X";
	match->start_game(player);
	match->mark_board(1);
	REQUIRE(match->game_over()== false);
	match->mark_board(2);
	REQUIRE(match->game_over()== false);
	match->mark_board(3);
	REQUIRE(match->game_over()== false);
	match->mark_board(4);
	REQUIRE(match->game_over()== false);
	match->mark_board(6);
	REQUIRE(match->game_over()== false);
	match->mark_board(5);
	REQUIRE(match->game_over()== false);
	match->mark_board(7);
	REQUIRE(match->game_over()== false);
	match->mark_board(9);
	REQUIRE(match->game_over()== false);
	match->mark_board(8);
	REQUIRE(match->game_over()== true);
	REQUIRE(match->get_winner()== "C");
}

TEST_CASE("Verify if game ends in first column")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe3>();
	string player = "X";
	match->start_game(player);
	match->mark_board(1);
	REQUIRE(match->game_over()== false);
	match->mark_board(2);
	REQUIRE(match->game_over()== false);
	match->mark_board(4);
	REQUIRE(match->game_over()== false);
	match->mark_board(2);
	REQUIRE(match->game_over()== false);
	match->mark_board(7);
	REQUIRE(match->game_over()== true);
	
}

TEST_CASE("Verify if game ends in second column")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe3>();
	string player = "X";
	match->start_game(player);
	match->mark_board(2);
	REQUIRE(match->game_over()== false);
	match->mark_board(1);
	REQUIRE(match->game_over()== false);
	match->mark_board(5);
	REQUIRE(match->game_over()== false);
	match->mark_board(4);
	REQUIRE(match->game_over()== false);
	match->mark_board(8);
	REQUIRE(match->game_over()== true);
	
}

TEST_CASE("Verify if game ends in third column")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe3>();
	string player = "X";
	match->start_game(player);
	match->mark_board(3);
	REQUIRE(match->game_over()== false);
	match->mark_board(2);
	REQUIRE(match->game_over()== false);
	match->mark_board(6);
	REQUIRE(match->game_over()== false);
	match->mark_board(4);
	REQUIRE(match->game_over()== false);
	match->mark_board(9);
	REQUIRE(match->game_over()== true);
	
}

TEST_CASE("Verify if game ends in first row")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe3>();
	string player = "X";
	match->start_game(player);
	match->mark_board(1);
	REQUIRE(match->game_over()== false);
	match->mark_board(4);
	REQUIRE(match->game_over()== false);
	match->mark_board(2);
	REQUIRE(match->game_over()== false);
	match->mark_board(5);
	REQUIRE(match->game_over()== false);
	match->mark_board(3);
	REQUIRE(match->game_over()== true);
	
}

TEST_CASE("Verify if game ends in second row")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe3>();
	string player = "X";
	match->start_game(player);
	match->mark_board(4);
	REQUIRE(match->game_over()== false);
	match->mark_board(2);
	REQUIRE(match->game_over()== false);
	match->mark_board(5);
	REQUIRE(match->game_over()== false);
	match->mark_board(9);
	REQUIRE(match->game_over()== false);
	match->mark_board(6);
	REQUIRE(match->game_over()== true);
	
}

TEST_CASE("Verify if game ends in third row")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe3>();
	string player = "X";
	match->start_game(player);
	match->mark_board(7);
	REQUIRE(match->game_over()== false);
	match->mark_board(2);
	REQUIRE(match->game_over()== false);
	match->mark_board(8);
	REQUIRE(match->game_over()== false);
	match->mark_board(4);
	REQUIRE(match->game_over()== false);
	match->mark_board(9);
	REQUIRE(match->game_over()== true);
	
}

TEST_CASE("Verify if game ends with up diagonal")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe3>();
	string player = "X";
	match->start_game(player);
	match->mark_board(7);
	REQUIRE(match->game_over()== false);
	match->mark_board(2);
	REQUIRE(match->game_over()== false);
	match->mark_board(5);
	REQUIRE(match->game_over()== false);
	match->mark_board(4);
	REQUIRE(match->game_over()== false);
	match->mark_board(3);
	REQUIRE(match->game_over()== true);
	
}

TEST_CASE("Verify if game ends with down diagonal")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe3>();
	string player = "X";
	match->start_game(player);
	match->mark_board(1);
	REQUIRE(match->game_over()== false);
	match->mark_board(2);
	REQUIRE(match->game_over()== false);
	match->mark_board(5);
	REQUIRE(match->game_over()== false);
	match->mark_board(4);
	REQUIRE(match->game_over()== false);
	match->mark_board(9);
	REQUIRE(match->game_over()== true);
	REQUIRE(match->get_winner()== "X");
	
}

TEST_CASE("Verify if TTTManager can tally score")
{
	TTTManager manager;
	unique_ptr<TicTacToe> match = make_unique<TicTacToe3>();
	 

	int o, x, t;
	string player = "X";
	match->start_game(player);
	match->mark_board(1);
	match->mark_board(2);
	match->mark_board(5);
	match->mark_board(4);
	match->mark_board(9);
	REQUIRE(match->game_over()== true);
	manager.save_game(match);
	match->get_winner();

	match->start_game("O");
	match->mark_board(1);
	match->mark_board(2);
	match->mark_board(5);
	match->mark_board(4);
	match->mark_board(9);
	REQUIRE(match->game_over()== true);
	manager.save_game(match);
	match->get_winner();

	match->start_game(player);
	match->mark_board(1);
	match->mark_board(2);
	match->mark_board(3);
	match->mark_board(4);
	match->mark_board(6);
	match->mark_board(5);
	match->mark_board(7);
	match->mark_board(9);
	match->mark_board(8);
	REQUIRE(match->game_over()== true);
	manager.save_game(match);
	match->get_winner();
	manager.get_winner_total(o,x,t);
	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 1);
}

TEST_CASE("Verify if player choice sets player to X 4")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe4>();
	match->start_game("X");
	REQUIRE(match->get_player() == "X");


}

TEST_CASE("Verify if player choice sets player to O 4")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe4>();
	match->start_game("O");
	REQUIRE(match->get_player() == "O");

}

TEST_CASE("Verify if game ends when board is full 4")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe4>();
	string player = "X";
	match->start_game(player);
	match->mark_board(1);
	match->mark_board(2);
	match->mark_board(3);
	match->mark_board(4);
	match->mark_board(5);
	match->mark_board(6);
	match->mark_board(7);
	match->mark_board(8);
	match->mark_board(10);
	match->mark_board(9);
	match->mark_board(12);
	match->mark_board(11);
	match->mark_board(13);
	match->mark_board(14);
	match->mark_board(15);
	match->mark_board(16);
	REQUIRE(match->game_over()== true);
	REQUIRE(match->get_winner()== "C");
}

TEST_CASE("Verify if game ends in first column 4")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe4>();
	string player = "X";
	match->start_game(player);
	match->mark_board(1);
	REQUIRE(match->game_over()== false);
	match->mark_board(9);
	REQUIRE(match->game_over()== false);
	match->mark_board(5);
	REQUIRE(match->game_over()== false);
	match->mark_board(3);
	REQUIRE(match->game_over()== false);
	match->mark_board(9);
	REQUIRE(match->game_over()== false);
	match->mark_board(2);
	REQUIRE(match->game_over()== false);
	match->mark_board(13);
	REQUIRE(match->game_over()== true);
	
}

TEST_CASE("Verify if game ends in second column 4")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe4>();
	string player = "X";
	match->start_game(player);
	match->mark_board(2);
	REQUIRE(match->game_over()== false);
	match->mark_board(9);
	REQUIRE(match->game_over()== false);
	match->mark_board(6);
	REQUIRE(match->game_over()== false);
	match->mark_board(1);
	REQUIRE(match->game_over()== false);
	match->mark_board(10);
	REQUIRE(match->game_over()== false);
	match->mark_board(1);
	REQUIRE(match->game_over()== false);
	match->mark_board(14);
	REQUIRE(match->game_over()== true);
	
}

TEST_CASE("Verify if game ends in third column 4")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe4>();
	string player = "X";
	match->start_game(player);
	match->mark_board(3);
	REQUIRE(match->game_over()== false);
	match->mark_board(2);
	REQUIRE(match->game_over()== false);
	match->mark_board(7);
	REQUIRE(match->game_over()== false);
	match->mark_board(1);
	REQUIRE(match->game_over()== false);
	match->mark_board(11);
	REQUIRE(match->game_over()== false);
	match->mark_board(6);
	REQUIRE(match->game_over()== false);
	match->mark_board(15);
	REQUIRE(match->game_over()== true);
	
}

TEST_CASE("Verify if game ends in forth column 4")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe4>();
	string player = "X";
	match->start_game(player);
	match->mark_board(4);
	REQUIRE(match->game_over()== false);
	match->mark_board(7);
	REQUIRE(match->game_over()== false);
	match->mark_board(8);
	REQUIRE(match->game_over()== false);
	match->mark_board(16);
	REQUIRE(match->game_over()== false);
	match->mark_board(12);
	REQUIRE(match->game_over()== false);
	match->mark_board(1);
	REQUIRE(match->game_over()== false);
	match->mark_board(16);
	REQUIRE(match->game_over()== true);
	
}

TEST_CASE("Verify if game ends in first row 4")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe4>();
	string player = "X";
	match->start_game(player);
	match->mark_board(1);
	REQUIRE(match->game_over()== false);
	match->mark_board(7);
	REQUIRE(match->game_over()== false);
	match->mark_board(2);
	REQUIRE(match->game_over()== false);
	match->mark_board(16);
	REQUIRE(match->game_over()== false);
	match->mark_board(3);
	REQUIRE(match->game_over()== false);
	match->mark_board(11);
	REQUIRE(match->game_over()== false);
	match->mark_board(4);
	REQUIRE(match->game_over()== true);
	
}

TEST_CASE("Verify if game ends in second row TTT4")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe4>();
	string player = "X";
	match->start_game(player);
	match->mark_board(5);
	REQUIRE(match->game_over()== false);
	match->mark_board(2);
	REQUIRE(match->game_over()== false);
	match->mark_board(6);
	REQUIRE(match->game_over()== false);
	match->mark_board(16);
	REQUIRE(match->game_over()== false);
	match->mark_board(7);
	REQUIRE(match->game_over()== false);
	match->mark_board(11);
	REQUIRE(match->game_over()== false);
	match->mark_board(8);
	REQUIRE(match->game_over()== true);
	
}

TEST_CASE("Verify if game ends in third row TTT4")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe4>();
	string player = "X";
	match->start_game(player);
	match->mark_board(9);
	REQUIRE(match->game_over()== false);
	match->mark_board(2);
	REQUIRE(match->game_over()== false);
	match->mark_board(10);
	REQUIRE(match->game_over()== false);
	match->mark_board(16);
	REQUIRE(match->game_over()== false);
	match->mark_board(11);
	REQUIRE(match->game_over()== false);
	match->mark_board(8);
	REQUIRE(match->game_over()== false);
	match->mark_board(12);
	REQUIRE(match->game_over()== true);
	
}

TEST_CASE("Verify if game ends in forth row TTT4")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe4>();
	string player = "X";
	match->start_game(player);
	match->mark_board(13);
	REQUIRE(match->game_over()== false);
	match->mark_board(2);
	REQUIRE(match->game_over()== false);
	match->mark_board(14);
	REQUIRE(match->game_over()== false);
	match->mark_board(3);
	REQUIRE(match->game_over()== false);
	match->mark_board(15);
	REQUIRE(match->game_over()== false);
	match->mark_board(8);
	REQUIRE(match->game_over()== false);
	match->mark_board(16);
	REQUIRE(match->game_over()== true);
	
}

TEST_CASE("Verify if game ends with up diagonal TTT4")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe4>();
	string player = "X";
	match->start_game(player);
	match->mark_board(13);
	REQUIRE(match->game_over()== false);
	match->mark_board(2);
	REQUIRE(match->game_over()== false);
	match->mark_board(10);
	REQUIRE(match->game_over()== false);
	match->mark_board(16);
	REQUIRE(match->game_over()== false);
	match->mark_board(7);
	REQUIRE(match->game_over()== false);
	match->mark_board(8);
	REQUIRE(match->game_over()== false);
	match->mark_board(4);
	REQUIRE(match->game_over()== true);
}

TEST_CASE("Verify if game ends with down diagonal TTT4")
{
	unique_ptr<TicTacToe> match = make_unique<TicTacToe4>();
	string player = "X";
	match->start_game(player);
	match->mark_board(1);
	REQUIRE(match->game_over()== false);
	match->mark_board(2);
	REQUIRE(match->game_over()== false);
	match->mark_board(6);
	REQUIRE(match->game_over()== false);
	match->mark_board(4);
	REQUIRE(match->game_over()== false);
	match->mark_board(11);
	REQUIRE(match->game_over()== false);
	match->mark_board(8);
	REQUIRE(match->game_over()== false);
	match->mark_board(16);
	REQUIRE(match->game_over()== true);
	REQUIRE(match->get_winner()== "X");
	
}

TEST_CASE("Verify if TTTManager can tally score TTT4")
{
	TTTManager manager;
	unique_ptr<TicTacToe> match = make_unique<TicTacToe4>();
	 

	int o, x, t;
	string player = "X";
	match->start_game(player);
	match->mark_board(1);
	match->mark_board(2);
	match->mark_board(5);
	match->mark_board(4);
	match->mark_board(9);
	match->mark_board(10);
	match->mark_board(13);
	REQUIRE(match->game_over()== true);
	manager.save_game(match);
	match->get_winner();

	match->start_game("O");
	match->mark_board(1);
	match->mark_board(2);
	match->mark_board(5);
	match->mark_board(4);
	match->mark_board(9);
	match->mark_board(10);
	match->mark_board(13);
	REQUIRE(match->game_over()== true);
	manager.save_game(match);
	match->get_winner();

	match->start_game(player);
	match->mark_board(1);
	match->mark_board(2);
	match->mark_board(3);
	match->mark_board(4);
	match->mark_board(5);
	match->mark_board(6);
	match->mark_board(7);
	match->mark_board(8);
	match->mark_board(10);
	match->mark_board(9);
	match->mark_board(12);
	match->mark_board(11);
	match->mark_board(13);
	match->mark_board(14);
	match->mark_board(15);
	match->mark_board(16);
	REQUIRE(match->game_over()== true);
	manager.save_game(match);
	match->get_winner();
	manager.get_winner_total(o,x,t);
	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 1);
}