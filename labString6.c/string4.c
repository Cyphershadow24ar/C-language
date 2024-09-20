//WAPto  count the total number of words in a string.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char str[50];
    printf("enter a string:");
    gets(str);
     int c=1;
     int l=strlen(str);
    
  for(int i=0;i<=l;i++)
  {
    if(str[i]==' ')
    c++;
  }
  printf("No. of words : %d",c);
}