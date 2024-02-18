class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        int curr_sum = 0, final_ans = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            curr_sum += nums[i];

            final_ans = max(curr_sum, final_ans);
            if (curr_sum < 0)
            {
                curr_sum = 0;
            }
        }
        return final_ans;
    }
}; //