#include "tic_tac_toe.h"
#include <iostream>
#include <vector>
#include <memory>
#include <string>
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
    clear_board();
    
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

ostream & operator<<(ostream &out, const unique_ptr<TicTacToe> &t)
{
    if (t->pegs.size() == 9)
    {
        cout << "     |     |     " << endl;
        cout << "  " << t->pegs[0] << "  |  " << t->pegs[1] << "  |  " << t->pegs[2] << endl;

        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;

        cout << "  " << t->pegs[3] << "  |  " << t->pegs[4] << "  |  " << t->pegs[5] << endl;

        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;

        cout << "  " << t->pegs[6] << "  |  " << t->pegs[7] << "  |  " << t->pegs[8] << endl;

        cout << "     |     |     " << endl << endl;
    }
    else
    {
        cout << "     |     |     |     " << endl;
        cout << "  " << t->pegs[0] << "  |  " << t->pegs[1] << "  |  " << t->pegs[2] << "  |  " << t->pegs[3] << endl;

        cout << "_____|_____|_____|_____" << endl;
        cout << "     |     |     |     " << endl;

        cout << "  " << t->pegs[4] << "  |  " << t->pegs[5] << "  |  " << t->pegs[6] << "  |  " << t->pegs[7] << endl;

        cout << "_____|_____|_____|_____" << endl;
        cout << "     |     |     |     " << endl;

        cout << "  " << t->pegs[8] << "  |  " << t->pegs[9] << "  |  " << t->pegs[10] << "  |  " << t->pegs[11] << endl;

        cout << "_____|_____|_____|_____" << endl;
        cout << "     |     |     |     " << endl;

        cout << "  " << t->pegs[12] << "  |  " << t->pegs[13] << "  |  " << t->pegs[14] << "  |  " << t->pegs[15] << endl;

        cout << "     |     |     |     " << endl << endl;  
    }
    return out;
}

istream & operator>>(istream &in, unique_ptr<TicTacToe> &t)
{
    int position;
    if(t->pegs.size() == 9)
    {
        cout<< "Please choose a position between 1 and 9: ";
        cin >> position;
        t->mark_board(position);
    }
    else
    {
        cout<< "Please choose a position between 1 and 16: ";
        cin >> position;
        t->mark_board(position);
    }   
        

    return in;
}

string TicTacToe::get_winner()
{
    
    return winner;
    
}

vector<string> const TicTacToe::get_pegs()
{
    return pegs;
}

TicTacToe::TicTacToe(vector<string> p, string win)
{
    pegs = p;
    winner = win;
}

TicTacToe::TicTacToe(int size)
{
    size *= size;
    for (int i=0;i<size;++i) {
        pegs.push_back(" ");
    }
}

