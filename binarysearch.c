#include <stdio.h>

int main()
{

    int a[6] = {1, 2, 3, 4, 5, 6};
    int left = 0, right = 6;
    int key = 4;
    int flag = 0;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] = key)
        {
            printf("element found at index %d ", mid);
            flag = 1;
            break;
        }
        else if (a[mid] > key)
        {
            right = mid - 1;
        }
        else if (a[mid] < key)
        {
            left = mid + 1;
        }
    }
    if (flag == 1)
    {
        printf("element found");
    }
    else
        printf("not found");
};