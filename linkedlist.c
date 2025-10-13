// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;

void insertAtStart(int value)
{
    struct Node *newnode;
    newnode = malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

void insert(int value)
{
    struct Node *newnode;
    newnode = malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = NULL;

    if(head == NULL)
    {
        head = newnode;
        return;
    }

    struct Node *temp;
    temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void deleteatstart()
{
    struct Node *temp;
    temp = head;
    head = head->next;
    free(temp);
}

void PrintList()
{
    struct Node *temp;
    temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    // insertAtStart(20);
    insert(11);
    insert(12);
    insert(13);
    deleteatstart();
    PrintList();
}