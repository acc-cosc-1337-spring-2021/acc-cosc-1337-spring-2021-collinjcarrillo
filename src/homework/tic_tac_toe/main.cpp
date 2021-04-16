#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    TicTacToe match;
    TTTManager manager;
    string choice;
    string more = "Y";
    int o_win = 0;
    int x_win = 0;
    int ties = 0;

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
    match.start_game(choice);
    
    while(more == "y" || more == "Y")
    {
        while (! match.game_over())
        {
            cin >> match;
            cout << match;
        }
        manager.save_game(match);
        manager.get_winner_total(o_win, x_win, ties);
        cout << "Game over! "<< match.get_winner() << " wins!\n";
        cout << "SCOREBOARD:\n";
        cout << "X: "<<x_win<<"  ";
        cout << "O: "<<o_win<<"  ";
        cout << "Ties: "<<ties<<"\n\n";
        cout <<"Would you like to continue? Type y for yes:"<<"\n";
	    cin >> more;
    }

    
    
    cout << manager;
    cout << "FINAL SCORES:\n";
    cout << "X: "<<x_win<<"  ";
    cout << "O: "<<o_win<<"  ";
    cout << "Ties: "<<ties<<"\n\n";
	return 0;
}