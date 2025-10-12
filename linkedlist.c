// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void insertAtStart(struct Node **head, int value)
{
    struct Node *newnode;
    newnode = malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = *head;
    *head = newnode;

}


int main(){

    struct Node* head;
    struct Node *node1;
    node1 = malloc(sizeof(struct Node));
    node1->data = 10;
    node1->next = NULL;

    head = node1;

    insertAtStart(&head, 20);

    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }

}
