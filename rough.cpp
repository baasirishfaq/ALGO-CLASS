#include <bits/stdc++.h>

using namespace std;

int main()
{
    {
        string s = "0P";
        vector<string> mystr;
        cout << "this is the given string: " << s << endl;
        for (int i = 0; i < s.size(); i++)
        {
            if (!isdigit(s[i]) && s[i] < 'A' || s[i] > 'Z' && s[i] < 'a' || s[i] > 'z')
            {
                s.erase(i, 1);
                i--;
            }
        }
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string chk(s);
        reverse(chk.begin(), chk.end());
        cout << "this is ans stack string :" << s << endl;
        cout << "this is reverse : " << chk << endl;
        if (s == chk)
        {
            cout << "true";
        }
        else
        {
            cout << "false";
        }
    }
}