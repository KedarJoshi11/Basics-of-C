#include<stdio.h>
#include<conio.h>
int func(int a, int b);

int main()
{
    int(*fptr)(int, int);
    fptr = func;
    func(2,3);
    fptr(2,3);

}

int func(int a, int b)
{
    printf("\n\n a = %d \n", a);
    printf("\n\n b = %d \n", b);
}
