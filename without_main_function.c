#include<stdio.h>
#define decode(m,a,i,n) m##a##i##n
#define go decode(m,a,i,n)

int go()
{
    printf("\nThis is a program without the use of main function directly. \n");
}
