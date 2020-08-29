#include<stdio.h>
#include<conio.h>
#define MAX 100

int main()
{
    int i, j, k;
    char statement[100];
    char reverse[100];

    printf("Enter a string: \t");
    gets(statement);
    printf("You entered: %s\n", statement);
    //scanf("%s", &statement);

    for(i = 0; statement[i] != '\0'; i++);
    {
        k = i - 1;
    }
    for(j=0; j<=i-1; j++)
    {
        reverse[j] = statement[k];
        k--;
    }
    printf("The Reverse String is %s\n", reverse);


}
