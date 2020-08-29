#include<stdio.h>
#include<conio.h>
#include<string.h>
const int MAX = 100;
int main()
{
    char a[MAX];
    char b[MAX];
    int i;
    printf("Enter a string for A: ");
    gets(a);
    printf("Current A = %s\t Current B = %s\n", a, b);
    strcpy(b, a);
    printf("Now A: %s\t Now B = %s\n", a, b);
    return 0;
}
