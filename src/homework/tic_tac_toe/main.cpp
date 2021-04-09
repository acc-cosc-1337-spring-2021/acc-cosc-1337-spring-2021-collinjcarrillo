#include "tic_tac_toe.h"
#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string choice;
    int position;
    TicTacToe match;
    string more = "Y";

    while(more == "y" || more == "Y")
    {
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

        match.display_board();
        cout << match.get_player() << "'s turn! Enter a position on the board between 1 and 9: ";
        cin >> position;
        match.mark_board(position);
        match.display_board();
        while (! match.game_over())
        {
            cout<< "Please choose a position between 1 and 9: ";
            cin >> position;
            match.mark_board(position);
            match.display_board();

        }
        
        cout << "Game over! "<< match.get_winner() << " wins!\n";
        cout <<"Would you like to continue? Type y for yes:"<<"\n";
	    cin >> more;
        
    }

    
    

	return 0;
}