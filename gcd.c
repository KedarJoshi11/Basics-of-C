#include<stdio.h>
#include<conio.h>
int main()
{
    int x, y=-1;
    printf("\nEnter numbers. To exit enter 0\n");
    while(1)
    {
        scanf("%d", &x);
        if(x<1)
            break;
        else if(y == -1)
            y = x;
        else if(x < y)
            y = gcd(x, y);
        else
            y = gcd(y, x);
    }
    printf("\nGCD of all the entered number is: %d", y);

    return 0;
}
int gcd(int a, int b)
{
    int i;
    for(i = a; i >= 1; i--)
    {
        if(a%i == 0 && b%i == 0)
            break;
    }
    return i;
}
