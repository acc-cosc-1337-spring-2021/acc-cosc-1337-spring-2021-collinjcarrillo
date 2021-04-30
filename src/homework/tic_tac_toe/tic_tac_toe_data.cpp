#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_data.h"
#include<iostream>
#include<vector>
#include<memory>
#include<fstream>
using namespace std;

void TicTacToeData::save_games(const vector<unique_ptr<TicTacToe>>& games)
{
    ofstream myfile("saved_data.txt");
    if (myfile.is_open())
    {
        for (auto i = games.begin(); i != games.end(); i++)
        {
            for (auto p: (*i)->get_pegs())
            {
                myfile << p;
            }
            myfile << (*i)->get_winner();
            myfile << "\n";
        }
        myfile.close();
    }
    else cout << "Could not open file.";
}

vector<unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    vector<unique_ptr<TicTacToe>> games;
    string line;
    string winner;
    ifstream myfile ("saved_data.txt");

    if(myfile.is_open())
    {
        while(getline(myfile, line))
        {
            vector<string> pegs;
            int i, len = line.length();
            for (i=0;i<len-1;++i)
            {
                string c = "";
                c += line[i];
                pegs.push_back(c);
            }
            winner = line[i];
            unique_ptr<TicTacToe> match;

            if (pegs.size() == 9)
            {
                match = make_unique<TicTacToe3>(pegs, winner);
            }
            else if (pegs.size() == 16)
            {
                match = make_unique<TicTacToe4>(pegs, winner);
            }
            games.push_back(move(match));
        }
        myfile.close();
    }
    else cout << "Could not find saved file.\n";

    return games;
}