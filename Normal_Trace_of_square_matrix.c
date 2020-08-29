#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i, j, n, aj[10][10], sum = 0, sum1 = 0, a = 0, normal;
    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &n);
    printf("Enter the %d elements of the first matrix: ", n*n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &aj[i][j]);
            a=aj[i][j]*aj[i][j];
            sum1 += a;
        }
    }
    normal = sqrt((double)sum1);
    printf("\nThe normal of the matrix is: %d", normal);
    for(i=0;i<n;i++)
    {
        sum = sum + aj[i][i];
    }
    printf("\nThe trace of the matrix is: %d", sum);
}
