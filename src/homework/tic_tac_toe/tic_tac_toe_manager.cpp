#include <string>
#include <vector>
#include <iostream>
#include "tic_tac_toe_manager.h"
using namespace std;

void TTTManager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}

ostream & operator<<(ostream &out, const TTTManager &manager)
{
    for(auto ttt = manager.games.begin(); ttt != manager.games.end(); ttt++)
    {
        cout<< *ttt;
    }
        
    return out;
}

void TTTManager::get_winner_total(int& o, int& w, int& t)
{
    o = o_win;
    w = x_win;
    t = ties;
}
