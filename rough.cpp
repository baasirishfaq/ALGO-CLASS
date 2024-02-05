#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str)
{
    int n = str.length(), numstore[n];
    for (int i; i < str.length(); i++)
    {
        if (!isdigit(str[i]))
        {
            str.erase(i, 1);
        }
    }
    cout << str << endl;
}

int main()
{
    string str("23,33,22");
    // cin >> str;

    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}