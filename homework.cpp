#include <bits/stdc++.h>

using namespace std;

// THIS IS BUBBLE SORT

int main()
{
    int arr[16] = {4, 5, 1, 5, 6, 7, 4, 3, 2, 6, 8, 2, 98, 43, 12, 55};

    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            if (arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
                // int temp = arr[i];
                // arr[i] = arr[j];
                // arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 16; i++)
    {
        cout << arr[i] << " ";
    }
}