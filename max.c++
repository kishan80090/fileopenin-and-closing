#include<iostream>
int main()
{
	int a=1,b=2,c=3,max;
	max=(a>b)?(a>c)?a:c:(b>c)?b:c;
	std::cout<<max;
	return 0;
}

