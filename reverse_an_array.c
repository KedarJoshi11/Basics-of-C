#include<stdio.h>
#include<conio.h>
int main()
{
    int n, c, d, a[100], b[100];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);

    for(c=0;c<n;c++)
        scanf("%d", &a[c]);
    printf("The current array is: \n");
    for(c=0;c<n;c++)
        printf("\t%d", a[c]);

    for(c = n-1, d = 0; c >= 0; c--, d++)
        b[d] = a[c];

    for(c=0;c<n;c++)
        a[c] = b[c];

    printf("\nThe reverse array is: \n");
    for(c=0;c<n;c++)
        printf("\t%d", a[c]);

    return 0;
}
