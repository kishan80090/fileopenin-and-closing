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
void Checkarea()
{
float s=(a+b+c)/2.0;
float area=s*(s-a)*(s-b)*(s-c);
area=sqrt(area);
cout<<"\nArea :"<<area;
}
void checkparamiter()
{
int p;
p=a+b+c;
cout<<"\nParamiter= "<<p;
}
void checkTraingle()
{
if(a+b<c || a+c<b || b+c<a)
{
cout<<"\nTraingle is not Equal";
}
else
cout<<"\nTraingle is Equal";
}
};
int main()
{
Traingle t1;
cout<<"*Traingle*";
t1.Checkarea(); 
t1.checkparamiter();
t1.checkTraingle();
return 0;
}
