class Solution
{
public:
    int bar = 0, count = 0;
    int countAsterisks(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '|')
                bar++;
            if (bar % 2 == 0 && s[i] == '*')
                count++;
        }
        return count;
    }
}; //