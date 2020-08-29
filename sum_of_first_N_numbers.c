#include<stdio.h>
#include<conio.h>
int getSum(int);
int main()
{
    int n, sum;
    printf("Enter the range of n: ");
    scanf("%d", &n);
    sum = getSum(n);
    printf("\nThe sum of the first %d numbers is: %d\n", n, sum);

    return 0;
}
int getSum(n)
{
    static int sum = 0;
    if(n>0)
    {
        sum = sum + n;
        getSum(n-1);
    }
    return sum;
}
