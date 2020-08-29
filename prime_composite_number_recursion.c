#include<stdio.h>
#include<conio.h>
int isPrime(int, int);
int main()
{
    int num, prime;
    printf("Enter a number: ");
    scanf("%d", &num);
    prime = isPrime(num, num/2);
    if(prime == 1)
    {
        printf("\n%d is a prime number. ", num);
    }
    else
    {
        printf("\n%d is a composite number. ", num);
    }

    return 0;
}
int isPrime(int n, int i)
{
    if(i==1)
    {
        return 1;
    }
    else
    {
        if(n%i==0)
            return 0;
    }
}
