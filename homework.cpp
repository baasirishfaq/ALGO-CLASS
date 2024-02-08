class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int sa = 0;
        int n = nums.size();

        for (int i = 0; i < nums.size(); i++)
        {
            sa = sa + nums[i];
        }

        int sn = n * (n + 1) / 2;

        int missingnum = sn - sa;
        return missingnum;
    }
};