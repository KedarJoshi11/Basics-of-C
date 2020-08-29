#include<stdio.h>
#include<conio.h>
int main()
{
    int n, array[100], element, c, position;
    int found = 0;
    printf("Enter the number of elements you want to input: ");
    scanf("%d", &n);
    //Entering the array
    printf("\nEnter %d elements: \n", n);
    for(c=0;c<n;c++)
        scanf("%d", &array[c]);
    //current array
    printf("The current array is: \n");
    for(c=0;c<n;c++)
        printf("\t%d", array[c]);
    //deleting the array
    printf("\nEnter the element you want to delete: ");
    scanf("%d", &element);
    for(c=0;c<n;c++)
        if(array[c] == element)
        {
            found = 1;
            position = c;
            break;
        }
    //checking if the entered number is present in the array and deleting it.
    if(found == 1)
    {
        for(c=position;c<n-1;c++)
            array[c] = array[c+1];
    }
    else
        printf("Element %d not found in array!", element);
    //printing the new array
    printf("The array after deleting the element is:\n");
    for(c=0;c<n-1;c++)
        printf("\t%d", array[c]);
    printf("\n");
    return 0;
}
