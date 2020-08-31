#include<stdio.h>
#include<conio.h>
int main()
{
    int year, ans;
    printf("\nEnter the year you want to check is a leap year or not: ");
    scanf("%d", &year);
    if(year%4==0)
    {
        if(year%100 == 0 && year%400 == 0)
        {
            printf("%d is a leap year. ", year);
        }
        else if(year%100 == 0 && year%400 != 0)
        {
            printf("%d is not a leap year. ", year);
        }
        else
        {
            printf("%d is a leap year. ", year);
        }
    }
}
