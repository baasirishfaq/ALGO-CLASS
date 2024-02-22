
#include <bits/stdc++.h>
using namespace std;

int reverseNum;
int sumOfDigits(int n)
{
    if (n == 0)
        return 0;

    return (n % 10) + sumOfDigits(n / 10);
}

void reverseNumber(int num)
{
    if (num == 0)
        return;

    int lastDigit = num % 10;
    reverseNum = (reverseNum * 10) + lastDigit;
    reverseNumber(num / 10);
}

int isDigitSumPalindrome(int N)
{
    reverseNum = 0;
    int sumdig = sumOfDigits(N);
    reverseNumber(sumdig);
    if (sumdig == reverseNum)
        return 1;
    return 0;
}

int main()
{

    int N;
    cin >> N;
    cout << isDigitSumPalindrome(N) << "\n";
}
