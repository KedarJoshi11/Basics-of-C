#include<stdio.h>
#include<conio.h>
int main()
{
    float radius;
    float area, circumference;
    printf("\nEnter the radius of the circle: ");
    scanf("%f", &radius);
    area = 3.14*radius*radius;
    circumference = 2*3.14*radius;
    printf("\n\tArea = %f \t Circumference = %f", area, circumference);
}
