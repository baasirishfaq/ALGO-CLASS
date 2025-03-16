#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> s;

    for (int i = 1; i <= 5; i++)
    {
        s.push(i * 10);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << s.top() << " ";
        s.pop();
    }
};