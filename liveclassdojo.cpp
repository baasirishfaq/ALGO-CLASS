#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 3; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
} //