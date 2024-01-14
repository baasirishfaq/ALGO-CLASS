#include <iostream>
#include <stdio.h>

using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    int smallerArray[size - 1];
    for (int i = 1; i < size; i++)
    {
        smallerArray[i - 1] = arr[i];
    }
    bool isSmallerSorted = isSorted(smallerArray, size - 1);
    if (isSmallerSorted)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int arr[] = {1, 6, 3, 4};
    cout << isSorted(arr, 4) << endl;
}
