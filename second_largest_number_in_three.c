#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c;
    printf("\nEnter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a==b && b==c)
    {
        printf("\nAll numbers are same. ");
    }
    else if(a>=b && a>=c)
    {
        if(b>=c)
        {
            printf("\n%d is the second largest. ", b);
        }
        else if(c<=b)
        {
            printf("\n%d is the second largest. ", c);
        }
    }
    else if(b>=c && b>=a)
    {
        if(a>=c)
        {
            printf("\n%d is the second largest", a);
        }
        else if(c>=a)
        {
            printf("\n%d is the second largest. ", c);
        }
    }
    else if(c>=a && c>=b)
    {
        if(a>=b)
        {
            printf("\n%d is the second largest. ", a);
        }
        else if(b>=a)
        {
            printf("\n%d is the second largest. ", b);
        }
    }
    else
    {
        printf("\nWrong input. \n");
    }
}
