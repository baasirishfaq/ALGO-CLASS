#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s("leet**cod*e");
    vector<char> st;

    st.push_back(s[0]);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i + 1] == '*')
        {
            st.pop_back();
        }
        else
        {
            st.push_back(s[i + 1]);
        }
    }
    string ans(st.begin(), st.end());
    cout << ans << endl;
}

//

class Solution
{
public:
    string removeStars(string s)
    {
        vector<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '*')
            {
                st.pop_back();
            }
            else
            {
                st.push_back(s[i]);
            }
        }
        string stx(st.begin(), st.end());
        return stx;
    }
};