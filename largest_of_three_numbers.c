#include<stdio.h>
#include<conio.h>
int main()
{
    float a, b, c;
    printf("\nEnter 3 numbers: ");
    scanf("%f%f%f", &a, &b, &c);
    if(a == b && b == c)
    {
        printf("\nAll numbers are same. ");
    }
    else if(b >= a && b >= c)
    {
        printf("\n%.2f is the greatest. ", b);
    }
    else if(c >= a && c>= b)
    {
        printf("\n%.2f is the greatest. ", c);
    }
    else if(a >= b && a>= c)
    {
        printf("\n%.2f is the greatest. ", a);
    }
    else
    {
        printf("\nWrong input. ");
    }

}
