#include<stdio.h>
//writing a programe to enter age from keyboard and print that you are eligible for voting or not.
int main()
{
    int a;
    printf("Enter your age: ");
    scanf("%d", &a);
   if(a>=18)
   printf("%d You are eligible for voting",a);
   else
   printf("%d You are not eligible for voting", a);
   return 0;
}

