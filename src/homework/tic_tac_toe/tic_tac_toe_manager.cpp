#include <string>
#include <vector>
#include <iostream>
#include <memory>
#include "tic_tac_toe_manager.h"
using std::string;
using namespace std;

void TTTManager::save_game(unique_ptr<TicTacToe>&b)
{
    update_winner_count(b->get_winner());
    //games.push_back(std::move(b)); //still causes crashes
}

TTTManager::~TTTManager()
{
    data.save_games(games);
}

TTTManager::TTTManager(TicTacToeData &d)
{
    
    data = d;
    games = data.get_games();

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


