class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector <int> newarr;
        int length = nums.size();
        int len = nums.size();
        for(int i = 0, j = n; i < n-1, j < length; i++, j++)
        {
            newarr.push_back(nums[i]);
            newarr.push_back(nums[j]);
        }
        return newarr;
    }
};