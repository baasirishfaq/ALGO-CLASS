// #include <bits/stdc++.h>

// using namespace std;
//
// int main()
// {
//     {
//         string s = "1b1";
//         int flag = 0;
//         cout << "this is the given string: " << s << endl;
//         vector<char> st;
//         vector<int> st2;
//         for (int i = 0; i < s.length(); i++)
//         {
//             if (isalpha(s[i]))
//             {
//                 st.push_back(s[i]);
//             }
//             else if (isdigit(s[i]))
//             {
//                 st2.push_back(s[i]);
//             }
//         }
//         string ans(st.begin(), st.end());
//         string ans2(st2.begin(), st2.end());
//         transform(ans.begin(), ans.end(), ans.begin(), ::tolower);
//         ans.append(ans2);
//         string chk(ans);
//         reverse(chk.begin(), chk.end());
//         cout << "this is ans stack string :" << ans << endl;
//         cout << "this is reverse : " << chk << endl;
//         if (ans == chk && flag == 0)
//         {
//             cout << "true";
//         }
//         else
//         {
//             cout << "false";
//         }
//     }
// }

//
// WORKING SOLN:-
#include <bits/stdc++.h>

using namespace std;

int main()
{
    {
        string s = "P";
        int n = s.length();
        int askilist[n];
        // cout << "this is the given string: " << s << endl;
        for (int i = 0; i < s.size(); i++)
        {
            if (!isdigit(s[i]) && s[i] < 'A' || s[i] > 'Z' && s[i] < 'a' || s[i] > 'z')
            {
                for (int j = 0; j <= n; j++)
                {
                    cin >> (askilist[j]);
                }
            }
        }
        for (int j = 0; j <= n; j++)
        {
            cout << "ascii list :" << (askilist[j]) << endl;
        }
        // transform(s.begin(), s.end(), s.begin(), ::tolower);
        // string chk(s);
        // reverse(chk.begin(), chk.end());
        // cout << "this is ans stack string :" << s << endl;
        // cout << "this is reverse : " << chk << endl;
        // if (s == chk)
        // {
        //     cout << "true";
        // }
        // else
        // {
        //     cout << "false";
        // }
    }
}