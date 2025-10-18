#include <stdio.h>

int main()
{

int arr[] = {2, 4, 6};
int *p = arr;
printf("%d", *p++ + *p);

};