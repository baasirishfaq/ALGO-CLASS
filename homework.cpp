#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, valuestore, count = 1;
        cout << "enter array length:";
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    valuestore = arr[i];
                    count++;
                }
            }
        }
        cout << valuestore << " " << count;
    }
    return 0;
}