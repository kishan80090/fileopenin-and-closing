#include<iostream>
using namespace std;
int main()
{
float n=50;
float x=2,y=n/2;
float error=0.001;
float diff=x-y;
if(diff < 0)
{
diff= -diff;
}
while(diff >= error)
{
x=(x+y)/2.0;
y=n/x;
diff =x-y;
if(diff < 0)
diff =-diff;
}
cout<<"X ="<<x<<", Y ="<<y<<"\n"<<"Result= "<<(x+y)/2<<"\nDifference :"<<diff;
return 0;
}
