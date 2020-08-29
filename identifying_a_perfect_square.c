#include<stdio.h>
#include<conio.h>
int main()
{
    int i, number;
    printf("\nEnter a number: ");
    scanf("%d", &number);
    for(i=0;i<=number;i++)
    {
        if(number == i*i)
        {
            printf("\n\t%d is a perfect square. \n", number);

            return 0;
        }
    }
    printf("\n\t%d is not a perfect square. ", number);

    return 0;

}
