//WAP to check whether a number is even or odd.

#include<stdio.h>
void odd_even();
int main()
{
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    odd_even(a);
   return 0;
}
void odd_even(int a)
{
    if(a%2 == 0)
   printf("%d is even.",a);
   else
   printf("%d is odd", a);
}