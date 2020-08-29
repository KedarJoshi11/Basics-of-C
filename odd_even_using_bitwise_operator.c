#include<stdio.h>
#include<conio.h>

int main()
{
    int l, i;
    printf("Enter a number upto which you want the odd and even numbers: ");
    scanf("%d", &l);
    for(i=0;i<=l;i++)
    {
        if(i&1)
            printf("The number %d is odd. \n", i);
        else if(!(i&1))
            printf("The number %d is even. \n", i);
    }

    printf("\n");
    printf("Somethings about bitwise operator to remember: \n");
    printf("1. x&1 returns True if the LSB of the number is 1.\n");
    printf("2. x&1 returns False if the LSB of the number is 0.\n");
    printf("3. In Binary if the LSB of a number is one, it is odd.\n");
    printf("4. In Binary, if the LSB of a number is 0, it is even. \n");

}
