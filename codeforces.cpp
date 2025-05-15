#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> s;

    for (int i = 1; i <= 10; i++)
    {
        s.push(i);
    }
    while (!s.empty())
    {
        if (s.top() % 2 == 0)
        {
            cout << s.top() << " ";
        }
        s.pop();
    }
};