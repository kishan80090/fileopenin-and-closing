#include<iostream>
#include<string.h>
using namespace std;
class Book
{
char bookname[50],subject[50];
public:
Book(char bookname[50],char subject[50])
{
cout<<"book Name "<<bookname<<endl;
cout<<"\nSubject "<<subject<<endl;
strcpy(this->bookname,bookname);
strcpy(this->subject,subject);
}
void display()
{
cout<<"book Name "<<bookname;
cout<<"\nSubject "<<subject;
}
 Book()
{
cout<<"Enter the book name ";
cin>>bookname;
cout<<"Enter the subject ";
cin>>subject;
}
};
int main()
{
Book b("C++","C++");
b.display();
return 0;
}
