#include<stdio.h>
#include<conio.h>
int isPal();
int n; // Global variable declaration to use in both the functions.
int main()
{
    int palindrome;
    printf("\nEnter the number to check for Palindrome: ");
    scanf("%d", &n);
    palindrome = isPal(n);
    if(palindrome == 1)
    {
        printf("\n%d is a palindrome. ", n);
    }
    else
    {
        printf("\n%d is not a palindrome. ", n);
    }

    return 0;
}
int isPal(int a)
{
    static int sum = 0;
    if(a != 0)
    {
        sum = sum *10 + a%10;
        isPal(a/10);
    }
    else if(sum == n)
        return 1;
    else
        return 0;
}
