#include<stdio.h>
#include<conio.h>

int main()
{
    int a, num, rem, sum = 0;
    printf("enter the number: ");
    scanf("%d", &num);
    a = num;

    while(num != 0)
    {
        rem = num%10;
        sum = sum + rem;
        num = num/10;
    }

    printf("The sum of the digits of the number %d is: %d", a, sum);


    return 0;
}
