#include <bits/stdc++.h>
using namespace std;

int main()
{
    {
        string s("zabx#bhec###ab####z");
        string t("ad#c##zaz");

        string st = "";
        string st1 = "";

        // Loop until both strings are exhausted
        for (int i = 0, j = 0; i < s.size(), j < t.size(); i++, j++)
        {
            // Process string s
            if (i < s.size() && s[i] == '#')
            {
                if (!st.empty())
                {
                    st.pop_back();
                }
            }
            else if (i < s.size())
            {
                st.push_back(s[i]);
            }

            // Process string t
            if (j < t.size() && t[j] == '#')
            {
                if (!st1.empty())
                {
                    st1.pop_back();
                }
            }
            else if (j < t.size())
            {
                st1.push_back(t[j]);
            }
        }
        cout << st << endl;
        cout << st1 << endl;

        // Check if the modified strings are equal
        bool x = st == st1;
        cout << x << endl;
    }
    return 0;
}
