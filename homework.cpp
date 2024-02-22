#include <bits/stdc++.h>

using namespace std;

int sum(int arr[], int n)
{
    if (n == 0)
        return 0;
    return arr[n - 1] + sum(arr, n - 1);
}

int main()
{
    int n;
    n = 4;
    int arr[n] = {1, 2, 3, 4};

    int ans = sum(arr, n);
    cout << ans << "\n";
    return 0;
}