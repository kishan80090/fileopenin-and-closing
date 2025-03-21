#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node*next;
}
listnode;
void addFirst(listnode**hd,int data)
{
    listnode*node=(listnode*)malloc(sizeof(listnode));
    node->data=data;
    if((*hd)==NULL)
    {
        node->next=NULL;
    }
    else
    {
        node->next=(*hd);
    }
    *hd=node;
}
int search(listnode*hd,int value)
{
    int count=0;
    while(hd!=NULL)
    {
        if(value ==hd->data)
            count ++;
        hd=hd->next;
    }
    return count;
}
int pos (listnode*hd,int value)
{
    int count=0;
    while(hd!=NULL)
    {
        if(value ==hd->data)
            return count;
        hd=hd->next;
        count++;
    }
    return -1;
}
void printAll(listnode*hd)
{
    int count=0;
    printf("\n List Start\n");
    while(hd!=NULL)
    {
        printf("%3d,",hd->data);
        hd=hd->next;
        count=count+1;
    }
    printf("\n List End Count=%d\n",count);
}
void deletenode(listnode** hd,int value)
{
    if((*hd)==NULL)
    {
        printf("empty");
        return ;
    }
    listnode* temp=(*hd);
    if(value ==(*hd)->data)
    {
        *hd=temp->next;
        free(temp);
        return;
    }
    if((*hd)->next==NULL)
    {
        printf("first null");
        return;
    }
    listnode*first=*hd;
    listnode* second=first->next;
    while(second->next!=NULL)
    {
        if(second->data==value)
        {
            first->next=second->next;
            free(second);
            return;
        }
        first=second;
        second=second->next;
    }
    if(second->data==value)
    {
        first->next=NULL;
        free(second);
        return;
    }
}
int main()
{
    listnode* hd =NULL;
    int i,n,s;
    while(1)
    {
        printf("0-Exit, 1-Add First 2-printAll 3-deletenode= ");
        scanf("%d",&s);
        switch(s)
        {
        case 0:
            printf("\nBye");
            return 0;
        case 1:
            printf("Enter value of number");
          scanf("%d",&n);
          addFirst(&hd,n);
            printf("\nAdd First");
            break;
        case 2:
            printAll(hd);
            printf("\nPrint");
            break;
        case 3:
            printf("ter value of delete number");
            scanf("%d",&n);
            deletenode(&hd,n);
            printf("\nDelete ");
            break;
            default:
            printf("Not Found");
            return 0;
        }
    }
}
