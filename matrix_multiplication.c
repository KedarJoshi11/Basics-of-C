#include<stdio.h>
#include<conio.h>
int main()
{
    int c, d, n, m, p, q, k, first[10][10], second[10][10], pro[10][10], sum=0;
    printf("Enter the number of rows and columns: \n");
    scanf("%d%d", &m, &n);
    printf("\nEnter the %d elements of the first matrix: \n", m*n);
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            scanf("%d", &first[c][d]);
        }
    }
    printf("\nEnter the rows and columns of the second matrix: \n");
    scanf("%d%d", &p, &q);
    if(n != p)
    {
        printf("\nMatrices with the given order can't be multiplied. ");
    }
    else
    {
        printf("\nEnter the %d elements of the second matrix: \n", p*q);
        for(c=0;c<p;c++)
        {
            for(d=0;d<q;d++)
            {
                scanf("%d", &second[c][d]);
            }
        }
    }
    //printing the first matrix
    printf("\nThe first matrix is: \n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            printf("%d\t", first[c][d]);
        }
        printf("\n");
    }
    //printing the second matrix
    printf("\nThe second matrix is: \n");
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
        for(d=0;d<q;d++)
        {
            for(k=0;k<p;k++)
            {
                sum = sum+first[c][k]*second[k][d];
            }
        pro[c][d] = sum;
        sum=0;
        }
    }
    //printing the multiplication.
    printf("\nThe multiplication of the two entered matrices is: \n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            printf("%d\t", pro[c][d]);
        }
        printf("\n");
    }
}
