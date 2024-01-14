#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int sum = 0;
    int arr[4] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        sum = sum + arr[i] % 10;
    }
    cout << "sum is " << sum;
}