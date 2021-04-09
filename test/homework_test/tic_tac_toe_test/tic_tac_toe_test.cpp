#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include <iostream>
#include <string>
using namespace std;


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify if player choice sets player to X")
{
	TicTacToe match;
	match.start_game("X");
	REQUIRE(match.get_player() == "X");


}

TEST_CASE("Verify if player choice sets player to O")
{
	TicTacToe match;
	match.start_game("O");
	REQUIRE(match.get_player() == "O");

}

TEST_CASE("Verify if game ends when board is full")
{
	TicTacToe match;
	string player = "X";
	match.start_game(player);
	match.mark_board(1);
	REQUIRE(match.game_over()== false);
	match.mark_board(2);
	REQUIRE(match.game_over()== false);
	match.mark_board(3);
	REQUIRE(match.game_over()== false);
	match.mark_board(4);
	REQUIRE(match.game_over()== false);
	match.mark_board(6);
	REQUIRE(match.game_over()== false);
	match.mark_board(5);
	REQUIRE(match.game_over()== false);
	match.mark_board(7);
	REQUIRE(match.game_over()== false);
	match.mark_board(9);
	REQUIRE(match.game_over()== false);
	match.mark_board(8);
	REQUIRE(match.game_over()== true);
	REQUIRE(match.get_winner()== "C");
}

TEST_CASE("Verify if game ends in first column")
{
	TicTacToe match;
	string player = "X";
	match.start_game(player);
	match.mark_board(1);
	REQUIRE(match.game_over()== false);
	match.mark_board(2);
	REQUIRE(match.game_over()== false);
	match.mark_board(4);
	REQUIRE(match.game_over()== false);
	match.mark_board(2);
	REQUIRE(match.game_over()== false);
	match.mark_board(7);
	REQUIRE(match.game_over()== true);
	
}

TEST_CASE("Verify if game ends in second column")
{
	TicTacToe match;
	string player = "X";
	match.start_game(player);
	match.mark_board(2);
	REQUIRE(match.game_over()== false);
	match.mark_board(1);
	REQUIRE(match.game_over()== false);
	match.mark_board(5);
	REQUIRE(match.game_over()== false);
	match.mark_board(4);
	REQUIRE(match.game_over()== false);
	match.mark_board(8);
	REQUIRE(match.game_over()== true);
	
}

TEST_CASE("Verify if game ends in third column")
{
	TicTacToe match;
	string player = "X";
	match.start_game(player);
	match.mark_board(3);
	REQUIRE(match.game_over()== false);
	match.mark_board(2);
	REQUIRE(match.game_over()== false);
	match.mark_board(6);
	REQUIRE(match.game_over()== false);
	match.mark_board(4);
	REQUIRE(match.game_over()== false);
	match.mark_board(9);
	REQUIRE(match.game_over()== true);
	
}

TEST_CASE("Verify if game ends in first row")
{
	TicTacToe match;
	string player = "X";
	match.start_game(player);
	match.mark_board(1);
	REQUIRE(match.game_over()== false);
	match.mark_board(4);
	REQUIRE(match.game_over()== false);
	match.mark_board(2);
	REQUIRE(match.game_over()== false);
	match.mark_board(5);
	REQUIRE(match.game_over()== false);
	match.mark_board(3);
	REQUIRE(match.game_over()== true);
	
}

TEST_CASE("Verify if game ends in second row")
{
	TicTacToe match;
	string player = "X";
	match.start_game(player);
	match.mark_board(4);
	REQUIRE(match.game_over()== false);
	match.mark_board(2);
	REQUIRE(match.game_over()== false);
	match.mark_board(5);
	REQUIRE(match.game_over()== false);
	match.mark_board(9);
	REQUIRE(match.game_over()== false);
	match.mark_board(6);
	REQUIRE(match.game_over()== true);
	
}

TEST_CASE("Verify if game ends in third row")
{
	TicTacToe match;
	string player = "X";
	match.start_game(player);
	match.mark_board(7);
	REQUIRE(match.game_over()== false);
	match.mark_board(2);
	REQUIRE(match.game_over()== false);
	match.mark_board(8);
	REQUIRE(match.game_over()== false);
	match.mark_board(4);
	REQUIRE(match.game_over()== false);
	match.mark_board(9);
	REQUIRE(match.game_over()== true);
	
}

TEST_CASE("Verify if game ends with up diagonal")
{
	TicTacToe match;
	string player = "X";
	match.start_game(player);
	match.mark_board(7);
	REQUIRE(match.game_over()== false);
	match.mark_board(2);
	REQUIRE(match.game_over()== false);
	match.mark_board(5);
	REQUIRE(match.game_over()== false);
	match.mark_board(4);
	REQUIRE(match.game_over()== false);
	match.mark_board(3);
	REQUIRE(match.game_over()== true);
	
}

TEST_CASE("Verify if game ends with down diagonal")
{
	TicTacToe match;
	string player = "X";
	match.start_game(player);
	match.mark_board(1);
	REQUIRE(match.game_over()== false);
	match.mark_board(2);
	REQUIRE(match.game_over()== false);
	match.mark_board(5);
	REQUIRE(match.game_over()== false);
	match.mark_board(4);
	REQUIRE(match.game_over()== false);
	match.mark_board(9);
	REQUIRE(match.game_over()== true);
	
}