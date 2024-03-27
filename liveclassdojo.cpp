class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> map1;
        int sum = 0;
        map1[0] = 1;
        int subarrays = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if (map1.count(sum - k))
            {
                subarrays += map1[sum - k];
            }
            map1[sum] += 1;
        }
        return subarrays;
    }
};