#include<stdio.h>
#include<ctype.h>
#include<string.h>

const int MAX = 100;
int main()
{
    char arr[MAX];
    int i;
    printf("Enter a string: ");
    gets(arr);
    printf("You entered: %s\n", arr);
    for(i=0;i<strlen(arr);i++)
    {
        if(islower(arr[i]))
        {
            putchar(arr[i]);
            printf(" is lowercase. \n");
        }

    }




    return 0;
}
