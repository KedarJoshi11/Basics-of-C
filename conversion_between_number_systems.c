#include<stdio.h>
#include<conio.h>
int binary_decimal(int n);
int main()
{
    int n, c;
    printf("\nEnter the binary number: ");
    scanf("%d", &n);
    printf("\nThe decimal equivalent of %d is: %d", n, binary_decimal(n));

    return 0;
}
int binary_decimal(int n)
{
    int decimal = 0, i = 0, rem;
    while(n!=0)
    {
        rem = n%10;
        n=n/10;
        decimal += rem*pow(2, i++);
    }
    return decimal;
}
