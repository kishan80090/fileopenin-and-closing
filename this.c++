#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class Traingle
{
private:
int a,b,c;
public:
Traingle()
{
cout<<"Enter the A B and C values :";
cin>>a>>b>>c;
}
Traingle (int a)
{
this->a=a;
this->b=a;
this->c=a;
}
Traingle(int a,int b,int c)
{
this->a=a;
this->b=b;
this->c=c;
}
void Checkarea()
{
float s=(a+b+c)/2.0;
float area=s*(s-a)*(s-b)*(s-c);
area=sqrt(area);
cout<<"\nArea :"<<area;
}
void display()
{
cout<<"\nA ="<<a<<endl;
cout<<"B ="<<b<<endl;
cout<<"C ="<<c<<endl;
}
void checkparamiter()
{
int p;
p=a+b+c;
cout<<"\nParamiter= "<<p;
}
};
int main()
{
Traingle t1;
cout<<"*Traingle*";
t1.Checkarea(); 
t1.checkparamiter();
return 0;
}
