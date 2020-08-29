#include<stdio.h>
#include<conio.h>
int main()
{
    char arr[100];
    int i=0;
    int vowel = 0;
    int consonant = 0;
    printf("Enter a string: ");
    gets(arr);
    printf("\nYou entered: %s\n", arr);
    for(i=0;arr[i] != '\0';i++)
    {
        //printf("\nWe're in loop now");
        //printf("%s\n", arr[i]);//Doesn't even print this line.
        if(arr[i] == 'i' || arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'o' || arr[i] == 'u' ||
           arr[i] == 'I' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'O' || arr[i] == 'U')
        {
            printf("\n%c is a Vowel.\n", arr[i]);
            vowel += 1;
        }
        else
            printf("\n%c is a consonant.\n", arr[i]);
            consonant += 1;
    }
    printf("\nNumber of vowels: %d", vowel);
    printf("\nNumber of consonants: %d\n", consonant);
    return 0;
}
