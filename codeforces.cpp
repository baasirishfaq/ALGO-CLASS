#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "konjack";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[0] >= 97 && s[0] <= 122)
        {
            s[0] = toupper(s[0]);
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
};