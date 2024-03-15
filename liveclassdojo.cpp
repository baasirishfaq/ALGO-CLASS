#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push_back(x);
    }
    cout << "following items in stack:";
    for (int i = 0; i < n; i++)
    {
        cout << st[i] << " ";
    }
} //