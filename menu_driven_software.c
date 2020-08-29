#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int choice, num, i;
    unsigned long int fact;
    while(1)
    {
        printf("1. Factorial\n");
        printf("2. Prime\n");
        printf("3. Odd\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            printf("\nEnter Number: ");
            scanf("%d", &num);
            fact = 1;
            for(i = 1; i <= num; i++)
            {
                fact = fact*i;
            }
            printf("\nThe factorial of %d is: %d", num, fact);
            break;
        case 2:
            printf("\nEnter a number to check if it's prime or not: ");
            scanf("%d", &num);
            if(num==1)
            {
                printf("\nThe number 1 is neither prime not composite. ");
            }
            for(i=2;i<num;i++)
            {
                if(num%i == 0)
                {
                    printf("\n%d is not a prime number. \n", num);
                    break;
                }
            }
            if(i==num)
            {
                printf("\n%d is prime. ", num);
                break;
            }
        case 3:
            printf("\nEnter a number: ");
            scanf("%d", &num);
            if(num%2 == 0)
                printf("\n%d is an even number. ", num);
            else
                printf("\n%d is an odd number. ", num);
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}
