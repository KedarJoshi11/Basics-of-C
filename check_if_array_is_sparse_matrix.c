#include<stdio.h>
#include<conio.h>
int main()
{
    int n, m, c, d, matrix[10][10];
    int counter=0;
    printf("Enter the number of rows and columns in the Matrix: ");
    scanf("%d%d", &n, &m);
    printf("\nEnter the %d elements of the matrix: \n\n", m*n);
    for(c=0;c<m;c++) //to iterate rows
    {
        for(d=0;d<n;d++) //to iterate columns
        {
            scanf("%d", &matrix[c][d]);
            if(matrix[c][d] == 0)
            counter++;
        }
    }
    //printing the matrix
    printf("\nThe entered matrix is: \n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            printf("%d\t", matrix[c][d]);
        }
    printf("\n");
    }
    if(counter > (m*n)/2)
        printf("\n\nThe Entered Matrix is Sparse Matrix. \n\n");
    else
        printf("\n\nThe Entered Matrix is not a Sparse Matrix. \n\n");




    return 0;
}
