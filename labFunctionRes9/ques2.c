//WAP to check whether a character is a vowel or consonant.
#include<stdio.h>
void vowel_consonant(char a);
int main()
{
    char a;
    printf("Enter a vowel or consonant: ");
    scanf("%c",&a);
    vowel_consonant(a);
    return 0;
}
void vowel_consonant(char a)
{
     if(a=='a' ||a=='e' ||a=='i' ||a=='o' ||a=='u')
    printf("its vowel");
    else
    printf("its consonant");
}