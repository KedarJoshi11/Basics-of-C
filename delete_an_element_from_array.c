#include<stdio.h>
#include<conio.h>

int main()
{
    int array[100], n, c, position;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);
    for(c=0;c<n;c++)
        scanf("%d", &array[c]);
    printf("\nThe current array is: ");
    for(c=0;c<n;c++)
        printf("\t%d", array[c]);

    printf("\nEnter the position of element you want to delete: ");
    scanf("%d", &position);

    if(position >= n+1)
        printf("No number exists on that position!");
    else
        for(c=position-1; c<n-1; c++)
        array[c] = array[c+1];

    printf("The array after deleting element number %d is: ", position);
    for(c=0;c<n-1;c++)
        printf("\t%d", array[c]);

    return 0;
}
