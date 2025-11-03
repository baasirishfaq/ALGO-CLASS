#include <bits/stdc++.h>

using namespace std;

int main()
{
    int biggest = INT_MIN;
    int second = INT_MIN;
    int arr[10] = {3, 4, 5, 12, 3, 2, 7, 8, 10, 1};

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > biggest)
        {
            second = biggest;
            biggest = arr[i];
        }
        else if (arr[i] < biggest && arr[i] > second)
        {
            second = arr[i];
        }
    }
    cout << biggest << " " << second;
};