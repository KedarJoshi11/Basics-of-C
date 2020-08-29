#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    printf("Do you want to shut down your PC now (y/n)?");
    scanf("%c", &ch);

    if(ch == 'y' || ch == 'Y')
    {
        system("C:\\WINDOWS\\SYSTEM32\\shutdown /s");
    }
    else
        return 0;

}
