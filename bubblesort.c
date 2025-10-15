// #include <stdio.h>
 


// BUBBLE SORT
// int main()
// {
//     int arr[8] = {3,6,1,7,4,5,6,9};

//     for(int i = 0; i<8; i++)
//     {
//         for(int j = 0; j<8-1; j++)
//         {
//             if(arr[j] > arr[j+1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     for(int i = 0; i<8; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// };




// SELECTION SORT
// int main()
// {
//     int arr[8] = {3, 6, 1, 7, 4, 5, 6, 9};

//     for (int i = 0; i < 8; i++)
//     {
//         int min = i;
//         for (int j = i + 1; j < 8; j++)
//         {
//             if (arr[j] < arr[min])
//             {
//                 min = j;
//             }
//         }
//         int temp = arr[i];
//         arr[i] = arr[min];
//         arr[min] = temp;
//     }
//     for (int i = 0; i < 8; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// };