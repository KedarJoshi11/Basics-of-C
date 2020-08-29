#include<stdio.h>
#include<conio.h>
int main()
{
    int n, i, *ptr, sum = 0;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    //Dynamic memory allocation using malloc()
    ptr = (int *)malloc(n*sizeof(int));
    if(ptr == NULL)
    {
        printf("\nMemory not allocated!");
        return 0;
    }
    printf("Enter elements of array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", ptr+i);
        sum = sum +*(ptr+i);
    }
    printf("\nThe elements of the array are: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t", ptr[i]);
    }
    free(ptr);


    return 0;

}
