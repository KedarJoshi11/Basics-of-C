#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b;
    int temp;
    int *ptrA = &a;
    int *ptrB = &b;

    printf("\nEnter value of A: ");
    scanf("%d", &a);
    printf("\nEnter value of B: ");
    scanf("%d", &b);
    printf("\nBefore swapping: ");
    printf("\nA = %d \t B = %d\n", a, b);
    printf("\nAfter swapping: ");
    temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
    printf("\nA = %d \t B = %d\n\n", a, b);




}
