#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums = {1, 1, 1, 4, 4, 3, 3, 5};

    unordered_map<int, int> hashValues;

    for (auto num : nums)
    {
        hashValues[num]++;
    }

    for (auto pair : hashValues)
    {
        cout << pair.first << " " << pair.second << endl;
    }
}//
