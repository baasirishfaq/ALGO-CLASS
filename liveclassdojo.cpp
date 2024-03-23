#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
};

void printlist(node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

void athead(node *&head, int x)
{
    node *newnode = new node;
    newnode->data = x;
    newnode->next = head;
    head = newnode;
}

void addattail(node *&head, int x)
{
    node *newnode = new node;
    newnode->data = x;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

int main()
{
    node *head = new node;
    node *second = new node;
    node *third = new node;

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    addattail(head, 66);
    printlist(head);
}
//