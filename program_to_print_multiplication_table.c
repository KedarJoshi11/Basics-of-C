#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, answer = 1;
    printf("Enter the number you want the table of: ");
    scanf("%d", &n);

    for(i=1;i<=10;i++)
    {
        answer = n * i;
        printf("%d x %d  = %d\n", n, i, answer);
    }

    return 0;
}
