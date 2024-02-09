class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int currnum = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] != currnum)
            {
                return currnum;
            }
            currnum++;
        }
        return currnum;
    } //
};