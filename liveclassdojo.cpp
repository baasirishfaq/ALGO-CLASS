// code to compare sum of two diagonals


#include <stdio.h>

#define N 3

void print2D(int arr[N][N]);
int isLeftdEqualToRightd(int arr[N][N], int *, int *);

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

   result = isLeftdEqualToRightd(arr, &sumLeftD, &sumRightD);

   print2D(arr);

   printf("Sum of left diagonal = %d\n", sumLeftD);
   printf("Sum of right diagonal = %d\n", sumRightD);

   if (result)
   {
      printf("Sum of left diagonal is equal to sum of right diagonal\n");
   }
   else
   {
      printf("Sum of left diagonal is not equal to sum of right diagonal\n");
   }

   return 0;

 }

//this function has two tasks 
/*take a 2d array, return 1 if sum of elements on its left diagnal is equal to the sum of elements on its right diagonal, zero if not*/
/*output the two sums to the calling funciton*/

int isLeftEqualToRightd (int arr[N] [N], int *sumLeft, int *sumRight)
{
   int i;
   *sumLeft = 0;
   *sumRight = 0;
   //complete the rest of code here use seperate loop for each diagonal
}