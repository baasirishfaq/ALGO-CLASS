// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

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

    if (head == NULL)
    {
        head = newnode;
        return;
    }

    struct Node *temp;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void deleteatstart()
{
    if (head == NULL)
        return; // empty guard

    struct Node *temp;
    temp = head;
    head = head->next;
    free(temp);
}

int search(int value)
{
    struct Node *temp;
    temp = head;
    int flag = 0, count = 0;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            flag = 1;
            break;
        }
        count++;

        temp = temp->next;
    }
    if (flag == 1)
    {
        printf("Element %d found at index %d in the list\n", value, count);
    }
    else
    {
        printf("element not in the list");
    }
}

void delete()
{
    struct Node *temp;
    temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
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
    // insert(11);
    // insert(12);
    // insert(13);
    // PrintList();
    // search(13);
    PrintList();
}