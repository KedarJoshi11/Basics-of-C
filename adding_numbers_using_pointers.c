#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, sum;
    int *aptr;
    int *bptr;

    printf("\nEnter two numbers: ");
    scanf("%d%d", &a, &b);
    aptr = &a;
    bptr = &b;
    sum = *aptr + *bptr;
    printf("\nThe sum of two numbers %u + %u is: %d", *aptr, *bptr, sum);
}
