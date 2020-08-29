#include<stdio.h>
#include<conio.h>
int main()
{
    char a[1000];
    int c = 0;
    int count[26] = {0};
    printf("Enter the string: ");
    gets(a);
    while(a[c] != '\0')
    {
        if(a[c] >= 'a' && a[c] <= 'z')
        {
            count[a[c] - 'a']++;
        }
        c++;
    }
    for(c=0;c<26;c++)
    {
        printf("\n\t%c Occurs %d times in the string.", c+'a', count[c]);
    }
    return 0;
}
