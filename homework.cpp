#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, valuestore = 0, count = 0;

        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            int ct = 0;
            for (int j = i; j < n; j++)
            {
                if (arr[i] == arr[j])
                {

                    ct++;
                }
            }
            if (ct > count)
            {
                valuestore = arr[i];
                count = ct;
            }
            else if (ct == count && arr[i] < valuestore)
            {
                valuestore = arr[i];
            }
        }

        cout << valuestore << " " << count << endl;
    }
    return 0;
}