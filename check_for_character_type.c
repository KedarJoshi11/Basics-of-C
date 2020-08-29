#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
const int MAX = 1000;
int main()
{
    char arr[MAX];
    int i;
    printf("\nEnter a string: ");
    gets(arr);
    printf("\nYou entered: %s\n", arr);
    for(i=0;i<strlen(arr);i++)
    {
        if(isalpha(arr[i]))
        {
            putchar(arr[i]);
            printf(" is an alphabet. \n");
        }
        else if(isdigit(arr[i]))
        {
            putchar(arr[i]);
            printf(" Is a digit. \n");
        }
        else if(isalnum(arr[i]))
        {
            putchar(arr[i]);
            printf(" Is alphanumeric. \n");
        }
        else if(isspace(arr[i]))
        {
            putchar(arr[i]);
            printf(" Is a space. \n");
        }
        else if(ispunct(arr[i]))
        {
            putchar(arr[i]);
            printf(" Is a punctuation mark. \n");
        }
        else if(isprint(arr[i]))//checks if an input can be printed or not.
        {
            printf("We can't print that thing. \n");
        }
        else
        {
            printf("\nWhat the hell is that? Rhetorical question.\n");
        }
    }
    printf("Press ENTER key to Continue\n");
    getchar();
    return 0;
}
