#include<stdio.h>
int main()
{
    int i;
    char arr[1000];
    printf("\nEnter the string: ");
    gets(arr);
    for(i=0;arr[i] != '\0';i++);
    printf("\nThe length of the string is: %d", i);
}
