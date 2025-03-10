#include<iostream>
int main()
{
int a[2][2]={{1,2},{3,4}};
int b[2][2]={{5,6},{7,8}};
int c[2][2];
int i,j,k;
int m=2;
for(i=0;i<=m-1;i++)
{
for(j=0;j<=m-1;j++)
{
for(k=i+j;k<m+1;k++)
{
c[i][j]+=a[i][k]*b[k][j];
std::cout<<" "<<c[i][j];
}
std::cout<<"\n";

}
std::cout<<"\n";
}
return 0;
}
