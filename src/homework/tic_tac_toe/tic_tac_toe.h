#ifndef TICTACTOE_H
#define TICTACTOE_H
#include <string>
#include <memory>
#include <vector>
#include <iostream>
using namespace std;

class TicTacToe
{
public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player();
    string get_winner();
    friend istream & operator >> (istream &in, unique_ptr<TicTacToe> &t);
    friend ostream & operator << (ostream &out, const unique_ptr<TicTacToe> &t);
    TicTacToe(int size);
    TicTacToe(vector<string> p, string win);
    vector<string> const get_pegs();
    

private:
    bool check_board_full()
    {
        for (auto i = pegs.begin(); i != pegs.end(); ++i)
        {
            if(*i == " ")
            {
                return false;
            }
        }
        return true;
    }

    void clear_board()
    {
        for(size_t i = 0; i < pegs.size(); i++)
        {
            pegs[i] = " ";
        }
    }

    void set_next_player()
    {
        if(get_player() == "X")
        {
            player = "O";
        }
        else
        {
            player = "X";
        }
    }


    void set_winner()
    {
        if(get_player() == "X")
            winner = "O";
        else
            winner = "X";
    }
    
    
    string player;
    string winner;
    
    protected:

    virtual bool check_column_win()
    {
        return false;
    }

    virtual bool check_row_win()
    {
        return false;
    }

    virtual bool check_diagonal_win()
    {
        return false;
    }

    vector<string> pegs;
};

#endif