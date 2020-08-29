#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i;
    float sum = 0, a;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("You want to enter %d numbers. ", n);
    for(i=0;i<n;i++)
    {
        printf("Enter element number %d: ", i+1);
        scanf("%f", &a);
        sum += a;
    }
    printf("The average of the numbers entered is: %f", (sum/n));


    return 0;
}
