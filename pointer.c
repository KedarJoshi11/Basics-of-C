#include<stdio.h>
#include<conio.h>
int main()
{
    int var = 24;
    int *p;
    p = &var;

    printf("\nAddress of variable is: %x", &var);
    printf("\nAddress stored in pointer variable p is: %x", p);
    printf("\nValue of var variable or the value stored at address p is: %d", *p);


    return 0;
}
