#include<iostream>
using namespace std;
void question(int A,int B)
{
if(A==B)
{
cout<<"Good"<<endl;
}
else
{
cout<<"faulse"<<endl;
cout<<"**Ab Maje Lo Bhai**"<<endl ;
}
}
int main()
{
int A,B;
cout<<"1-> ***  what is 1+1  ***";
cout<<"\n"<<endl;
cout<<"1.  3"<<endl;
cout<<"2.  2"<<endl;
cout<<"3.  2.5"<<endl;
cout<<"4.  4/1"<<endl;
cout<<"Enter the choose quote ";
cin>>B;
question(2,B);

cout<<"\n";
cout<<"2-> ***  what is 2.5+2.9  ***";
cout<<"\n"<<endl;
cout<<"1.  5.1"<<endl;
cout<<"2.  5.2"<<endl;
cout<<"3.  5.3"<<endl;
cout<<"4.  5.4"<<endl;
cout<<"Enter the choose quote ";
cin>>B;
question(4,B);
cout<<"3-> ***  what is capital of india  ***";
cout<<"\n"<<endl;
cout<<"1.  Pakistan"<<endl;
cout<<"2.  Mubai"<<endl;
cout<<"3.  New deldi"<<endl;
cout<<"4.  Varanasi"<<endl;
cout<<"Enter the choose quote ";
cin>>B;
question(3,B);
cout<<"4-> ***  what is CPU fullfom  ***";
cout<<"\n"<<endl;
cout<<"1.  central proccesing unit"<<endl;
cout<<"2.   central procesing machine"<<endl;
cout<<"3.  central procesing"<<endl;
cout<<"4.  central procesing language"<<endl;
cout<<"Enter the choose quote ";
cin>>B;
question(1,B);
return 0;
}
