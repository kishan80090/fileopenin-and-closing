#include<iostream>
#include<stdlib.h>
#include<fstream> 
using namespace std;

struct node 
{
    int data;
    struct node* next;
};

typedef struct node stack;

void init(stack** hd)
 {
    *hd = NULL;
}
int empty(stack* hd)
 {
    return hd == NULL;
}
void push(stack** hd, int data)
 {
    stack* new_node = (stack*)malloc(sizeof(stack)); 
    new_node->data = data; 
    new_node->next = *hd;  
    *hd = new_node;  
}
int pop(stack** hd) {
    if (*hd == NULL) 
        return -1;
    stack* temp = *hd;
    *hd = temp->next; 
    int x = temp->data;  
    free(temp);  
    return x; 
}
int main()
 {
 ofstream file("top.txt");
 
    char str[] = "123456789";
    stack* st;
    init(&st); 
    int i = 0;
    while (str[i] != '\0')
	 {
        push(&st, str[i]-'0');
        i++;
    }
    while (!empty(st)) 
	{
        int x = pop(&st);
        file <<" "<< x;
        cout <<" "<< x;
    }
            std::cout<<"\ntop file open";
    file.close();
    
    return 0;
}

