#include<stdio.h>
#include<conio.h>
int add(int m, int n);
int main()
{
    int a, b, r;
    printf("\nEnter the two numbers: ");
    scanf("%d%d", &a, &b);
    r = add(a, b);
    printf("\nSum of %d and %d is: %d", a, b, r);
}
int y;
int add(int m, int n)
{
    if(n==0)
    {
        return m;
    }
    y = add(m, n-1)+1;
    return y;
}
