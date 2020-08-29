#include<stdio.h>
#include<conio.h>
int find_lcm(int, int);
int main()
{
    int a, b, lcm;
    printf("\nEnter two integers to find the LCM of: ");
    scanf("%d%d", &a, &b);
    lcm = find_lcm(a, b);
    printf("\nLCM of %d and %d is: %d", a, b, lcm);
    return 0;
}
int find_lcm(int a, int b)
{
    static int temp = 1;
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_lcm(a, b);
        return temp;
    }
}
