#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++)
    {
        mp[i]++;
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        for (auto it2 = mp.begin(); it2 != mp.end(); it2++)
        {
            if (it->first + it2->first == target)
            {
                cout << it->first << it2->first;
            }
        }
    }
} //