class Solution
{
public:
    void helper(int start, int end, vector<char> &s)
    {
        if (start > end)
            return;

        char temp = s[end];
        s[end] = s[start];
        s[start] = temp;
        helper(start + 1, end - 1, s);
    }

    void reverseString(vector<char> &s)
    {
        helper(0, s.size() - 1, s);
    }
};