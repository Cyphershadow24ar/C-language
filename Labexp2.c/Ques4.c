#include<stdio.h>
//WAP to check whether a character is a vowel or consonant.
int main()
{
    char c;
    printf("Enter Character:-");
    scanf("%c",&c);
    if(c=='a' ||c=='e' ||c=='i' ||c=='o' ||c=='u')
    printf("its vowel");
    else
    printf("its consonant");
    return 0; 
}