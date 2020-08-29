#include<stdio.h>
#include<conio.h>
const int MAX = 1000;
int main()
{
    char a[MAX], b[MAX];
    char c[MAX];
    printf("\nEnter the first string: ");
    gets(a);
    printf("\nEnter the second string: ");
    gets(b);
    strcat(a, b);
    printf("\nThe concatenated string is: %s\n", a);



}
