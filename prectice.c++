#include<iostream>
using namespace std;
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}}; 
void design() 
{
    cout << "\n";
    cout << "    Game start     \n";
    cout << "                   \n";
    cout << "   " << board[0][0] << "     " << board[0][1] << "     " << board[0][2] << "     " << "\n";
    cout << "                   \n";                                                      
    cout << "                   \n";                                                    
    cout << "   " << board[1][0] << "     " << board[1][1] << "     " << board[1][2] << "     " << "\n";
    cout << "                   \n";
    cout << "                   \n";
    cout << "   " << board[2][0] << "     " << board[2][1] << "     " << board[2][2] << "     " << "\n";
    cout << "                   \n";
    cout << "                   \n";      
}
int main()
{
design();
return 0;
}
