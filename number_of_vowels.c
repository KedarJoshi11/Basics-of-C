#include<stdio.h>
#include<conio.h>
int count_vowels(char []);
int check_vowel(char);
int main()
{
    char a[100];
    int m;
    printf("Enter a string: ");
    gets(a);
    m = count_vowels(a);
    printf("The number of vowels in the string %s is: %d", a, m);

    return 0;
}
int count_vowels(char adi[])
{
    int count=0, flag = 0, c = 0;
    char d;
    do
    {
        d = adi[c];
        flag = check_vowel(d);

        if(flag == 1)
        {
            //printf("%s is a vowel\n", d);
            count++;
        }
        c++;
    }while(d != '\0'); //terminating the do while loop, after it reaches the end of the string.
    return count;
}
int check_vowel(char ajj)
{
    if(ajj >= 'A' && ajj <= 'Z')
    {
        ajj = ajj+'a' - 'A';
    }
    if(ajj == 'a' || ajj == 'e' || ajj == 'i' || ajj == 'o' || ajj == 'u')
        return 1; // making flag = 1
    return 0; // if not a vowel flag remains 0
}
