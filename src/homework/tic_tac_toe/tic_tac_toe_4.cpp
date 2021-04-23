#include "tic_tac_toe_4.h"
#include <iostream>
#include <vector>
#include <string>
using std::string;
using namespace std;

    bool TicTacToe4::check_column_win()
    {
        string last = "X";
        if(get_player() == "X")
            last = "O";
            
        if(pegs[0] == last && pegs[4] == last && pegs[8] == last && pegs[12] == last)
            return true;
            
        if(pegs[1] == last && pegs[5] == last && pegs[9] == last && pegs[13] == last)
            return true;

        if(pegs[2] == last && pegs[6] == last && pegs[10] == last && pegs[14] == last)
            return true;
        
        if(pegs[3] == last && pegs[7] == last && pegs[11] == last && pegs[15] == last)
            return true;

        return false;
    }

    bool TicTacToe4::check_row_win()
    {
        string last = "X";
        if(get_player() == "X")
            last = "O";
            
        if(pegs[0] == last && pegs[1] == last && pegs[2] == last && pegs[3] == last)
            return true;
            
        if(pegs[4] == last && pegs[5] == last && pegs[6] == last && pegs[7] == last)
            return true;

        if(pegs[8] == last && pegs[9] == last && pegs[10] == last && pegs[11] == last)
            return true;

        if(pegs[12] == last && pegs[13] == last && pegs[14] == last && pegs[15] == last)
            return true;

        return false;
    }

    bool TicTacToe4::check_diagonal_win()
    {
        string last = "X";
        if(get_player() == "X")
            last = "O";

        if(pegs[0] == last && pegs[5] == last && pegs[10] == last && pegs[15] == last)
            return true;
            
        if(pegs[12] == last && pegs[9] == last && pegs[6] == last && pegs[3] == last)
            return true;

        return false;
    }