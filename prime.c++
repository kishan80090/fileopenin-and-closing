#include <iostream>
using namespace std;
int main()
 {
 int i,j,count=0,loopcount=0;
    for (i = 2; i <= 500; i++) 
	{
        int isPrime = true;
        for (j = 2; j <= i / 2; j++)
		 {
            if (i % j == 0)
			 {
                isPrime = 0;              
            }
        }
        if (isPrime)
		 {
            cout << i << " ";
            count=count+1;
        }
        loopcount=loopcount+1;
    }
    std::cout<<"\n"<<"count= "<<count;
    std::cout<<"\n"<<"loopcount= "<<loopcount;
    return 0;
}
