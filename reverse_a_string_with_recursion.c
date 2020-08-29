#include<stdio.h>
#include<conio.h>
char* reverse(char* str);
int main()
{
    int i, j, k;
    char str[100];
    char *rev;
    printf("\nEnter the string: ");
    scanf("%s", &str);
    printf("\nThe original string is: %s\n", str);
    rev = reverse(str);
    printf("\nThe reversed string is: %s\n", rev);

}
char* reverse(char *str)
{
    static int i = 0;
    static char rev[100];
    if(*str)
    {
        reverse(str+1);
        rev[i++] = *str;
    }
    return rev;
}
