#include<stdio.h>
#include<conio.h>
int main()
{
    float principal, rate, simple_interest;
    int time;
    printf("\nEnter principal amount: ");
    scanf("%f", &principal);
    printf("\nEnter rate: ");
    scanf("%f", &rate);
    printf("\nEnter time: ");
    scanf("\n%d", &time);
    simple_interest = (principal*rate*time)/100.0;
    printf("\nSimple Interest = %.2f\n", simple_interest);


    return 0;
}
