#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[3] = {2, 0, 1};

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
};