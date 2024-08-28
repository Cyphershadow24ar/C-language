#include <stdio.h>
//WAP to check whether a number is even or odd.
int main()
{
    int a;
    printf("Enter an integer:-");
    scanf("%d", &a);
   if(a%2 == 0)
   {
   printf("%d is even.",a);
   }
   else
   {
   printf("%d is odd", a);
   }
   return 0;
}

 