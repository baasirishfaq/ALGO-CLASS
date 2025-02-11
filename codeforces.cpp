#include <stdio.h>
#include <stdlib.h>

void sumofodd(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            sum += arr[i];
        }
    }
    printf("the sum of odd numbers in the array is %d", sum);
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter elements in the array");
        scanf("%d", &arr[i]);
    }

    sumofodd(arr, n);

    free(arr);
}