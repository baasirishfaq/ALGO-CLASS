class Solution {
public:
    int maxVowels(string s, int k) 
    {
        unordered_set <char> vowels = {'a', 'e', 'i', 'o', 'u'};

        int maxvowels = 0, windowvowels = 0;

        for(int i = 0; i<k; i++)
        {
            if(vowels.contains(s[i]))
            {
                windowvowels ++;
            }
        }
        maxvowels = windowvowels;

        for(int i = k; i<s.size(); i++)
        {
            if(vowels.contains(s[i-k]))
            {
                windowvowels--;
            }
            if(vowels.contains(s[i]))
            {
                windowvowels++;
            }
            maxvowels = max(maxvowels, windowvowels);
        }
        return maxvowels;
    }
};