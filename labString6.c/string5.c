//WAP to compare two strings without using string library functions.
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
    char str[50],str2[50];
    printf("enter two strings :");
    scanf("%s%s",str,str2);
    for(int i=0;str[i]!='\0'&&str2[i]!='\0';i++)
    {
        if(str[i]!=str2[i])
        {
        printf("not equal strings.");
        exit(0);
        }
    }
    printf("equal strings.");
    return 0;
}