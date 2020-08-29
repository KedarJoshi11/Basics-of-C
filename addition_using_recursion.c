#include<stdio.h>
#include<conio.h>
int addition(int n, int m);
int main()
{
    int a, b, answer;
    printf("\nEnter two numbers: ");
    scanf("%d%d", &a, &b);
    answer = addition(a, b);
    printf("The addition of %d and %d is: %d", a, b, answer);
}
int addition(int n, int m)
{
    int r;
    r = n + m;
    return r;
}
