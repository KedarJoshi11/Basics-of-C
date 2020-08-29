#include<stdio.h>
#include<conio.h>
int main()
{
    int n, m, c, d, first[10][10], second[10][10], sum[10][10], diff[10][10];
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d%d", &m, &n);
    printf("\nEnter the %d elements of the first matrix: ", m*n);
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            scanf("%d", &first[c][d]);
        }
    }
    printf("Enter the %d elements of the second matrix: ", m*n);
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
            scanf("%d", &second[c][d]);
    }
    printf("\nThe first matrix is: \n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            printf("%d\t", first[c][d]);
        }
        printf("\n");
    }
    printf("\nThe Second Matrix is: \n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            printf("%d\t", second[c][d]);
        }
        printf("\n");
    }
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            sum[c][d] = first[c][d] + second[c][d];
        }
    }
    printf("\nThe Sum of the two entered matrix is: \n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            diff[c][d] = first[c][d] - second[c][d];
        }
    }
    printf("\nThe difference of two entered matrix is: \n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            printf("%d\t", diff[c][d]);
        }
        printf("\n");
    }
}
