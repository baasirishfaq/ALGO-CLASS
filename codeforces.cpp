#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;
    x = 0;
    while (n > 0)
    {
        string input;
        cin >> input;
        if (input == "X++" || input == "++X")
        {
            x++;
        }
        if (input == "X--" || input == "--X")
        {
            x--;
        }
        n--;
    }
    cout << x;
};