#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> s;
    int ans[5];
    for (int i = 1; i <= 5; i++)
    {
        s.push(i * 10);
    }

    stack<int> temp = s;

    int i = 0;
    while (!temp.empty())
    {
        ans[i] = temp.top();
        i++;
        temp.pop();
    }

    for (int i = 5 - 1; i >= 0; i--)
    {
        cout << ans[i] << endl;
    }
};