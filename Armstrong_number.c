#include<stdio.h>
#include<conio.h>

int main()
{
    int l, i, sum=0, number, a;
    printf("This program prints the armstrong numbers upto a certain limit. \n");
    printf("Enter the number upto which you want the armstrong numbers: ");
    scanf("%d", &l);
    printf("This program will now print the armstrong numbers upto %d\n", l);
    for(i=0;i<=l;i++)
    {
        number = i;
        sum=0;
        while(number != 0)
        {
            a = number%10;
            sum += a*a*a;
            number = number/10;
        }

        if(sum == i)
        {
            printf("%d Is an armstrong number. \n", i);
        }

    }



}
