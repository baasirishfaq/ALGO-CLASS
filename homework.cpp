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

    printlist(head);
}