//WAP to find the lenght of a string without using library function.
#include<stdio.h>
#include<string.h>
int main ()
{
   char string [50];
   printf("Enter the string");
   scanf("%s",string);
   int i, length = 0;
   for(i=0 ; string[i] != '\0'; i++)
   {
    (length++);
   }
   printf("length of string : %d",length);
   return 0;
}
