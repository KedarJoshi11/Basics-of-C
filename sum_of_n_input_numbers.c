#include<stdio.h>
#include<conio.h>

int main()
{
    int num, array[100], i, sum=0;
    printf("Enter the number of integers you want to add: ");
    scanf("%d", &num);
    printf("Enter the %d elements you want to add: \n", num);
    for(i=0;i<num;i++)
        scanf("%d", &array[i]);
    printf("\n");
    for(i=0;i<num;i++)
        sum += array[i];
    printf("\nThe sum of the numbers you entered is: %d", sum);

    return 0;

}
