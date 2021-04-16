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
        
        return true;
    }
    else if(check_board_full() == true)
    {
        winner = "C";
        
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
    
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

string TicTacToe::get_player()
{
    return player;
}

ostream & operator<<(ostream &out, const TicTacToe &t)
{
    cout << "     |     |     " << endl;
    cout << "  " << t.pegs[0] << "  |  " << t.pegs[1] << "  |  " << t.pegs[2] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << t.pegs[3] << "  |  " << t.pegs[4] << "  |  " << t.pegs[5] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << t.pegs[6] << "  |  " << t.pegs[7] << "  |  " << t.pegs[8] << endl;

    cout << "     |     |     " << endl << endl;
}

istream & operator>>(istream &in, TicTacToe &t)
{
    int position;
    cout<< "Please choose a position between 1 and 9: ";
    cin >> position;
    t.mark_board(position);
    return in;
}

string TicTacToe::get_winner()
{
    clear_board();
    return winner;
    
}