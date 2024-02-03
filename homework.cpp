#include <bits/stdc++.h>

using namespace std;

int main()
{
    {
        string s = "A man, a plan, a canal: Panama";
        cout << "this is the given string: " << s << endl;
        vector<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (isalpha(s[i]))
            {
                st.push_back(s[i]);
            }
        }
        string ans(st.begin(), st.end());
        transform(ans.begin(), ans.end(), ans.begin(), ::tolower);
        string chk(ans);
        reverse(chk.begin(), chk.end());
        // cout << "this is ans stack string :" << ans << endl;
        // cout << "this is reverse : " << chk << endl;
        if (ans == chk)
        {
            cout << "true";
        }
        else
        {
            cout << "false";
        }
    }
}