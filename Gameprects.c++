#include<iostream>
#include<string.h>
using namespace std;

class Game 
{
    char Firstplayername[50], Secondplayername[50];
    char board[3][3];
    int currentPlayer;
public:
    Game()
    {
        cout << "Enter The First Player Name: ";
        cin >> Firstplayername;
        cout << "Enter The Second Player Name: ";
        cin >> Secondplayername;

        
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                board[i][j] = ' ';
            }
        }
        currentPlayer = 1;
    }

    void design() 
    {
        cout << " ___________\n";
        for (int i = 0; i < 3; i++)
        {
            cout << "|";
            for (int j = 0; j < 3; j++)
            {
                cout << " " << board[i][j] << " |";
            }
            cout << "\n";
            if (i < 2) 
			cout << "|___|___|___|\n";
            else 
                cout << " -----------\n";
        }
    }

    void display() 
    {
        cout << "\nFirst Player Name: " << Firstplayername << "\n";
        cout << "Second Player Name: " << Secondplayername << "\n";
    }

    
    void makeMove() 
    {
        int move;
        char symbol = (currentPlayer == 1) ? 'X' : 'O';
        cout << (currentPlayer == 1 ? Firstplayername : Secondplayername) << "'s turn (Enter a number 1-9): ";
        cin >> move;
    }

};
int main()
{
    Game g;
    g.playGame();
    return 0;
}

