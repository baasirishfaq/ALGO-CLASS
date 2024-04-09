#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr = {2, 1, 4, 7, 3, 2, 5};
    int n = arr.size();
    int leftptr, rightptr;
    int maxLength = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            leftptr = i - 1;
            rightptr = i + 1;

            while (leftptr > 0 && arr[leftptr] > arr[leftptr - 1])
            {
                leftptr--;
            }
            while (rightptr < n - 1 && arr[rightptr] > arr[rightptr + 1])
            {
                rightptr++;
            }

            maxLength = max(maxLength, rightptr - leftptr);
        }
    }
    cout << maxLength;
}
