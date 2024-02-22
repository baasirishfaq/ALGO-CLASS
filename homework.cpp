#include <bits/stdc++.h>

using namespace std;

int pallindromechk(int ans, int nr)
{
    if (ans == nr)
        return 1;
    else
    {
        return 0;
    }
}
int numreverse(int ans) // this function is used to reverse the numeber (answer in this case)...
{
    int remainder, reversed_number = 0;
    while (ans != 0)
    {
        remainder = ans % 10;
        reversed_number = reversed_number * 10 + remainder;
        ans /= 10;
    }
    return reversed_number;
}

int sumdig(int n) // recursion taking place in this function
{
    if (n == 0)
        return 0;

    return n % 10 + sumdig(n / 10);
}

int main()
{
    int n = 56;
    int ans = sumdig(n);
    int nr = numreverse(ans);
    int fn = pallindromechk(ans, nr);
    cout << ans << "\n";
    cout << nr << "\n";
    cout << "final answer " << fn;

    return 0;
}