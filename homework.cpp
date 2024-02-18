class Solution
{
public:
    int maximumDifference(vector<int> &nums)
    {
        int ans = 0, currans = 0, n = nums.size();

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[j] > nums[i])
                {
                    currans = nums[j] - nums[i];
                    if (currans > ans)
                    {
                        ans = currans;
                    }
                }
            }
        }
        if (ans <= 0)
            return -1;
        return ans;
    }
};