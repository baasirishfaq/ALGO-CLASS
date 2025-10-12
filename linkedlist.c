// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* head; // declare head globally, no need to pass &head everytime


void insertAtStart(int value)
{
    struct Node *newnode;
    newnode = malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = head;
    head = newnode;

}

int main(){

    struct Node *node1;
    node1 = malloc(sizeof(struct Node));
    node1->data = 10;
    node1->next = NULL;

    head = node1;

    insertAtStart(20);

    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }

}
