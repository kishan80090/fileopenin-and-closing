#include<iostream>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *next;
}stack;
void init(stack** hd)
{
*hd=NULL;
}
int empty(stack* hd)
{
return hd==NULL;
}
void push(stack** hd,int data)
{
stack* node=(stack*)malloc(sizeof(stack));
node->data=data;
node->next=*hd;
*hd=node;
}
int pop(stack** hd)
{
if(*hd==NULL)
return -1;
stack* temp=*hd;
*hd=temp->next;
int x=temp->data;
free(temp);
return x;
}
int main()
{
char str[]="123456789";
stack* st;
init (&st);
int i=0;
while(str[i]!='\0')
{
push(&st,str[i]-'0');
i++;
}
while(!empty(st))
{

int x=pop(&st);

std::cout<<" "<<x;
}
return 0;
}






