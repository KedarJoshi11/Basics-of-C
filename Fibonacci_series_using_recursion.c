#include<stdio.h>
#include<conio.h>
void Fibonacci(int);
int main()
{
    int k, n;
    long int i=0, j=1;
    printf("\nEnter the length of the Fibonacci series: ");
    scanf("%d", &n);
    printf("\nFirst %d terms of Fibonacci series are: \n\n", n);
    printf("%d ", 1);
    Fibonacci(n);
    return 0;
}
void Fibonacci(int a)
{
    static long int first=0, second=1, sum;
    if(a > 1)
    {
        sum = first + second;
        first = second;
        second = sum;
        printf("%ld ", sum);
        Fibonacci(a-1);
    }
    else
    {
        printf("\n\n\n");
    }
}
