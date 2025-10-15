#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *top = NULL;


void insert(int value){
    struct  Node *newnode;
    newnode = malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = top;
    top = newnode;
}

void pop(){
    struct Node *temp = top;
    top = top->next;
    free(temp);   
}

void printStack()
{
    struct Node *temp;
    temp = top;
    while(temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    insert(20);
    insert(30);
    insert(40);
    pop();
    insert(50);
    printStack();
};