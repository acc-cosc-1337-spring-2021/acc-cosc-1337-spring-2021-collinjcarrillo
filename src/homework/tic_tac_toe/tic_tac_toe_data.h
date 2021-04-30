#ifndef TTCD_H
#define TTCD_H
#include "tic_tac_toe.h"
#include<string>
#include<vector>
#include<memory>
#include<fstream>
using std::string;
class TicTacToeData
{
    public:
        vector<unique_ptr<TicTacToe>> get_games();
        void save_games(const vector<unique_ptr<TicTacToe>>& games);
};




#endif