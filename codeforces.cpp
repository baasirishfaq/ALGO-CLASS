#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name = "wjmzbmr";
    int ctr = 0;
    unordered_set<char> seen;
    for (auto c : name)
    {
        seen.insert(c);
    }
    for (auto c : seen)
    {
        ctr++;
    }
    cout << ctr;
    if (ctr % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
};