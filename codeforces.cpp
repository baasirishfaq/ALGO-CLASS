class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_map <int, vector<int>> mp;
        vector <vector <int>> ans;
        
        for(int i = 0; i<n; i++)
        {
            int L = nums[i];

            mp[L].push_back(i);

            if(mp[L].size() == L)
            {
                ans.push_back(mp[L]);
                mp[L].clear();
            }
        }
        return ans;
    }
};