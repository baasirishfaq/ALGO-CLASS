#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    string text("hey hey you you me");
    string word;

    for (char c : text)
    {

        if (isalpha(c))
        {
            word += c;
        }
        else if (!word.empty())
        {
            mp[word]++;
            word.clear();
        }
    }

    if (!word.empty())
    {
        mp[word]++;
    }

    for (auto pair : mp)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
