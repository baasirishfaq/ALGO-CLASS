#include <bits/stdc++.h>
using namespace std;

long int multiplyNumber(int n);

int main()
{
    int n, result;
    cout << "Enter a number: ";
    cin >> n;
    result = multiplyNumber(n);
    cout << "Factorial of " << n << " is = " << result << endl;
    return 0;
}

long int multiplyNumber(int n)
{
    if (n > 1)
    {
        return n * multiplyNumber(n - 1);
    }
    else
        return 1;
}
