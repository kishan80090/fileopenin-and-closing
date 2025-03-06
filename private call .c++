#include<iostream>
#include<string.h>
using namespace std;

/****************************************** Class *****************************************/

class Bank
{
    char name[50], account[50];
    int balance;

public:Bank(char n[50], char a[50], int b)
    {
        strcpy(name, n);
        strcpy(account, a);
        balance = b;
    }

public: void display()
    {
    cout<<"Customer_Name = "<<name<<", Address = "<<account<<", Balance = "<<balance<<endl;
    }

    friend void deposit(Bank& obj, int amount);
    friend void withdrawal(Bank& obj, int amount);
    
    void deposit(int amount)  
    {
    cout<<"\nEnter the Deposit Balance :";
    cin>>amount;
    
        if (amount >= 1)
        balance = balance + amount;  
        else
        cout << "Not Deposit Amount\n"; 
    }
    void withdrawal(int amount)  
    {
    cout<<"\nEnter the Withdrawal Balance :";
    cin>>amount;
    
        if (amount >= 1 )
        balance = balance - amount;  
        else
        cout << "Not Withdrawal Balance\n";  
    }
};

/******************************** Main Function ********************************************/

int main()
{
    int depositAmount;
    int withdrawalAmount;
    Bank* b1 = new Bank("Punit", "9539393993", 2000);
    b1->display();

    b1->deposit(depositAmount); 
    b1->display(); 

    b1->withdrawal(withdrawalAmount); 
    b1->display(); 


    return 0;
}
