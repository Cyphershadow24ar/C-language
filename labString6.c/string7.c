//WAP to read a string and replace lowercase characters by uppercase and vice-versa.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char str[50];
    printf("enter a string : ");
    gets(str);
     int l=strlen(str);
    for(int i=0;i<l;i++)
    {
        if(isupper(str[i]))
        str[i]=tolower(str[i]);
        
        else
        str[i]=toupper(str[i]);
    }
    printf("%s",str);
}