#include <bits/stdc++.h>
using namespace std;

int arr[5];
int i = 0;
int siz = 0;

void insertatend(int a)
{
    if (siz == 5)
    {
        cout << "array is at full capacity " << endl;
        return;
    }
    arr[i] = a;
    i++;
    siz++;
}

void printarray()
{
    for (int j = 0; j < siz; j++)
    {
        cout << arr[j] << " ";
    }
}
void insertatloc(int ele, int loc)
{
    for (int i = 0; i < siz; i++)
    {
        if ()
    }
}

int main()
{
    insertatend(10);
    insertatend(20);
    insertatend(30);
    insertatend(40);

    printarray();

    return 0;
}