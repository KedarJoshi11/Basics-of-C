#include<stdio.h>
#include<conio.h>
const int MAX = 5;
int main()
{
    int var[] = {100, 200, 300};
    int i, *ptr;
    ptr = var;

    for(i=0;i<MAX;i++)
    {
        printf("\nAddress of var[%d] = %x", i, ptr);
        printf("\nValue of var[%d] = %x\n", i, *ptr);
        ptr++;
    }

}
