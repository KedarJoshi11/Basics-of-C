#include<stdio.h>
#include<conio.h>
void fibonacci(int num);
int main()
{
    int num;
    printf("Enter the number of terms you want in the series: ");
    scanf("%d", &num);
    fibonacci(num);
    return 0;
}
void fibonacci(int num)
{
    int a, b, c, i = 3;
    a = 0;
    b = 1;

    if(num == 1)
        printf("%d", a);
    if(num>=2)
        printf("%d\t%d\t", a, b);

    while(i <= num)
    {
        c = a+b;
        printf("%d\t", c);
        a = b;
        b = c;
        i++;
    }
}
