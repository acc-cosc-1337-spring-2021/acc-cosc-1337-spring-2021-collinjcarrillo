#ifndef TICTACTOE_H
#define TICTACTOE_H
#include <string>
#include <vector>
using namespace std;

class TicTacToe
{
public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player();
    string get_winner();
    friend istream & operator >> (istream &in, TicTacToe &t);
    friend ostream & operator << (ostream &out, const TicTacToe &t);

private:
    bool check_board_full()
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

    void clear_board()
    {
        for(size_t i = 0; i < pegs.size(); i++)
        {
            pegs[i] = " ";
        }
    }

    void set_next_player()
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

    bool check_column_win()
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

    bool check_row_win()
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

    bool check_diagonal_win()
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

    void set_winner()
    {
        if(player == "X")
            winner = "O";
        else
            winner = "X";
    }
    
    vector<string> pegs{9, " "};
    string player;
    string winner;
};

#endif