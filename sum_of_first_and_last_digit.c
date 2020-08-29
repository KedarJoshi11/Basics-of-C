#include<stdio.h>
#include<conio.h>
int main()
{
    int num, i;
    int first, last;
    int sum;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    last = num%10;
    first = num;
    while(first>=10)
    {
        first /= 10;
    }
    sum = first + last;
    printf("\nThe addition of first number %d and last number %d is: %d", first, last, sum);

}
