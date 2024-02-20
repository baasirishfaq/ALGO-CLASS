class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += nums[i];
        }
        int maxsum = sum;

        int start_index = 0;
        int end_index = k;

        while (end_index < nums.size())
        {
            sum = sum - nums[start_index];
            start_index++;

            sum = sum + nums[end_index];
            end_index++;

            maxsum = max(maxsum, sum);
        }
        return (double)maxsum / k;
    }
};