#include<iostream>
#include<string>
using namespace std;
class TicTacToe 
{
private:
    char board[3][3];
    string firstName, secondName;
    int turn;
public:
    TicTacToe() 
	{
        char Board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
        for (int i = 0; i < 3; i++) 
		{
            for (int j = 0; j < 3; j++)
			 {
                board[i][j] = Board[i][j];
            }
        }
        turn = 0;
    }
    void getPlayerNames()
	 {
        cout << "Enter the first player name: ";
        cin >> firstName;
        cout << "Enter the second player name: ";
        cin >> secondName;
    }
    void design()
	 {
        system("cls");
        cout << "\n";
        cout << "    Game start     \n";
        cout << "                   \n";
        cout << "   " << board[0][0] << "     " << board[0][1] << "     " << board[0][2] << "\n";
        cout << "                   \n";
        cout << "   " << board[1][0] << "     " << board[1][1] << "     " << board[1][2] << "\n";
        cout << "                   \n";
        cout << "   " << board[2][0] << "     " << board[2][1] << "     " << board[2][2] << "\n";
        cout << "                   \n";
    }
    bool player(char symbol)
	 {
        string currentPlayer = (turn % 2 == 0) ? firstName : secondName;
        cout << currentPlayer << " => turn (" << symbol << "): Choose a position (1-9): ";
        int choice;
        cin >> choice;
        if (choice < 1 || choice > 9)
		 {
            cout << "Please select a number between 1 and 9.\n";
            return false;
        }
        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;
        if (board[row][col] == 'X' || board[row][col] == 'O')
		 {
            cout << "Position already taken. Please choose a different position.\n";
            return false;
        }
        board[row][col] = symbol;
        return true;
    }
    bool checkWinner() 
	{
        for (int i = 0; i < 3; i++)
		 {
            if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
                (board[0][i] == board[1][i] && board[1][i] == board[2][i]))
				 {
                return true;
            }
        }
        
        if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
            (board[2][0] == board[1][1] && board[1][1] == board[0][2])) {
            return true;
        }
        return false;
    }
    bool checkDraw()
	 {
        for (int i = 0; i < 3; i++) 
		{
            for (int j = 0; j < 3; j++)
			 {
                if (board[i][j] != 'X' && board[i][j] != 'O')
				 {
                    return false;
                }
            }
        }
        return true;
    }
    void playGame()
	 {
        while (true) 
		{
            design();
            char symbol = (turn % 2 == 0) ? 'X' : 'O';
            if (!player(symbol)) 
			{
                continue;
            }

            if (checkWinner()) 
			{
                design();
                cout << " * Game Over *\n";
                cout << ((turn % 2 == 0) ? firstName : secondName) << " => ** Winner ** \n";
                break;
            }

            if (checkDraw()) 
			{
                design();
                cout << "Game Draw!\n";
                break;
            }

            turn++;
        }
    }
};

int main()
 {
    TicTacToe game;
    game.getPlayerNames();
    game.playGame();
    return 0;
}

