class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        int ans = 0, n = nums.size() / 2;
        for (int num : nums)
        {
            mp[num]++;
        }
        for (auto a : mp)
        {
            if (a.second > n)
            {
                ans = a.first;
            }
        }
        return ans;
    }
};