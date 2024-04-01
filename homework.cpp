#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    unordered_map<char, int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;

    string s;
    cout << "Enter a Roman numeral: ";
    cin >> s;

    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (m[s[i]] < m[s[i + 1]])
        {
            ans -= m[s[i]];
        }
        else
        {
            ans += m[s[i]];
        }
    }

    cout << "Integer representation: " << ans << endl;

    return 0;
}
