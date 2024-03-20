#include <bits/stdc++.h>

using namespace std;
//
 //
int main()
{
    int n;
    cin >> n;
    int nums[n];
    cout << "enter vals in numsay" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < nums[i + 1])
        {
            for (int j = 0; j < n; j++)
            {
                if (nums[j] > nums[i])
                {
                    nums[i] = nums[j];
                }
            }
        }
        else
        {
            nums[i] = -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}