#include<iostream>
#include<string.h>
class A
{
char Name[50],Account[50];
int Balance;
public:
A(char n[50],char a[50],int b)
{
strcpy(Name,n);
strcpy(Account,a);
Balance=b;
}
public: A()
{
std::cout<<"Enter the name ";
std::cin>>Name;
std::cout<<"Enter the account number ";
std::cin>>Account;
std::cout<<"Enter the balance ";
std::cin>>Balance;
}
public:
void display()
{
std::cout<<"Name "<<Name<<" Account number "<<Account<<" Balance "<<Balance<<"\n";
}
public:
void deposit()
{
int depositamount;
std::cout<<"Enter the deposit balance ";
std::cin>>depositamount;
if(depositamount>=1)
{
Balance=Balance+depositamount-5;
}
else
std::cout<<" not deposit balance ";
}
public:
void withdrawal()
{
int withdrawalamount;
std::cout<<"Enter the withdrawal balance ";
std::cin>>withdrawalamount;
if(withdrawalamount>=1)
{
Balance=Balance-withdrawalamount;
}
else
std::cout<<" not withdrawal balace ";
}
public:
void deposit(int depositamount)
{
if(depositamount>=1)
{
Balance=Balance+depositamount;
}
else
std::cout<<" not deposit amount";
}
public:
void withdrawal(int withdrawalamount)
{
if(withdrawalamount>=1)
{
Balance=Balance-withdrawalamount-10;
}
else
std::cout<<"not withdrawal balance ";
}
};
class B:public A
{
public: B():A()
{
std::cout<<" \nprivate Bank ";
}
public:
void deposit()
{
int depositamount;
std::cout<<"\nEnter the deposit balance ";
std::cin>>depositamount;
if(depositamount>=5)
{
A::deposit(depositamount-5);
}
else
std::cout<<" not deposit balance ";
}
public:
void withdrawal()
{
int withdrawalamount;
std::cout<<"\nEnter the withdrawal balance ";
std::cin>>withdrawalamount;
if(withdrawalamount>=5)
{
A::withdrawal(withdrawalamount-5);
}
else
std::cout<<"not withdrawal balance ";
}
};
int main()
{
B b;
b.display();
b.deposit();
b.display();
b.withdrawal();
b.display();
return 0;
}
