#include<stdio.h>
#include<conio.h>
int power(int a, int b);
int main()
{
    int a, b, ans;
    printf("\nEnter a base number: ");
    scanf("%d", &a);
    printf("\nEnter a power number: ");
    scanf("%d", &b);
    ans = power(a, b);
    printf("%d to the power %d is: %d \n", a, b, ans);

    return 0;
}
int power(int a, int b)
{
    int sum = 0;
    if(b == 0)
        return 1;

    return(a * power(a, b-1));

}

