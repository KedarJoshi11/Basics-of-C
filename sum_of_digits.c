#include<stdio.h>
#include<conio.h>
int SumOfDigits(int);
int main()
{
    int num, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum = SumOfDigits(num);
    printf("\nThe sum of the digits is: %d", sum);

    return 0;
}
int SumOfDigits(int n)
{
    int s, a;
    s = s + (n%10);
    a = num/10;
    if(a>0)
    {
        SumOfDigits(a);
    }

    return s;
}
