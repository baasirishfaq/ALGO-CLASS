#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums = {12, 34, 56, 78, 90, 23, 45, 67};

    unordered_map<int, int> hashValues;

    for (auto num : nums)
    {
        hashValues[num] = num % 10;
    }

    for (auto pair : hashValues)
    {
        cout << pair.first << " " << pair.second << endl;
    }
}
