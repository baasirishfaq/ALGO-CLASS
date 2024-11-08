#include <stdio.h>

#define N 3

void print2D(int arr[N][N]);
int isLeftEqualToRightd(int arr[N][N], int *sumLeft, int *sumRight);

int main()
{
    int arr[N][N];
    int i, j;
    int result, sumLeftD, sumRightD;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    result = isLeftEqualToRightd(arr, &sumLeftD, &sumRightD);

    print2D(arr);

    printf("Sum of left diagonal = %d\n", sumLeftD);
    printf("Sum of right diagonal = %d\n", sumRightD);

    if (result == 1)
    {
        printf("Sum of left diagonal is equal to sum of right diagonal\n");
    }
    else
    {
        printf("Sum of left diagonal is not equal to sum of right diagonal\n");
    }

    return 0;
}

void print2D(int arr[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int isLeftEqualToRightd(int arr[N][N], int *sumLeft, int *sumRight)
{
    *sumLeft = 0;
    *sumRight = 0;

    // sum of the left diagonal
    for (int i = 0; i < N; i++)
    {
        *sumLeft += arr[i][i];
    }

    // sum of right diagonal

    for (int i = 0; i < N; i++)
    {
        *sumRight += arr[i][N - i - 1];
    }

    if (*sumLeft == *sumRight)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
