#include <iostream>
using namespace std;
int main() 
{
    int x[]={1,2,3,4,5,6};
    int y[]={}; 
    int i;
    int size=sizeof(x)/sizeof(int); 
    for (i=0;i<size;i++) 
	{
        y[i] =2*x[i]+3;
        cout<<" y "<<i<<" = "<<y[i]<<endl;
    }
    return 0;
}
