#include<iostream>
#include<string.h>
using namespace std;
class Book
{
private:
char name[50];
char subject[50];
int price;
public:
Book(char n[50],char s[50],int p);
void display();
};
Book::Book(char name[50],char s[50],int p)
{
strcpy((*this).name,name);
strcpy(subject,s);
price=p;
}
void Book::display()
{
cout<<"Book_Name = "<<name<<endl;
cout<<"Subject_Name = "<<subject<<endl;
cout<<"Book_Price = "<<price<<endl;
}
int main()
{
Book b1("Book_name","Book_price",100);
b1.display();	
return 0;
}
