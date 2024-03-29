#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<int, int> mp;

    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 2, 2, 3, 2};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr1[i] == arr2[j])
            {
                int key = arr1[i];
                mp[key]++;
            }
        }
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << "ELEMENT " << it->first << " OCCURS " << it->second << endl;
    }
}