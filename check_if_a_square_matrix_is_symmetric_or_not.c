#include<stdio.h>
#include<conio.h>
int main()
{
    int c, d, a[10][10], b[10][10], n, temp;
    printf("\nEnter the dimension of the Matrix: ");
    scanf("%d", &n);
    printf("Enter the %d elements of the matrix: ", n*n);
    for(c=0;c<n;c++)
    {
        for(d=0;d<n;d++)
        {
            scanf("%d", &a[c][d]);
        }
    }
    //Finding the transpose of the matrix
    for(c=0;c<n;c++)
    {
        for(d=0;d<n;d++)
        {
            b[d][c] = a[c][d];
        }
    }
    //printing the original matrix
    printf("\nThe Original Matrix is: \n");
    for(c=0;c<n;c++)
    {
        for(d=0;d<n;d++)
        {
            printf("%d\t", a[c][d]);
        }
        printf("\n");
    }
    //printing the transpose.
    printf("\nThe transpose is: \n");
    for(c=0;c<n;c++)
    {
        for(d=0;d<n;d++)
        {
            printf("%d\t", b[c][d]);
        }
        printf("\n");
    }
    //Checking if the matrix is the same as the transpose.
    for(c=0;c<n;c++)
    {
        for(d=0;d<n;d++)
        {
            if(a[c][d] != b[c][d])
            {
                printf("\nMatrix is not symmetric. \n");
                exit(0);
            }
        }
    }
    printf("\nMatrix is Symmetric. ");

}
