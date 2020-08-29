#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50], i, big, small, size;
    printf("Enter the size of the array you want to create: \n");
    scanf("%d", &size);
    printf("\nEnter the %d elements of the array: \n", size);
    for(i=0;i<size;i++)
        scanf("%d", &a[i]);
    big = a[0];
    for(i=0;i<size;i++)
    {
        if(big < a[i])
            big = a[i];
    }
    printf("\nThe biggest number of the array is: %d\n\n", big);
    small = a[0];
    for(i=0;i<size;i++)
    {
        if(small > a[i])
            small = a[i];
    }
    printf("The smallest number of the array is: %d\n\n", small);

    return 0;
}
