#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<string> nums;
    string uinput;
    cin >> uinput;

    while (uinput != "0")
    {
        nums.push_back(uinput);
        cin >> uinput;
    }
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int counter = 1;
    vector<string> st;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == counter)
        {
            counter++;
        }
        else
        {
            st.push_back(counter);
            counter++;
        }
    }
    string ans(st.begin(), st.end());
    int m = stoi(ans);
    return m;
}
