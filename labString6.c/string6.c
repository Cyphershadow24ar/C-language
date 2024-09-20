//WAP to count total number of alphabets, digits and special characters in a string.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char str[50];
    printf("enter a string:");
    gets(str);
    int a=0,d=0,s=0,sc=0;
    int l=strlen(str);
    for(int i=0;i<l;i++)
    {
     if(isalpha(str[i]))
     a++;
     else if(isdigit(str[i]))
     d++;
     else if(isspace(str[i]))
     s++;
     else
     sc++;
    }
    printf("no. of alphabet =%d\n",a);
     printf("no. of digit =%d\n",d);
      printf("no. of space =%d\n",s);
       printf("no. of special character =%d",sc);
}