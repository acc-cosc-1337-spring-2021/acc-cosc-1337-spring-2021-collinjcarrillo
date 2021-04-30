#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_data.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    
    string choice;
    string winner;
    string more = "Y";
    int type;
    int o_win = 0;
    int x_win = 0;
    int ties = 0;
    unique_ptr<TicTacToe> match;
    TicTacToeData data;
    TTTManager manager = TTTManager(data);

    do
    {
        cout << "Enter X or O to select who goes first: ";
        cin >> choice;

        if (choice == "o")
        {
        choice = "O";
        }
        else if (choice == "x")
        {
        choice = "X";
        }
    }
    while (!(choice == "X" || choice == "O"));
    
    
    while(more == "y" || more == "Y")
    {
        cout << "Would you like to play on 3x3 or 4x4: enter '3' or '4' to pick: \n";
        cin >> type;
        if(type == 3)
        {
            match = make_unique<TicTacToe3>();
        }
        else if(type == 4)
        {
            match = make_unique<TicTacToe4>();
        }
        
        
        match->start_game(choice);
        while (! match->game_over())
        {
            cin >> match;
            cout << match;
        }
        manager.save_game(match);
        manager.get_winner_total(o_win, x_win, ties);
        
        cout << "Game over!"<<match->get_winner()<<" wins!\n";
        cout << "SCOREBOARD:\n";
        cout << "X: "<<x_win<<"  ";
        cout << "O: "<<o_win<<"  ";
        cout << "Ties: "<<ties<<"\n\n";
        cout <<"Would you like to continue? Type y for yes:"<<"\n";
        match->get_winner();
	    cin >> more;
    }

    
    
    cout << manager;
    cout << "FINAL SCORES:\n";
    cout << "X: "<<x_win<<"  ";
    cout << "O: "<<o_win<<"  ";
    cout << "Ties: "<<ties<<"\n\n";
	return 0;
}