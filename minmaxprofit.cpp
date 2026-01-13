#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[5] = {2,3,5,1,7};

    int minprice = INT_MAX;
    int maxprofit = INT_MIN;

    for(int i = 0; i<5; i++)
    {
        minprice = min(minprice, arr[i]);
        maxprofit = max(maxprofit, arr[i] - minprice);
    }
    cout<< maxprofit;
};