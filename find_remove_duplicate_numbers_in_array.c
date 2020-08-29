#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20], i, j, k, n;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("\nEnter %d array elements: \n", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nThe array you entered is: ");
    for(i=0;i<n;i++)
    {
        printf("\t%d", a[i]);
    }
    printf("\nNew array is: ");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;)
        {
            if(a[j] == a[i])
            {
                for(k=j;k<n;k++)
                {
                    a[k] = a[k+1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("\t%d", a[i]);
    }
    return 0;
}
