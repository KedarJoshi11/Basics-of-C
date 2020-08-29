#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[1000], b[1000];
    int i=0, j=0, len;
    printf("\nEnter a string: ");
    gets(a);
    len = strlen(a);
    while(a[i] != '\0')
    {
        if(a[i] != ' ')
        {
            b[j++] = a[i];
        }
        i++;
    }
    b[j] = '\0';
    printf("\nThe String after removing all whitespace is: %s\n", b);

    return 0;
}
