#include<stdio.h>
#include<conio.h>
int main()
{
    int var;
    int *ptr;
    int **pptr;
    var = 50;
    ptr = &var;
    pptr = &ptr;

    printf("\nValue of var: %d\n", var);
    printf("\nValue of ptr: %d\n", *ptr);
    printf("\nValue of **pptr: %d\n", **pptr);


    return 0;
}
