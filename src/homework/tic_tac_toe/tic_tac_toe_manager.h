#ifndef MANAGER_H
#define MANAGER_H
#include <string>
#include <vector>
#include <iostream>
#include <memory>
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
using std::unique_ptr; using std::make_unique;
using namespace std;

class TTTManager
{
public:
    void save_game(unique_ptr<TicTacToe> &b);
    friend ostream & operator<<(ostream &out, const TTTManager &manager);
    void get_winner_total(int& o, int& w, int& t);
    TTTManager() = default;
    TTTManager(TicTacToeData &d);
    ~TTTManager();
    

private:
    vector<unique_ptr<TicTacToe>> games;
    TicTacToeData data;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;

    void update_winner_count(string winner)
    {
        if (winner == "X")
            x_win++;
        else if (winner == "O")
            o_win++;
        else
            ties++;
    }
};

#endif