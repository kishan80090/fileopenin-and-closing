#include<iostream>
using namespace std;
void question(int A,int B)
{
if(A==B)
{
cout<<"* Right *"<<endl;
}
else
{
cout<<" => Wrong ="<<endl;
}
}
int main()
{
int r=0,f=0;
int A,B;
cout<<"1-> ***  what is 1+1  ***"<<endl;
cout<<"\n"<<endl;
cout<<"1.  3"<<endl;
cout<<"2.  2"<<endl;
cout<<"3.  2.5"<<endl;
cout<<"4.  4/1"<<endl;
cout<<"Enter the choose quote "<<endl;
cin>>B;
question(2,B);
if(B==2)
{
r=r+1;
}
else
f=f+1;
cout<<"\n";
cout<<"2-> ***  what is 2.5+2.9  ***"<<endl;
cout<<"\n"<<endl;
cout<<"1.  5.1"<<endl;
cout<<"2.  5.2"<<endl;
cout<<"3.  5.3"<<endl;
cout<<"4.  5.4"<<endl;
cout<<"Enter the choose quote "<<endl;
cin>>B;
question(4,B);
if(B==4)
{
r=r+1;
}
else
f=f+1;
cout<<"3-> ***  what is capital of india  ***"<<endl;
cout<<"\n"<<endl;
cout<<"1.  Pakistan"<<endl;
cout<<"2.  Mubai"<<endl;
cout<<"3.  New deldi"<<endl;
cout<<"4.  Varanasi"<<endl;
cout<<"Enter the choose quote "<<endl;
cin>>B;
question(3,B);
if(B==3)
{
r=r+1;
}
else
f=f+1;
cout<<"4-> ***  what is CPU fullfom  ***"<<endl;
cout<<"\n"<<endl;
cout<<"1.  central procesing unit"<<endl;
cout<<"2.   central procesing machine"<<endl;
cout<<"3.  central procesing"<<endl;
cout<<"4.  central procesing language"<<endl;
cout<<"Enter the choose quote "<<endl;
cin>>B;
question(1,B);
if(B==1)
{
r=r+1;
}
else
f=f+1;
cout<<"5.-> ***  what is keyboard  ***"<<endl;
cout<<"output"<<endl;
cout<<"input"<<endl;
cout<<"other"<<endl;
cout<<"input and output"<<endl;
cout<<"Enter the choose quote "<<endl;
cin>>B;
question(2,B);
if(B==2)
{
r=r+1;
}
else
f=f+1; 
cout<<"\n"<<endl;
cout<<"***************Final  Result****************"<<endl;
cout<<"right: "<<r<<endl;
cout<<"wrong: "<<f<<endl;
cout<<"***************End**************************"<<endl;
if( r!=f && f==0)
{
cout<<"  ** *  * *  * **  "<<endl;
cout<<"  ** *  * *  * **  "<<endl;
cout<<"  ** *  * *  * **  "<<endl;
cout<<" *=>** Winner* ** <=* "<<endl;
cout<<"  ** *  * *  * **  "<<endl;
cout<<"  ** *  * *  * **  "<<endl;
cout<<"  ** *  * *  * **  "<<endl;
}
else
cout<<"   ** Try Again **  "<<endl;
return 0;
}
