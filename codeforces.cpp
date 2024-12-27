#include <bits/stdc++.h>

using namespace std;

int main()
{
    int limak, bob, ctr = 0;
    cin >> limak;
    cin >> bob;

    while (limak <= bob)
    {
        if (limak <= bob)
        {
            bob = bob * 2;
            limak = limak * 3;
            ctr++;
        }
    }
    cout << ctr;
};