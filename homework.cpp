#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "enter array size: ";
    int n;
    cin >> n;
    int arr[n];
    int currnum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(n, n + 1);

    for (int i = 0; i < n; i++, currnum++)
    {
        if (currnum != arr[i])
        {
            currnum = arr[i];
        }
    }
    cout << "missing num is " << currnum;
}