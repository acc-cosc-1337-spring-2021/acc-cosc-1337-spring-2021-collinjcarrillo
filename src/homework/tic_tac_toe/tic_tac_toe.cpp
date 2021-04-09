#include "tic_tac_toe.h"
#include <iostream>
#include <vector>
using std::string;
using namespace std;



bool TicTacToe::game_over()
{
    if(check_column_win() == true || check_diagonal_win() == true || check_row_win() == true)
    {
        set_winner();
        clear_board();
        return true;
    }
    else if(check_board_full() == true)
    {
        winner = "C";
        clear_board();
        return true;
    
    }
    else
    {
        return false;
    }

}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

string TicTacToe::get_player() const
{
    return player;
}

void TicTacToe::display_board() const
{
    cout << "     |     |     " << endl;
    cout << "  " << pegs[0] << "  |  " << pegs[1] << "  |  " << pegs[2] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << pegs[3] << "  |  " << pegs[4] << "  |  " << pegs[5] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << pegs[6] << "  |  " << pegs[7] << "  |  " << pegs[8] << endl;

    cout << "     |     |     " << endl << endl;
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    int count = 0;

    for (auto i: pegs)
    {
        if(i != " ")
        {
            count += 1;
        }
    }

    if(count == 9)
    {
        
        return true;

    }

    return false;
}

void TicTacToe::clear_board()
{
    for(size_t i = 0; i < pegs.size(); i++)
    {
        pegs[i] = " ";
    }
}

bool TicTacToe::check_column_win()
{
    string last = "X";
    if(player == "X")
        last = "O";
            
    if(pegs[0] == last && pegs[3] == last && pegs[6] == last)
        return true;
            
    if(pegs[1] == last && pegs[4] == last && pegs[7] == last)
        return true;

    if(pegs[2] == last && pegs[5] == last && pegs[8] == last)
        return true;

    return false;
}

bool TicTacToe::check_diagonal_win()
{
    string last = "X";
    if(player == "X")
        last = "O";

    if(pegs[0] == last && pegs[4] == last && pegs[8] == last)
        return true;
            
    if(pegs[2] == last && pegs[4] == last && pegs[6] == last)
        return true;

    return false;
}

bool TicTacToe::check_row_win()
{
    string last = "X";
    if(player == "X")
        last = "O";
            
    if(pegs[0] == last && pegs[1] == last && pegs[2] == last)
        return true;
            
    if(pegs[3] == last && pegs[4] == last && pegs[5] == last)
        return true;

    if(pegs[6] == last && pegs[7] == last && pegs[8] == last)
        return true;

    return false;
}

void TicTacToe::set_winner()
{
    if(player == "X")
        winner = "O";
    else
        winner = "X";
}

string TicTacToe::get_winner()
{
    return winner;
}