#include<stdio.h>
#include<conio.h>

int main()
{
    int num, a, b, c, s = 0;
    printf("Enter a number to check if it is a palindrome or not: ");
    scanf("%d", &a);
    num = a;
//The numbers is reversed in this block
    while(a > 0)
    {
        b = a%10;
        s = (s*10)+b;
        a = a/10;
    }
//comparing if the number is a palindrome or not in this block.
    if(s == num)
        printf("The number %d is a palindrome. ", num);
    else
        printf("The number %d is not a palindrome. ", num);


    return 0;
}
