#include<stdio.h>
#include<conio.h>
int main()
{
    int h, b;
    float area;
    printf("\n\nEnter the height of the triangle: ");
    scanf("%d", &h);
    printf("\nEnter the base of the triangle: ");
    scanf("%d", &b);
    area = (h*b)/(float)2;
    printf("The area of triangle is: %.2f", area);
}
