
#include<iostream>
#include<string.h>
using namespace std;

class Game 
{
    char Firstplayername[50], Secondplayername[50];
    char board[3][3];
int i,j;
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
    }
    void design() 
	{
        cout << " ___________\n";
        for (i = 0; i < 3; i++)
		 {
            cout << "|";
            for (j = 0; j < 3; j++)
			 {
                cout << " " << board[i][j] << " |";
            }
            cout << "\n";
            if (i < 2) cout << "|___|___|___|\n";
            else 
			cout << " -----------\n";
        }
    }
    void display() 
	{
        cout << "\nFirst Player Name: " << Firstplayername << "\n";
        cout << "Second Player Name: " << Secondplayername << "\n";
    }
};
int main()
{
Game g;
g.display();
g.design();
return 0;
}
