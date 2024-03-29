class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_set<int> numset;
        for (int num : nums)
        {
            if (numset.count(num))
                numset.erase(num);
            else
                numset.insert(num);
        }
        return *numset.begin();
    }
};