#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[100];
    int i;
    printf("Enter a string: ");
    gets(arr);
    strrev(arr);
    printf("\nThe reverse string is: ");
    printf("%s\n", arr);

    return 0;
}
