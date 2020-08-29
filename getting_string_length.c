#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int length;
    char arr[1000];
    printf("Enter a string: ");
    gets(arr);
    length = strlen(arr);
    printf("\nThe length of the input string is: %d\n", length);

    return 0;
}
