#include <stdio.h>

int main()
{
    char x = 'a'; // normal variable
    char *p;     // declare pointer to int
    p = &x;     // p stores the address of x
    
    printf("address is %p\n", p); // print address stored in p
};