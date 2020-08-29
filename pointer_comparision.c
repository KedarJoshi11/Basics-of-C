#include<stdio.h>
#include<conio.h>

int main()
{
    int *ptrA,*ptrB;
    float *fptrA, *fptrB;

    ptrA = (int *)1;
    ptrB = (int *)2;

    if(ptrB > ptrA)
        printf("\nPtrB is greater than ptrA\n");
    else if(ptrA > ptrB)
        printf("\nptrA is greater than ptrB\n");
    else
        printf("Both are equal. ");

    printf("\n");
    fptrA = 2000;
    fptrB = 4000;

    if(fptrA > ptrA)
        printf("\nfptrA is greater. \n");
    else if(ptrA > fptrA)
        printf("\nfptrB is greater. \n");
    else
        printf("Both are equal. ");


return(0);
}
