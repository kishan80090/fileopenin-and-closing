#include<iostream>
#include<fstream> // for file handling
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}}; 
char firstname[50], secondname[50];
int choice;
int turn = 0;

void design(ofstream &file) 
{
    system("cls");
    cout << "\n";
    file << "\n";
    cout << "|     |     |     |\n";
    file << "|     |     |     |\n";
    cout << "|  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  |  " << "\n";
    file << "|  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  |  " << "\n"; 
    cout << "|-----|-----|-----|\n";
    file << "|-----|-----|-----|\n"; 
    cout << "|     |     |     |\n";
    file << "|     |     |     |\n";
    cout << "|  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  |  " << "\n";
    file << "|  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  |  " << "\n";
    cout << "|-----|-----|-----|\n";
    file << "|-----|-----|-----|\n"; 
    cout << "|  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  |  " << "\n";
    file << "|  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  |  " << "\n";
    cout << "|     |     |     |\n";
    file << "|     |     |     |\n"; 
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
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i]))
        {
            return true;
        }
    }
    if((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
       (board[2][0] == board[1][1] && board[1][1] == board[0][2]))
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
    
    ofstream file("game.txt");
    if (!file) 
    {
        cout << "Error opening file!";
        return 1;
    }

    while (true) 
    {
        design(file);
        char symbol = (turn % 2 == 0) ? 'X' : 'O';
        if (!player(symbol))
        {
            continue;
        }
        if (checkWinner()) 
        {
            design(file); // Pass file to design
            cout << (turn % 2 == 0 ? firstname : secondname) << " => ** Winner ** \n";
            file << (turn % 2 == 0 ? firstname : secondname) << " => ** Winner ** \n"; // Write to file
            cout << (turn % 2 != 0 ? firstname : secondname) << " =>  To Lose\n";
            file << (turn % 2 != 0 ? firstname : secondname) << " =>  To Lose\n"; // Write to file
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
            design(file);
            cout << "Try Again Draw Game\n";
            file << "Try Again Draw Game\n";
            break;
        }
        turn++;
    }

    file.close();
    return 0;
}
