#include<iostream>
#include<string.h>
using namespace std;
class Triangle
{
private:
int a,b,c;
public:
Triangle()
{
cout<<"Enter the A values:";
cin>>a;
cout<<"Enter the B values:";
cin>>b;
cout<<"Entert the C values:";
cin>>c;
}
Triangle(int a)
{
this->a=a;
this->b=a;
this->c=a;
}
Triangle(int a,int b,int c)
{
this->a=a;
this->b=b;
this->c=c;
}
void display()
{
cout<<"A = "<<a<<endl;
cout<<"B = "<<b<<endl;
cout<<"C = "<<c<<endl;
}
};
int main()
{
int a,b,c;
Triangle t1;
//Triangle t2(1);
//Triangle t3(4,2,3);
cout<<"\nTraingle 1:"<<endl;
t1.display();
cout<<"\nTraingle 2:"<<endl;
//t2.display();
cout<<"\nTraingle 3:"<<endl;
//t3.display();
return 0;
}
