#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int firstUniqChar(string s)
{
    unordered_map<char, int> mp;
    for (char c : s)
    {
        mp[c]++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (mp[s[i]] == 1)
        {
            return i;
        }
    }
    return -1; // If no unique character found//
}

int main()
{
    string s = "leetcode";
    int index = firstUniqChar(s);
    if (index != -1)
    {
        cout << "Index of the first unique character: " << index << endl;
    }
    else
    {
        cout << "No unique character found in the string." << endl;
    }
    return 0;
}
