#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums[4] = {1, 3, 5, 6};
    int target = 2;

    for(int i = 0; i < 4; i++)
    {
        if(nums[i] == target)
        {
            cout << i << endl;
            return 0;
        }
        else if(nums[i] > target)
        {
            cout << i << endl;
            return 0;
        }
    }
    
}
