#include<iostream>
using namespace std;
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}}; 
char firstname[50], secondname[50];
int choice;
int turn = 0;
void design() 
{
system("cls");
    cout << "\n";
    cout << "*** Game-Start ****\n";
    cout << "|_________________|\n";
    cout << "|     |     |     |\n";
    cout << "|  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  |  " << "\n";
    cout << "|-----|-----|-----|\n";
    cout << "|     |     |     |\n";
    cout << "|  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  |  " << "\n";
    cout << "|-----|-----|-----|\n";     
    cout << "|  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  |  " << "\n";
    cout << "|     |     |     |\n";
    cout << "|-----------------|\n";
    cout << "*********TX********\n";     
}
bool player(char symbol) 
{
    cout << (turn % 2 == 0 ? firstname : secondname) << " => turn (" << symbol << "): Choose a position (1-9): ";
    cin >> choice;
    if (choice < 1 || choice > 9) 
	{
        cout << "Please select the number 1 and 9\n";
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
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2])||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i]))
			 {
            return true;
        }
    }
    if((board[0][0]==board[1][1]&&board[1][1]==board[2][2]||
    (board[2][0]==board[1][1]&&board[1][1]==board[0][2])))
    {
    
    return true;
} 
    return false;
}
int main()
 {
    cout << "Enter the first player name: ";
    cin >> firstname;
    cout << "Enter the second player name: ";
    cin >> secondname;
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
            cout  << " * Game Over *\n";
            cout << (turn % 2 == 0 ? firstname : secondname) << " => ** Winner ** \n";
            break;
        }
        bool draw = true;
        for (int i = 0; i < 3; i++)
		 {
            for (int j = 0; j < 3; j++) 
			{
                if (board[i][j] != 'X' && board[i][j] != 'O')
				 {
                    draw = false;
                    break;
                }
            }
            if (!draw) break;
        }
        if (draw) 
		{
            design();
            cout << "Try Again Draw Game\n";
            break;
        }
        turn++;
    }
    return 0;
}

