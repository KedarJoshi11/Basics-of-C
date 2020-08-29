#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
const int MAX = 100;
int main()
{
    char arr[MAX];
    int i;
    printf("Enter a string: ");
    gets(arr);
    printf("\nThe string you entered is: %s\n\n", arr);
    for(i=0;i<strlen(arr);i++)
    {
        if(isupper(arr[i]))
        {
            putchar(arr[i]);
            printf(" is uppercase. \n");
        }
    }

    return 0;
}
