#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[6] = {1, 5, 3, 4, 2, 6};
    int biggest = INT_MIN;
    int second;
    for(int i = 0; i<6; i++)
    {
        if(arr[i]>biggest)
        {
            second = biggest;
            biggest = arr[i];
        }
        else if(arr[i] < biggest && arr[i] > second)
        {
            second = arr[i];
        }
    }
    cout << biggest << " " << second;
    
};