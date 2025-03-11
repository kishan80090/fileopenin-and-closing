#include<iostream>
#include<string.h>
using namespace std;
class Game 
{
    char Firstplayername[50], Secondplayername[50];
    char board[3][3];
    int Player;
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
        Player = 1;
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
    void show() 
    {
        int move;
        char A = (Player == 1)?'X' : 'O';
        cout << (Player == 1 ? Firstplayername : Secondplayername) << "Enter a number 1-9: ";
        cin >> move;  
        
        int row = (move - 1) / 3;
        int col = (move - 1) % 3; 
       
        board[row][col] = A;
        Player = (Player == 1) ? 2 : 1;
    }  
    void playGame()
    {
        int count = 0;
        while (true) 
        {
            display();
            design();
            show();
            count++;
        }
    }
};
int main()
{
    Game g;
    g.playGame();
    return 0;
}
