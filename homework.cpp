#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    int water[tc];

    for (int i = 0; i < tc; i++)
    {
        cin >> water[i];
    }
    for (int j = 0; j < tc; j++)
    {
        if (water[j] >= 2000)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
};