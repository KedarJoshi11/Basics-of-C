#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i;
    printf("Enter the number you want the factors of:");
    scanf("%d", &n);

    for(i=1; i <= n/2; i++)
    {
        if(n%i == 0)
            printf("%d is a factor of %d\n", i, n);
    }

    return 0;
}
