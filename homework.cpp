#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr = {0, 1, 2, 3, 4, 5, 4, 3, 2, 1, 0};
    int n = arr.size();
    int leftptr, rightptr;
    int maxLength = 0;

    for (int i = 1; i < n - 1; i++)
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

            maxLength = max(maxLength, rightptr - leftptr + 1);
        }
    }
    cout << maxLength;
} //////

/* THIS DID NOT WORK
class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int maxlength = 0;
        for (int i = 1; i < n - 1; i++) {
            if ((arr[i] > arr[i - 1]) && (arr[i] > arr[i + 1])) {
                int leftptr = i;
                int rightptr = i;

                while ((leftptr > 0) && (arr[leftptr] > arr[leftptr - 1])) {
                    leftptr--;
                }
                while ((leftptr < n - 1) &&
                       (arr[rightptr] > arr[rightptr + 1])) {
                    rightptr++;
                }
                maxlength = max(maxlength, (rightptr - leftptr + 1));
                i = rightptr;
            }
        }
        return maxlength;
    }
};*/
/////
/*THIS WORKS
class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int leftptr, rightptr;
        int maxLength = 0;

        for (int i = 1; i < n - 1; i++) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                leftptr = i - 1;
                rightptr = i + 1;

                while (leftptr > 0 && arr[leftptr] > arr[leftptr - 1]) {
                    leftptr--;
                }
                while (rightptr < n - 1 && arr[rightptr] > arr[rightptr + 1]) {
                    rightptr++;
                }

                maxLength = max(maxLength, rightptr - leftptr + 1);
            }
        }
        return maxLength;
    }
};*/