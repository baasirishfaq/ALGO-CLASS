#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, int> mp;

    int arr[10] = {1, 1, 1, 1, 2, 2, 3, 4, 4, 10};

    for (int i = 0; i < 10; i++)
    {
        int key = arr[i];
        mp[key]++;
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}