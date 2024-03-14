#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
};

node *deletenode(node *head)
{
    if (head == NULL)
        return head;
    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

void printlist(node *n)
{
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
    }
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
    head = deletenode(head);
    printlist(head);
}